//#include "\z\tfar\addons\core\defines.hpp"

class RscBackPicture;
class RscEditLCD;
class HiddenButton;
class HiddenRotator;
class HiddenFlip;
class rscButton;
class rscRotator;

#define TF_IDD_BACKGROUND 67676
//--- rt1523g_radio_dialog
#define IDD_RT1523G_RADIO_DIALOG  1666
#define IDC_RT1523G_BACKGROUND TF_IDD_BACKGROUND
#define IDC_RT1523G_EDIT  LR_EDIT
#define IDC_RT1523G_CHANNEL_EDIT LR_CHANNEL
#define IDC_RT1523G_ENTER  1610
#define IDC_RT1523G_CLEAR  1611
#define IDC_RT1523G_INCREASE_VOLUME 1612
#define IDC_RT1523G_DECREASE_VOLUME 1613
#define IDC_RT1523G_SPEAKERS ID_SPEAKERS

#define IDC_RT1523G_CHANNEL_01   1701
#define IDC_RT1523G_CHANNEL_02   1702
#define IDC_RT1523G_CHANNEL_03   1703
#define IDC_RT1523G_CHANNEL_04   1704
#define IDC_RT1523G_CHANNEL_05   1705
#define IDC_RT1523G_CHANNEL_06   1706
#define IDC_RT1523G_CHANNEL_07   1707
#define IDC_RT1523G_CHANNEL_08   1708
#define IDC_RT1523G_CHANNEL_09   1709
#define IDC_RT1523G_STEREO  1710
#define IDC_RT1523G_ADDITIONAL ID_ADDITIONAL
#define IDC_RT1523G_SPEAKERS ID_SPEAKERS


//--- anprc152_radio_dialog
#define IDD_ANPRC152_RADIO_DIALOG  1333

#define IDC_ANPRC152_BACKGROUND TF_IDD_BACKGROUND
#define IDC_ANPRC152_EDIT  SW_EDIT
#define IDC_ANPRC152_ENTER  1600
#define IDC_ANPRC152_CLEAR  1601
#define IDC_ANPRC152_NEXT  1602
#define IDC_ANPRC152_PREV  1603
#define IDC_ANPRC152_CHANNEL_EDIT  SW_CHANNEL
#define IDC_ANPRC152_INCREASE_VOLUME 1605
#define IDC_ANPRC152_DECREASE_VOLUME 1606
#define IDC_ANPRC152_STEREO    1607
#define IDC_ANPRC152_RADIO_DIALOG_ADDITIONAL ID_ADDITIONAL
#define IDC_ANPRC152_SPEAKERS ID_SPEAKERS

//-- commlink_radio_dialog
#define IDD_COMMLINK_RADIO_DIALOG 9991
#define IDC_COMMLINK_EDIT SW_EDIT
#define IDC_COMMLINK_CHANNEL_EDIT  SW_CHANNEL


//-- hc_lr_radio_dialog

#define IDD_hc_lr_RADIO_DIALOG  9990
#define IDC_hc_lr_EDIT  LR_EDIT
#define IDC_hc_lr_CHANNEL_EDIT LR_CHANNEL

#define SW_EDIT 1400
#define SW_CHANNEL 1604
#define ID_ADDITIONAL 12345
#define ID_SPEAKERS 123456
#define LR_EDIT 1410
#define LR_CHANNEL 1411

#define SHIFTL 42
#define CTRLL 29
#define ALTL 56
#define ACTIVE_CHANNEL_OFFSET 0
#define VOLUME_OFFSET 1
#define RADIO_OWNER 7
#define SPEAKER_OFFSET 8
#define POWER_OFFSET 9

#define MAX_RADIO_COUNT 1000

#define TFAR_FREQ_OFFSET 2
#define TFAR_FREQ_ROUND_POWER 10 // (log x) decimals after decimal point 10 = 1.1, 100 = 1.11

#define TFAR_ROUND_FREQUENCYP(frequency,pwr) (round (frequency * pwr) / pwr)
#define QTFAR_ROUND_FREQUENCYP(frequency,pwr) (if (( (round(frequency*pwr)) mod pwr) == 0) then {frequency toFixed 0} else {frequency toFixed (log pwr)})

#define TFAR_ROUND_FREQUENCY(frequency) TFAR_ROUND_FREQUENCYP(frequency,TFAR_FREQ_ROUND_POWER)
#define QTFAR_ROUND_FREQUENCY(frequency) QTFAR_ROUND_FREQUENCYP(frequency,TFAR_FREQ_ROUND_POWER)

#define TFAR_FREQUENCYSTRING_TO_FREQNUMBER(frequency) parseNumber ( ((frequency) splitString ",.") joinString "." )

#define TFAR_MAX_CHANNELS 8
#define TFAR_MIN_SW_FREQ 30
#define TFAR_MAX_SW_FREQ 512

#define TFAR_MAX_LR_CHANNELS 9

#define TFAR_MIN_ASIP_FREQ 30
#define TFAR_MAX_ASIP_FREQ 87

#define TFAR_SW_STEREO_OFFSET 3
#define TFAR_LR_STEREO_OFFSET 3
#define TFAR_MAX_STEREO 3

