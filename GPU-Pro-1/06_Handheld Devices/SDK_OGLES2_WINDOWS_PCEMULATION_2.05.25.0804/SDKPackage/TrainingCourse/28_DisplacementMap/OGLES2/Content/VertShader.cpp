// This file was created by Filewrap 1.1
// Little endian mode
// DO NOT EDIT

#include "../PVRTMemoryFileSystem.h"

// using 32 bit to guarantee alignment.
#ifndef A32BIT
 #define A32BIT static const unsigned int
#endif

// ******** Start: VertShader.vsh ********

// File data
static const char _VertShader_vsh[] = 
	"attribute highp   vec3  inVertex;\r\n"
	"attribute mediump vec3  inNormal;\r\n"
	"attribute mediump vec2  inTexCoord;\r\n"
	"\r\n"
	"uniform highp   mat4  MVPMatrix;\r\n"
	"uniform mediump vec3  LightDirection;\r\n"
	"uniform mediump\tfloat  DisplacementFactor;\r\n"
	"\r\n"
	"varying lowp    float  LightIntensity;\r\n"
	"varying mediump vec2   TexCoord;\r\n"
	"\r\n"
	"uniform sampler2D  sDisMap;\r\n"
	"\r\n"
	"void main()\r\n"
	"{\r\n"
	"\t/* \r\n"
	"\t\tCalculate the displacemnt value by taking the colour value from our texture\r\n"
	"\t\tand scale it by out displacement factor.\r\n"
	"\t*/\r\n"
	"\tmediump float disp = texture2D(sDisMap, inTexCoord).r * DisplacementFactor;\r\n"
	"\r\n"
	"\t/* \r\n"
	"\t\tTransform position by the model-view-projection matrix but first\r\n"
	"\t\tmove the untransformed position along the normal by our displacement\r\n"
	"\t\tvalue.\r\n"
	"\t*/\r\n"
	"\tgl_Position = MVPMatrix * vec4(inVertex + (inNormal * disp), 1.0);\r\n"
	"\r\n"
	"\t// Pass through texcoords\r\n"
	"\tTexCoord = inTexCoord;\r\n"
	"\t\r\n"
	"\t// Simple diffuse lighting in model space\r\n"
	"\tLightIntensity = dot(inNormal, -LightDirection);\r\n"
	"}";

// Register VertShader.vsh in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_VertShader_vsh("VertShader.vsh", _VertShader_vsh, 949);

// ******** End: VertShader.vsh ********

// This file was created by Filewrap 1.1
// Little endian mode
// DO NOT EDIT

#include "../PVRTMemoryFileSystem.h"

// using 32 bit to guarantee alignment.
#ifndef A32BIT
 #define A32BIT static const unsigned int
#endif

// ******** Start: VertShader.vsc ********

// File data
A32BIT _VertShader_vsc[] = {
0x10fab438,0xb08a8514,0x30050100,0x2101,0xa9142cc2,0x0,0x0,0x17040000,0x0,0x4000000,0x0,0x19000000,0x202,0x0,0x1020000,0x0,0x0,0x6c020000,0x55535020,0x17,0x260,0x1,0x0,0x80c,0x0,0x2,0x79,0x0,0x8,0x0,0xffffffff,0x0,0x76000a,0xffff,0xb,0x0,0x140000,0x0,0x10000,0x0,0x0,0xfffc0000,0x0,0x0,0x0,0x20000,0xffffffff,0x120000,0x2000b,0x0,0x20000,0x1,0x20010,0x10002,0x20000,0x10003,0x10010,0x20008,0x10000,0x30009,0x10000,0x4000a,0x10000,0x5000b,
0x10000,0x6000c,0x10000,0x7000d,0x10000,0x8000e,0x10000,0x9000f,0x10000,0xa0010,0x10000,0xb0011,0x10000,0xc0012,0x10000,0xd0013,0x10000,0xe0014,0x10000,0xf0015,0x10000,0x100016,0x10000,0x110017,0x7730000,0x40000,0x20000,0x2,0x1,0x80018001,0x80018001,0x0,0x0,0x10000,0x1d7ea040,0x54080,0x0,0x80010000,0x80018001,0x8001,0x0,0x0,0x10000,0x6880001,0x30003,0x30003,0x30002,0x50004,0x10001,0x10001,0x0,0x0,0x1,0x90008030,0xe083160c,0x2,0x1,0x80018001,0x80018001,0x0,0x0,0xaa300000,0x1006d040,0x200c1,
0x20000,0x80010000,0x80008001,0x8001,0x0,0x40000,0x10000,0x101,0x108fa10,0x2006a0e1,0x200a0,0xb0000,0x80010000,0x80018001,0x8001,0x0,0x40000,0x0,0x10000,0x10001,0x10000,0x10001,0x1010101,0xfa100000,0xa0800000,0x28a11001,0xb0800255,0x10e02009,0xf001c60d,0x38ab0606,0xf0020811,0x38820606,0xf0024a15,0x38820606,0x701f1a18,0xa21001,0xf001c70f,0x38ab0606,0xf0020913,0x38820606,0xf0024b17,0x38820606,0x705f1a1a,0xa21001,0x6,0x1800,0x0,0x0,0x0,0x803f0000,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0xa000000,0x73694473,0x70614d,0x3180000,0x10000,0x200,0x10001,0x546e6900,0x6f437865,0x64726f,0x4030000,0x10000,0x100,0x30004,0x73694400,0x63616c70,0x6e656d65,0x63614674,0x726f74,0x3020000,0x10000,0x100,0x10001,0x4e6e6900,0x616d726f,0x6c,0x404,0x1000001,0x40400,0x69000007,0x7265566e,0x786574,0x4040000,0x10000,0x8000100,0x70004,0x5f6c6700,0x69736f50,0x6e6f6974,0x5010000,0x1000005,0x10000,0xf000400,0x564d0000,0x74614d50,0x786972,0x3160000,0x10000,0x8000100,0xffff10,0x78655400,0x726f6f43,0x64,0x503,0x1000001,0x20000,0x4c000003,0x74686769,0x65726944,
0x6f697463,0x6e,0x304,0x1000001,0x30100,0x4c000007,0x74686769,0x65746e49,0x7469736e,0x79,0x502,0x1000001,0x10400,0x1,
};

// Register VertShader.vsc in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_VertShader_vsc("VertShader.vsc", _VertShader_vsc, 1079);

// ******** End: VertShader.vsc ********
