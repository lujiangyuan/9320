/*
	$Workfile:   OverdriveLut.h  $
	$Revision: 1.1 $
	$Date: 2010/03/19 07:53:15 $
*/

/******************************************************************************
				O V E R D R I V E    L U T
/*****************************************************************************/


//extern ROM WORD OverDriveLut_LC320EXN_MED[];
//extern ROM WORD OverDriveLut_LC320EXN_LOW[];
//extern ROM WORD OverDriveLut_LC320EXN_HIGH[];

SWORD ROM * ROM Wa_OverDriveLUT_LC320EXN[] = 
{
//	OverDriveLut_LC320EXN_MED,
//	OverDriveLut_LC320EXN_LOW,
//	OverDriveLut_LC320EXN_HIGH,
	NULL_PTR,						// Signifies no more tables
};;



//Medium
ROM WORD OverDriveLut_LC320EXN_MED[72] =
{
// Given by Ling Jul. 07, 2005
0x1a, 0x3a, 0x5a, 0x7b, 0x9a, 0xc8, 0xdc, 0x103, 
0x3fe, 0x3c, 0x5c, 0x7b, 0x9a, 0xb9, 0xd9, 0x103, 
0x3f9, 0x21, 0x5d, 0x7d, 0x9b, 0xba, 0xda, 0x102, 
0x3f3, 0x21, 0x42, 0x7d, 0x9c, 0xbc, 0xdd, 0x101, 
0x3e9, 0x22, 0x43, 0x63, 0x9d, 0xbc, 0xdc, 0x101, 
0x3de, 0x22, 0x45, 0x66, 0x85, 0xbf, 0xdd, 0x100, 
0x3dd, 0x1c, 0x47, 0x6a, 0x87, 0xa3, 0xde, 0x100, 
0x3d8, 0xb, 0x49, 0x6c, 0x8a, 0xa6, 0xc3, 0x100, 
0x3e7, 0x7, 0x49, 0x6f, 0x8d, 0xa9, 0xc6, 0xe2,
};

//Low
/*
ROM WORD OverDriveLut_LC320EXN_LOW[72] =
{
// Given by Ling Jul. 07, 2005
0x1a, 0x3a, 0x5a, 0x7b, 0x9a, 0xc8, 0xdc, 0x103, 
0x3fe, 0x3c, 0x5c, 0x7b, 0x9a, 0xb9, 0xd9, 0x103, 
0x3f9, 0x21, 0x5d, 0x7d, 0x9b, 0xba, 0xda, 0x102, 
0x3f3, 0x21, 0x42, 0x7d, 0x9c, 0xbc, 0xdd, 0x101, 
0x3e9, 0x22, 0x43, 0x63, 0x9d, 0xbc, 0xdc, 0x101, 
0x3de, 0x22, 0x45, 0x66, 0x85, 0xbf, 0xdd, 0x100, 
0x3dd, 0x1c, 0x47, 0x6a, 0x87, 0xa3, 0xde, 0x100, 
0x3d8, 0xb, 0x49, 0x6c, 0x8a, 0xa6, 0xc3, 0x100, 
0x3e7, 0x7, 0x49, 0x6f, 0x8d, 0xa9, 0xc6, 0xe2,
};
*/

//High
/*
ROM WORD OverDriveLut_LC320EXN_HIGH[72] =
{
// Given by Ling Jul. 07, 2005
0x1a, 0x3a, 0x5a, 0x7b, 0x9a, 0xc8, 0xdc, 0x103, 
0x3fe, 0x3c, 0x5c, 0x7b, 0x9a, 0xb9, 0xd9, 0x103, 
0x3f9, 0x21, 0x5d, 0x7d, 0x9b, 0xba, 0xda, 0x102, 
0x3f3, 0x21, 0x42, 0x7d, 0x9c, 0xbc, 0xdd, 0x101, 
0x3e9, 0x22, 0x43, 0x63, 0x9d, 0xbc, 0xdc, 0x101, 
0x3de, 0x22, 0x45, 0x66, 0x85, 0xbf, 0xdd, 0x100, 
0x3dd, 0x1c, 0x47, 0x6a, 0x87, 0xa3, 0xde, 0x100, 
0x3d8, 0xb, 0x49, 0x6c, 0x8a, 0xa6, 0xc3, 0x100, 
0x3e7, 0x7, 0x49, 0x6f, 0x8d, 0xa9, 0xc6, 0xe2,
};
*/
