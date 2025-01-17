/******************************************************************/
/* UIInt.cpp                                                      */
/* -----------------------                                        */
/*                                                                */
/* There's nearly always values in your program that need to      */
/*     change according to some user input.  Often these values   */
/*     require all sorts of logic to update, set, get, or         */
/*     change in response to user interface.                      */
/* This class, and others like it, inherit from UIVariable and    */
/*     try to avoid spreading UI interface logic out over the     */
/*     entire code, and instead encapsulate it in these classes.  */
/*     The additional advantage here, is that derived classes     */
/*     from UIVariable can all be treated identically, avoiding   */
/*     special-casing depending on the variable type.             */
/*                                                                */
/* Realize that this class adds overhead, and shouldn't be used   */
/*     for all variables.  Just those that might vary with input  */
/*     or, perhaps, those defined in an input or script file.     */
/*                                                                */
/* Chris Wyman (02/12/2009)                                       */
/******************************************************************/


#include "UIInt.h"

void UIInt::SetValue( int newValue )
{
	value = newValue;
	if (value < _min) value = _min;
	if (value > _max) value = _max;
}

bool UIInt::UpdateFromInput( unsigned int inputKey )
{
	bool modified = false;
	for (unsigned int i=0; i< keys.Size(); i++)
	{
		if (inputKey == keys[i])
		{
			value += responses[i];
			modified = true;
			break;
		}
	}
	if (value < _min) value = _min;
	if (value > _max) value = _max;
	return modified;
}
