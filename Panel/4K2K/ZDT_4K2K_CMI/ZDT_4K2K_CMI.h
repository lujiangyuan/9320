/*
	$Workfile:   VEGA_WQHD.h  $
	$Revision: 1.1 $
	$Date: 2011/09/08 06:56:13 $
*/

#ifdef INCLUDE_ZDT_4K2K_CMI

#include "..\..\Panel\4K2K\ZDT_4K2K_CMI\OverdriveLut.h"
#include "..\..\Panel\4K2K\ZDT_4K2K_CMI\GammaLut.h"

char ROM PanelName_ZDT_4K2K_CMI[] = "ZDT_4K2K_CMI";

ROM WORD sRGB2rgb_ZDT_4K2K_CMI[9] =
{
	0x1000, 0x0000, 0x0000,
	0x0000, 0x1000, 0x0000,
	0x0000, 0x0000, 0x1000
};

ROM gmt_PanelData Panel_ZDT_4K2K_CMI =
{
	PanelName_ZDT_4K2K_CMI,
	ZDT_4K2K_CMI,			// Panel ID (refer to enum defined in panel.h)
	PANEL_4K2K,						// gmd_PanelType PanelType
	FORMAT_ORG_2D,    // gmd_PanelDataFormat;
	FOUR,								// BYTE PixPerClock
	10, //8,									// BYTE  Depth
	3840, //1920, //2048,								// WORD  Width
	2160,								// WORD  Height
	30, // 29, //60,									// BYTE  MaxVFreq
	29, // 31, //60,									// BYTE  MinVFreq
	316000L, //287800L,								// DWORD MaxPClk (KHz)  
	3968, //2208,								// WORD W_MinHTotal
	3968, //,								// W_TypHTotal
	4000,								// W_22HTotal
	4000,								// W_33HTotal
	32, //32,								// BYTE  MinHSyncWidth
	16, //80, 								// BYTE  MinHSyncBackPorch
	2250, //2173,								// W_22VTotal
	2250, //2173,								// W_33VTotal
	2208, //2173,								// WORD  MaxVtotal
	2208, //2173,								// WORD  MinVtotal
	2208, //2173,								// WORD TypVTotal
	8, //3,									// BYTE  MinVSyncWidth
	16, //7,									// BYTE  MinVSyncBackPorch
	0xA0A0,//0x1101,								// WORD  PowerUpTiming
	0x1101,								// WORD  PowerDownTiming
	0x21,								// WORD AccToPixelVal
	0x0,								// BYTE  SpreadSpectrumCtrl
	0,									// DCLK display timing delay adjustment in ns unit
	Wa_OverDriveLUT_ZDT_4K2K_CMI,		// Overdrive look up table
	sRGB2rgb_ZDT_4K2K_CMI,
	Sta_GammaLUT_ZDT_4K2K_CMI,
	0,									// WORD  Invert_DVS
	0,									// WORD  Invert_DHS
	0,									// WORD  Invert_DCLK
	0,									// WORD  Invert_DEN
	
	0, // 0xFF,								// WORD  DportSwap
	TRUE,								// WORD  LVDSInterface
	QUAD_BUS,							// WORD  W_LVDS_BusType
	LVDS_EIGHT_BIT_MODE,				// WORD  LvdsPanelMode
	0xFF,								// WORD  Spread_Spect_En
	NO_SWAP,								// WORD	LvdsPosNegSwap
	STPLF_DISPLAY_PAD_DRIVE_1_25,		// WORD PadDrive	
	STPLF_DISPLAY_LVDS_CURRENT_3_5,		// WORD  W_LvdsCurrentCtrl
	OUT_24_48_BIT,						// WORD  W_BitOutput
	STPANEL_LVDS_MAP_STANDARD1,			// WORD W_LVDSSignalMap
	0x0063,								// WORD  W_LvdsClkData
};
extern ROM gmt_PanelData Panel_ZDT_4K2K_CMI;

#else
	#define Panel_ZDT_4K2K_CMI	(ROM gmt_PanelData *)PanelArray
	//
	// If panel file is not included in the project, but the panel is selected to be
	// the default panel during bootup, issue warning message
	//
	#if (DEFAULT_PANEL == ZDT_4K2K_CMI)
		#pragma message "Default panel will not bootup unless INCLUDE_ZDT_4K2K_CMI is defined!"
	#endif
#endif