#define TFAR_CODE_OFFSET 4
#define TFAR_ADDITIONAL_CHANNEL_OFFSET 5
#define TFAR_ADDITIONAL_STEREO_OFFSET 6

#define TFAR_LR_SPEAKER_OFFSET 8
#define TFAR_SW_SPEAKER_OFFSET 8


#define TFAR_PLAYER_RESCAN_TIME 1//Interval between Rescans of Players

#define TFAR_FAR_PLAYER_UPDATE_TIME 3.5 //Interval between updates of Far(>TF_max_voice_volume) Player positions

#define TFAR_VOLUME_WHISPERING  5
#define TFAR_VOLUME_NORMAL      20
#define TFAR_VOLUME_YELLING     60

#define TFAR_MAXREMOTELRRADIODISTANCE 20


#define ARR_1(ARG1) ARG1
#define ARR_2(ARG1,ARG2) ARG1, ARG2
#define ARR_3(ARG1,ARG2,ARG3) ARG1, ARG2, ARG3
#define ARR_4(ARG1,ARG2,ARG3,ARG4) ARG1, ARG2, ARG3, ARG4
#define ARR_5(ARG1,ARG2,ARG3,ARG4,ARG5) ARG1, ARG2, ARG3, ARG4, ARG5
#define ARR_6(ARG1,ARG2,ARG3,ARG4,ARG5,ARG6) ARG1, ARG2, ARG3, ARG4, ARG5, ARG6
#define ARR_7(ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7) ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7
#define ARR_8(ARG1,ARG2,ARG3,ARG4,ARG5,ARG6,ARG7,ARG8) ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8
#define QUOTE(var1) #var1
#ifndef STRING_MACROS_GUARD
#define STRING_MACROS_GUARD
    #define LSTRING(var1) QUOTE(TRIPLES(STR,ADDON,var1))
    #define ELSTRING(var1,var2) QUOTE(TRIPLES(STR,DOUBLES(PREFIX,var1),var2))
    #define CSTRING(var1) QUOTE(TRIPLES($STR,ADDON,var1))
    #define ECSTRING(var1,var2) QUOTE(TRIPLES($STR,DOUBLES(PREFIX,var1),var2))

    #define LLSTRING(var1) localize QUOTE(TRIPLES(STR,ADDON,var1))
    #define LELSTRING(var1,var2) localize QUOTE(TRIPLES(STR,DOUBLES(PREFIX,var1),var2))
#endif


#define CFGSETTINGS CFGSETTINGSS(PREFIX,COMPONENT)
#define PATHTO(var1) PATHTO_SYS(PREFIX,COMPONENT_F,var1)
#define PATHTOF(var1) PATHTOF_SYS(PREFIX,COMPONENT,var1)
#define PATHTOEF(var1,var2) PATHTOF_SYS(PREFIX,var1,var2)
#define QPATHTOF(var1) QUOTE(PATHTOF(var1))
#define QPATHTOEF(var1,var2) QUOTE(PATHTOEF(var1,var2))


// ================== Macro Functions
#define MACRO_QUOTE(toQuote) #toQuote

#define MACRO_QUOTE_SINGLE(toQuote) '##toQuote##'

#define MACRO_UNDERSCORE_CONCAT(var1,var2) ##var1##_##var2
// ==================

// ================== Macro Functions
#define MACRO_MAG_x1(mag)  MACRO_QUOTE(mag)
#define MACRO_MAG_x2(mag)  MACRO_QUOTE(mag),MACRO_MAG_x1(mag)
#define MACRO_MAG_x3(mag)  MACRO_QUOTE(mag),MACRO_MAG_x2(mag)
#define MACRO_MAG_x4(mag)  MACRO_QUOTE(mag),MACRO_MAG_x3(mag)
#define MACRO_MAG_x5(mag)  MACRO_QUOTE(mag),MACRO_MAG_x4(mag)
#define MACRO_MAG_x6(mag)  MACRO_QUOTE(mag),MACRO_MAG_x5(mag)
#define MACRO_MAG_x7(mag)  MACRO_QUOTE(mag),MACRO_MAG_x6(mag)
#define MACRO_MAG_x8(mag)  MACRO_QUOTE(mag),MACRO_MAG_x7(mag)
#define MACRO_MAG_x9(mag)  MACRO_QUOTE(mag),MACRO_MAG_x8(mag)
#define MACRO_MAG_x10(mag) MACRO_QUOTE(mag),MACRO_MAG_x9(mag)
#define MACRO_MAG_x11(mag) MACRO_QUOTE(mag),MACRO_MAG_x10(mag)
#define MACRO_MAG_x12(mag) MACRO_QUOTE(mag),MACRO_MAG_x11(mag)
#define MACRO_MAG_x13(mag) MACRO_QUOTE(mag),MACRO_MAG_x12(mag)
#define MACRO_MAG_x14(mag) MACRO_QUOTE(mag),MACRO_MAG_x13(mag)
#define MACRO_MAG_x15(mag) MACRO_QUOTE(mag),MACRO_MAG_x14(mag)
// ==================
