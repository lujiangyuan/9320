/*
	$Workfile:   OverdriveLut.h  $
	$Revision: 1.2 $
	$Date: 2010/07/05 07:20:27 $
*/


extern ROM WORD OverDriveLut_LM260WU2_SLA1_MED[];
extern ROM WORD OverDriveLut_LM260WU2_SLA1_LOW[];
extern ROM WORD OverDriveLut_LM260WU2_SLA1_HIGH[];

WORD ROM * ROM Wa_OverDriveLUT_LM260WU2_SLA1[] =
{
	OverDriveLut_LM260WU2_SLA1_MED,
	OverDriveLut_LM260WU2_SLA1_LOW,
	OverDriveLut_LM260WU2_SLA1_HIGH,
	NULL_PTR,						// Signifies no more tables
};

ROM WORD OverDriveLut_LM260WU2_SLA1_MED [] =
{
	0x27,	0x52,	0x80,	0xAD,	0xD2,	0xE8,	0xFA,	0xFF,
	0x0,	0x48,	0x70,	0x9E,	0xCA,	0xE4,	0xF9,	0xFF,
	0x0,	0x18,	0x69,	0x96,	0xC4,	0xE0,	0xF8,	0xFF,
	0x0,	0xC,	0x38,	0x8C,	0xC0,	0xDE,	0xF4,	0xFF,
	0x0,	0xB,	0x2C,	0x54,	0xAC,	0xD2,	0xF3,	0xFF,
	0x0,	0xA,	0x28,	0x4A,	0x74,	0xCA,	0xF2,	0xFF,
	0x0,	0x8,	0x26,	0x48,	0x68,	0x90,	0xEC,	0xFF,
	0x0,	0x0,	0x18,	0x36,	0x58,	0x7A,	0xAA,	0xFF,
	0x0,	0x0,	0x5,	0x6,	0x26,	0x5A,	0x7A,	0xC2
};

ROM WORD OverDriveLut_LM260WU2_SLA1_LOW [] =
{
	0x27,	0x52,	0x80,	0xAD,	0xD2,	0xE8,	0xFA,	0xFF,
	0x0,	0x48,	0x70,	0x9E,	0xCA,	0xE4,	0xF9,	0xFF,
	0x0,	0x18,	0x69,	0x96,	0xC4,	0xE0,	0xF8,	0xFF,
	0x0,	0xC,	0x38,	0x8C,	0xC0,	0xDE,	0xF4,	0xFF,
	0x0,	0xB,	0x2C,	0x54,	0xAC,	0xD2,	0xF3,	0xFF,
	0x0,	0xA,	0x28,	0x4A,	0x74,	0xCA,	0xF2,	0xFF,
	0x0,	0x8,	0x26,	0x48,	0x68,	0x90,	0xEC,	0xFF,
	0x0,	0x0,	0x18,	0x36,	0x58,	0x7A,	0xAA,	0xFF,
	0x0,	0x0,	0x5,	0x6,	0x26,	0x5A,	0x7A,	0xC2
};

ROM WORD OverDriveLut_LM260WU2_SLA1_HIGH [] =
{
	0x2A,	0x54,	0x88,	0xAD,	0xD2,	0xE8,	0xFF,	0xFF,
	0x0,	0x4A,	0x78,	0xA8,	0xCD,	0xE4,	0xFE,	0xFF,
	0x0,	0x16,	0x70,	0xA4,	0xC8,	0xE0,	0xFC,	0xFF,
	0x0,	0xC,	0x2C,	0x90,	0xC4,	0xDE,	0xFA,	0xFF,
	0x0,	0xB,	0x2C,	0x54,	0xBC,	0xDC,	0xF8,	0xFF,
	0x0,	0xA,	0x28,	0x4A,	0x74,	0xD0,	0xF6,	0xFF,
	0x0,	0x8,	0x26,	0x48,	0x62,	0x8C,	0xF2,	0xFF,
	0x0,	0x4,	0x20,	0x40,	0x58,	0x78,	0xA4,	0xFF,
	0x0,	0x2,	0x5,	0x6,	0x26,	0x46,	0x7A,	0xC2
};


