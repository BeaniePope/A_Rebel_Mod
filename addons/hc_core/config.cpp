class CfgPatches
{
    class HC_Core
    {
        author= "HC Aux Team";
        requiredAddons[]=
        {
			
        };
        weapons[]=
        {
			"HC_Commlink"
        };
        units[]=
        {
			"HC_Rebel_Backpack_Black",
			"HC_Backpack_LR_Green",
			"HC_Ammobox_REB"
        };
    };
};


///TFAR Definitions
#include "TFAR_Radios\uiDefines.hpp"
#include "TFAR_Radios\ui\hclr.hpp"


class CfgEditorCategories
{
	class HC_Props
	{
		displayName="Horizon Company. Supplies";
	};
};
class CfgEditorSubcategories
{
	class HC_Resupply
	{
		displayName="Resupply";
		priority=1;
	};
};

class cfgWeapons
{
	class ItemRadio;
	class HC_Commlink: ItemRadio {
		author = "Queen";
		displayName = "[HC] Commlink";
		//descriptionShort = CSTRING(ANPRC152_Desc);
		scope = 2;
		scopeCurator = 2;
		scopeArsenal=2;
		//model = "";
		//picture = "";
		model = "";
		picture = "";
		tf_prototype = 1;
		//tf_radio = 1;
		tf_range = 5000;
		tf_dialog = "anprc152_radio_dialog";
		//tf_dialog = "commlink_radio_dialog";
		tf_encryptionCode = "tf_east_radio_code";
		tf_dialogUpdate = "call TFAR_fnc_updateSWDialogToChannel;";
		tf_subtype = "digital";
		tf_parent = "TFAR_anprc152";
		tf_additional_channel = 1;
	};
	class HC_Commlink_1: HC_Commlink
	{
		displayName = "[HC] Commlink 1";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_2: HC_Commlink
	{
		displayName = "[HC] Commlink 2";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_3: HC_Commlink
	{
		displayName = "[HC] Commlink 3";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_4: HC_Commlink
	{
		displayName = "[HC] Commlink 4";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_5: HC_Commlink
	{
		displayName = "[HC] Commlink 5";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_6: HC_Commlink
	{
		displayName = "[HC] Commlink 6";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_7: HC_Commlink
	{
		displayName = "[HC] Commlink 7";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_8: HC_Commlink
	{
		displayName = "[HC] Commlink 8";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_9: HC_Commlink
	{
		displayName = "[HC] Commlink 9";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_10: HC_Commlink
	{
		displayName = "[HC] Commlink 10";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_11: HC_Commlink
	{
		displayName = "[HC] Commlink 11";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_12: HC_Commlink
	{
		displayName = "[HC] Commlink 12";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_13: HC_Commlink
	{
		displayName = "[HC] Commlink 13";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_14: HC_Commlink
	{
		displayName = "[HC] Commlink 14";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_15: HC_Commlink
	{
		displayName = "[HC] Commlink 15";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_16: HC_Commlink
	{
		displayName = "[HC] Commlink 16";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_17: HC_Commlink
	{
		displayName = "[HC] Commlink 17";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_18: HC_Commlink
	{
		displayName = "[HC] Commlink 18";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_19: HC_Commlink
	{
		displayName = "[HC] Commlink 19";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_20: HC_Commlink
	{
		displayName = "[HC] Commlink 20";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_21: HC_Commlink
	{
		displayName = "[HC] Commlink 21";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_22: HC_Commlink
	{
		displayName = "[HC] Commlink 22";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_23: HC_Commlink
	{
		displayName = "[HC] Commlink 23";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_24: HC_Commlink
	{
		displayName = "[HC] Commlink 24";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_25: HC_Commlink
	{
		displayName = "[HC] Commlink 25";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_26: HC_Commlink
	{
		displayName = "[HC] Commlink 26";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_27: HC_Commlink
	{
		displayName = "[HC] Commlink 27";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_28: HC_Commlink
	{
		displayName = "[HC] Commlink 28";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_29: HC_Commlink
	{
		displayName = "[HC] Commlink 29";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_30: HC_Commlink
	{
		displayName = "[HC] Commlink 30";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_31: HC_Commlink
	{
		displayName = "[HC] Commlink 31";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_32: HC_Commlink
	{
		displayName = "[HC] Commlink 32";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_33: HC_Commlink
	{
		displayName = "[HC] Commlink 33";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_34: HC_Commlink
	{
		displayName = "[HC] Commlink 34";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_35: HC_Commlink
	{
		displayName = "[HC] Commlink 35";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_36: HC_Commlink
	{
		displayName = "[HC] Commlink 36";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_37: HC_Commlink
	{
		displayName = "[HC] Commlink 37";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_38: HC_Commlink
	{
		displayName = "[HC] Commlink 38";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_39: HC_Commlink
	{
		displayName = "[HC] Commlink 39";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_40: HC_Commlink
	{
		displayName = "[HC] Commlink 40";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_41: HC_Commlink
	{
		displayName = "[HC] Commlink 41";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_42: HC_Commlink
	{
		displayName = "[HC] Commlink 42";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_43: HC_Commlink
	{
		displayName = "[HC] Commlink 43";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_44: HC_Commlink
	{
		displayName = "[HC] Commlink 44";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_45: HC_Commlink
	{
		displayName = "[HC] Commlink 45";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_46: HC_Commlink
	{
		displayName = "[HC] Commlink 46";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_47: HC_Commlink
	{
		displayName = "[HC] Commlink 47";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_48: HC_Commlink
	{
		displayName = "[HC] Commlink 48";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_49: HC_Commlink
	{
		displayName = "[HC] Commlink 49";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_50: HC_Commlink
	{
		displayName = "[HC] Commlink 50";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_51: HC_Commlink
	{
		displayName = "[HC] Commlink 51";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_52: HC_Commlink
	{
		displayName = "[HC] Commlink 52";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_53: HC_Commlink
	{
		displayName = "[HC] Commlink 53";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_54: HC_Commlink
	{
		displayName = "[HC] Commlink 54";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_55: HC_Commlink
	{
		displayName = "[HC] Commlink 55";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_56: HC_Commlink
	{
		displayName = "[HC] Commlink 56";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_57: HC_Commlink
	{
		displayName = "[HC] Commlink 57";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_58: HC_Commlink
	{
		displayName = "[HC] Commlink 58";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_59: HC_Commlink
	{
		displayName = "[HC] Commlink 59";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_60: HC_Commlink
	{
		displayName = "[HC] Commlink 60";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_61: HC_Commlink
	{
		displayName = "[HC] Commlink 61";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_62: HC_Commlink
	{
		displayName = "[HC] Commlink 62";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_63: HC_Commlink
	{
		displayName = "[HC] Commlink 63";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_64: HC_Commlink
	{
		displayName = "[HC] Commlink 64";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_65: HC_Commlink
	{
		displayName = "[HC] Commlink 65";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_66: HC_Commlink
	{
		displayName = "[HC] Commlink 66";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_67: HC_Commlink
	{
		displayName = "[HC] Commlink 67";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_68: HC_Commlink
	{
		displayName = "[HC] Commlink 68";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_69: HC_Commlink
	{
		displayName = "[HC] Commlink 69";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_70: HC_Commlink
	{
		displayName = "[HC] Commlink 70";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_71: HC_Commlink
	{
		displayName = "[HC] Commlink 71";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_72: HC_Commlink
	{
		displayName = "[HC] Commlink 72";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_73: HC_Commlink
	{
		displayName = "[HC] Commlink 73";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_74: HC_Commlink
	{
		displayName = "[HC] Commlink 74";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_75: HC_Commlink
	{
		displayName = "[HC] Commlink 75";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_76: HC_Commlink
	{
		displayName = "[HC] Commlink 76";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_77: HC_Commlink
	{
		displayName = "[HC] Commlink 77";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_78: HC_Commlink
	{
		displayName = "[HC] Commlink 78";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_79: HC_Commlink
	{
		displayName = "[HC] Commlink 79";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_80: HC_Commlink
	{
		displayName = "[HC] Commlink 80";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_81: HC_Commlink
	{
		displayName = "[HC] Commlink 81";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_82: HC_Commlink
	{
		displayName = "[HC] Commlink 82";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_83: HC_Commlink
	{
		displayName = "[HC] Commlink 83";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_84: HC_Commlink
	{
		displayName = "[HC] Commlink 84";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_85: HC_Commlink
	{
		displayName = "[HC] Commlink 85";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_86: HC_Commlink
	{
		displayName = "[HC] Commlink 86";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_87: HC_Commlink
	{
		displayName = "[HC] Commlink 87";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_88: HC_Commlink
	{
		displayName = "[HC] Commlink 88";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_89: HC_Commlink
	{
		displayName = "[HC] Commlink 89";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_90: HC_Commlink
	{
		displayName = "[HC] Commlink 90";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_91: HC_Commlink
	{
		displayName = "[HC] Commlink 91";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_92: HC_Commlink
	{
		displayName = "[HC] Commlink 92";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_93: HC_Commlink
	{
		displayName = "[HC] Commlink 93";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_94: HC_Commlink
	{
		displayName = "[HC] Commlink 94";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_95: HC_Commlink
	{
		displayName = "[HC] Commlink 95";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_96: HC_Commlink
	{
		displayName = "[HC] Commlink 96";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_97: HC_Commlink
	{
		displayName = "[HC] Commlink 97";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_98: HC_Commlink
	{
		displayName = "[HC] Commlink 98";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_99: HC_Commlink
	{
		displayName = "[HC] Commlink 99";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_100: HC_Commlink
	{
		displayName = "[HC] Commlink 100";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_101: HC_Commlink
	{
		displayName = "[HC] Commlink 101";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_102: HC_Commlink
	{
		displayName = "[HC] Commlink 102";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_103: HC_Commlink
	{
		displayName = "[HC] Commlink 103";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_104: HC_Commlink
	{
		displayName = "[HC] Commlink 104";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_105: HC_Commlink
	{
		displayName = "[HC] Commlink 105";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_106: HC_Commlink
	{
		displayName = "[HC] Commlink 106";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_107: HC_Commlink
	{
		displayName = "[HC] Commlink 107";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_108: HC_Commlink
	{
		displayName = "[HC] Commlink 108";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_109: HC_Commlink
	{
		displayName = "[HC] Commlink 109";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_110: HC_Commlink
	{
		displayName = "[HC] Commlink 110";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_111: HC_Commlink
	{
		displayName = "[HC] Commlink 111";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_112: HC_Commlink
	{
		displayName = "[HC] Commlink 112";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_113: HC_Commlink
	{
		displayName = "[HC] Commlink 113";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_114: HC_Commlink
	{
		displayName = "[HC] Commlink 114";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_115: HC_Commlink
	{
		displayName = "[HC] Commlink 115";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_116: HC_Commlink
	{
		displayName = "[HC] Commlink 116";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_117: HC_Commlink
	{
		displayName = "[HC] Commlink 117";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_118: HC_Commlink
	{
		displayName = "[HC] Commlink 118";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_119: HC_Commlink
	{
		displayName = "[HC] Commlink 119";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_120: HC_Commlink
	{
		displayName = "[HC] Commlink 120";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_121: HC_Commlink
	{
		displayName = "[HC] Commlink 121";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_122: HC_Commlink
	{
		displayName = "[HC] Commlink 122";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_123: HC_Commlink
	{
		displayName = "[HC] Commlink 123";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_124: HC_Commlink
	{
		displayName = "[HC] Commlink 124";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_125: HC_Commlink
	{
		displayName = "[HC] Commlink 125";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_126: HC_Commlink
	{
		displayName = "[HC] Commlink 126";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_127: HC_Commlink
	{
		displayName = "[HC] Commlink 127";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_128: HC_Commlink
	{
		displayName = "[HC] Commlink 128";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_129: HC_Commlink
	{
		displayName = "[HC] Commlink 129";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_130: HC_Commlink
	{
		displayName = "[HC] Commlink 130";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_131: HC_Commlink
	{
		displayName = "[HC] Commlink 131";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_132: HC_Commlink
	{
		displayName = "[HC] Commlink 132";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_133: HC_Commlink
	{
		displayName = "[HC] Commlink 133";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_134: HC_Commlink
	{
		displayName = "[HC] Commlink 134";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_135: HC_Commlink
	{
		displayName = "[HC] Commlink 135";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_136: HC_Commlink
	{
		displayName = "[HC] Commlink 136";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_137: HC_Commlink
	{
		displayName = "[HC] Commlink 137";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_138: HC_Commlink
	{
		displayName = "[HC] Commlink 138";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_139: HC_Commlink
	{
		displayName = "[HC] Commlink 139";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_140: HC_Commlink
	{
		displayName = "[HC] Commlink 140";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_141: HC_Commlink
	{
		displayName = "[HC] Commlink 141";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_142: HC_Commlink
	{
		displayName = "[HC] Commlink 142";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_143: HC_Commlink
	{
		displayName = "[HC] Commlink 143";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_144: HC_Commlink
	{
		displayName = "[HC] Commlink 144";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_145: HC_Commlink
	{
		displayName = "[HC] Commlink 145";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_146: HC_Commlink
	{
		displayName = "[HC] Commlink 146";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_147: HC_Commlink
	{
		displayName = "[HC] Commlink 147";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_148: HC_Commlink
	{
		displayName = "[HC] Commlink 148";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_149: HC_Commlink
	{
		displayName = "[HC] Commlink 149";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_150: HC_Commlink
	{
		displayName = "[HC] Commlink 150";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_151: HC_Commlink
	{
		displayName = "[HC] Commlink 151";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_152: HC_Commlink
	{
		displayName = "[HC] Commlink 152";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_153: HC_Commlink
	{
		displayName = "[HC] Commlink 153";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_154: HC_Commlink
	{
		displayName = "[HC] Commlink 154";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_155: HC_Commlink
	{
		displayName = "[HC] Commlink 155";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_156: HC_Commlink
	{
		displayName = "[HC] Commlink 156";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_157: HC_Commlink
	{
		displayName = "[HC] Commlink 157";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_158: HC_Commlink
	{
		displayName = "[HC] Commlink 158";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_159: HC_Commlink
	{
		displayName = "[HC] Commlink 159";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_160: HC_Commlink
	{
		displayName = "[HC] Commlink 160";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_161: HC_Commlink
	{
		displayName = "[HC] Commlink 161";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_162: HC_Commlink
	{
		displayName = "[HC] Commlink 162";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_163: HC_Commlink
	{
		displayName = "[HC] Commlink 163";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_164: HC_Commlink
	{
		displayName = "[HC] Commlink 164";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_165: HC_Commlink
	{
		displayName = "[HC] Commlink 165";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_166: HC_Commlink
	{
		displayName = "[HC] Commlink 166";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_167: HC_Commlink
	{
		displayName = "[HC] Commlink 167";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_168: HC_Commlink
	{
		displayName = "[HC] Commlink 168";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_169: HC_Commlink
	{
		displayName = "[HC] Commlink 169";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_170: HC_Commlink
	{
		displayName = "[HC] Commlink 170";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_171: HC_Commlink
	{
		displayName = "[HC] Commlink 171";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_172: HC_Commlink
	{
		displayName = "[HC] Commlink 172";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_173: HC_Commlink
	{
		displayName = "[HC] Commlink 173";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_174: HC_Commlink
	{
		displayName = "[HC] Commlink 174";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_175: HC_Commlink
	{
		displayName = "[HC] Commlink 175";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_176: HC_Commlink
	{
		displayName = "[HC] Commlink 176";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_177: HC_Commlink
	{
		displayName = "[HC] Commlink 177";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_178: HC_Commlink
	{
		displayName = "[HC] Commlink 178";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_179: HC_Commlink
	{
		displayName = "[HC] Commlink 179";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_180: HC_Commlink
	{
		displayName = "[HC] Commlink 180";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_181: HC_Commlink
	{
		displayName = "[HC] Commlink 181";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_182: HC_Commlink
	{
		displayName = "[HC] Commlink 182";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_183: HC_Commlink
	{
		displayName = "[HC] Commlink 183";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_184: HC_Commlink
	{
		displayName = "[HC] Commlink 184";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_185: HC_Commlink
	{
		displayName = "[HC] Commlink 185";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_186: HC_Commlink
	{
		displayName = "[HC] Commlink 186";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_187: HC_Commlink
	{
		displayName = "[HC] Commlink 187";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_188: HC_Commlink
	{
		displayName = "[HC] Commlink 188";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_189: HC_Commlink
	{
		displayName = "[HC] Commlink 189";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_190: HC_Commlink
	{
		displayName = "[HC] Commlink 190";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_191: HC_Commlink
	{
		displayName = "[HC] Commlink 191";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_192: HC_Commlink
	{
		displayName = "[HC] Commlink 192";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_193: HC_Commlink
	{
		displayName = "[HC] Commlink 193";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_194: HC_Commlink
	{
		displayName = "[HC] Commlink 194";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_195: HC_Commlink
	{
		displayName = "[HC] Commlink 195";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_196: HC_Commlink
	{
		displayName = "[HC] Commlink 196";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_197: HC_Commlink
	{
		displayName = "[HC] Commlink 197";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_198: HC_Commlink
	{
		displayName = "[HC] Commlink 198";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_199: HC_Commlink
	{
		displayName = "[HC] Commlink 199";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_200: HC_Commlink
	{
		displayName = "[HC] Commlink 200";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_201: HC_Commlink
	{
		displayName = "[HC] Commlink 201";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_202: HC_Commlink
	{
		displayName = "[HC] Commlink 202";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_203: HC_Commlink
	{
		displayName = "[HC] Commlink 203";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_204: HC_Commlink
	{
		displayName = "[HC] Commlink 204";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_205: HC_Commlink
	{
		displayName = "[HC] Commlink 205";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_206: HC_Commlink
	{
		displayName = "[HC] Commlink 206";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_207: HC_Commlink
	{
		displayName = "[HC] Commlink 207";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_208: HC_Commlink
	{
		displayName = "[HC] Commlink 208";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_209: HC_Commlink
	{
		displayName = "[HC] Commlink 209";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_210: HC_Commlink
	{
		displayName = "[HC] Commlink 210";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_211: HC_Commlink
	{
		displayName = "[HC] Commlink 211";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_212: HC_Commlink
	{
		displayName = "[HC] Commlink 212";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_213: HC_Commlink
	{
		displayName = "[HC] Commlink 213";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_214: HC_Commlink
	{
		displayName = "[HC] Commlink 214";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_215: HC_Commlink
	{
		displayName = "[HC] Commlink 215";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_216: HC_Commlink
	{
		displayName = "[HC] Commlink 216";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_217: HC_Commlink
	{
		displayName = "[HC] Commlink 217";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_218: HC_Commlink
	{
		displayName = "[HC] Commlink 218";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_219: HC_Commlink
	{
		displayName = "[HC] Commlink 219";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_220: HC_Commlink
	{
		displayName = "[HC] Commlink 220";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_221: HC_Commlink
	{
		displayName = "[HC] Commlink 221";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_222: HC_Commlink
	{
		displayName = "[HC] Commlink 222";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_223: HC_Commlink
	{
		displayName = "[HC] Commlink 223";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_224: HC_Commlink
	{
		displayName = "[HC] Commlink 224";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_225: HC_Commlink
	{
		displayName = "[HC] Commlink 225";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_226: HC_Commlink
	{
		displayName = "[HC] Commlink 226";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_227: HC_Commlink
	{
		displayName = "[HC] Commlink 227";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_228: HC_Commlink
	{
		displayName = "[HC] Commlink 228";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_229: HC_Commlink
	{
		displayName = "[HC] Commlink 229";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_230: HC_Commlink
	{
		displayName = "[HC] Commlink 230";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_231: HC_Commlink
	{
		displayName = "[HC] Commlink 231";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_232: HC_Commlink
	{
		displayName = "[HC] Commlink 232";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_233: HC_Commlink
	{
		displayName = "[HC] Commlink 233";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_234: HC_Commlink
	{
		displayName = "[HC] Commlink 234";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_235: HC_Commlink
	{
		displayName = "[HC] Commlink 235";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_236: HC_Commlink
	{
		displayName = "[HC] Commlink 236";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_237: HC_Commlink
	{
		displayName = "[HC] Commlink 237";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_238: HC_Commlink
	{
		displayName = "[HC] Commlink 238";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_239: HC_Commlink
	{
		displayName = "[HC] Commlink 239";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_240: HC_Commlink
	{
		displayName = "[HC] Commlink 240";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_241: HC_Commlink
	{
		displayName = "[HC] Commlink 241";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_242: HC_Commlink
	{
		displayName = "[HC] Commlink 242";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_243: HC_Commlink
	{
		displayName = "[HC] Commlink 243";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_244: HC_Commlink
	{
		displayName = "[HC] Commlink 244";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_245: HC_Commlink
	{
		displayName = "[HC] Commlink 245";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_246: HC_Commlink
	{
		displayName = "[HC] Commlink 246";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_247: HC_Commlink
	{
		displayName = "[HC] Commlink 247";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_248: HC_Commlink
	{
		displayName = "[HC] Commlink 248";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_249: HC_Commlink
	{
		displayName = "[HC] Commlink 249";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_250: HC_Commlink
	{
		displayName = "[HC] Commlink 250";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_251: HC_Commlink
	{
		displayName = "[HC] Commlink 251";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_252: HC_Commlink
	{
		displayName = "[HC] Commlink 252";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_253: HC_Commlink
	{
		displayName = "[HC] Commlink 253";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_254: HC_Commlink
	{
		displayName = "[HC] Commlink 254";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_255: HC_Commlink
	{
		displayName = "[HC] Commlink 255";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_256: HC_Commlink
	{
		displayName = "[HC] Commlink 256";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_257: HC_Commlink
	{
		displayName = "[HC] Commlink 257";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_258: HC_Commlink
	{
		displayName = "[HC] Commlink 258";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_259: HC_Commlink
	{
		displayName = "[HC] Commlink 259";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_260: HC_Commlink
	{
		displayName = "[HC] Commlink 260";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_261: HC_Commlink
	{
		displayName = "[HC] Commlink 261";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_262: HC_Commlink
	{
		displayName = "[HC] Commlink 262";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_263: HC_Commlink
	{
		displayName = "[HC] Commlink 263";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_264: HC_Commlink
	{
		displayName = "[HC] Commlink 264";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_265: HC_Commlink
	{
		displayName = "[HC] Commlink 265";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_266: HC_Commlink
	{
		displayName = "[HC] Commlink 266";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_267: HC_Commlink
	{
		displayName = "[HC] Commlink 267";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_268: HC_Commlink
	{
		displayName = "[HC] Commlink 268";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_269: HC_Commlink
	{
		displayName = "[HC] Commlink 269";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_270: HC_Commlink
	{
		displayName = "[HC] Commlink 270";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_271: HC_Commlink
	{
		displayName = "[HC] Commlink 271";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_272: HC_Commlink
	{
		displayName = "[HC] Commlink 272";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_273: HC_Commlink
	{
		displayName = "[HC] Commlink 273";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_274: HC_Commlink
	{
		displayName = "[HC] Commlink 274";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_275: HC_Commlink
	{
		displayName = "[HC] Commlink 275";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_276: HC_Commlink
	{
		displayName = "[HC] Commlink 276";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_277: HC_Commlink
	{
		displayName = "[HC] Commlink 277";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_278: HC_Commlink
	{
		displayName = "[HC] Commlink 278";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_279: HC_Commlink
	{
		displayName = "[HC] Commlink 279";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_280: HC_Commlink
	{
		displayName = "[HC] Commlink 280";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_281: HC_Commlink
	{
		displayName = "[HC] Commlink 281";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_282: HC_Commlink
	{
		displayName = "[HC] Commlink 282";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_283: HC_Commlink
	{
		displayName = "[HC] Commlink 283";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_284: HC_Commlink
	{
		displayName = "[HC] Commlink 284";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_285: HC_Commlink
	{
		displayName = "[HC] Commlink 285";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_286: HC_Commlink
	{
		displayName = "[HC] Commlink 286";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_287: HC_Commlink
	{
		displayName = "[HC] Commlink 287";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_288: HC_Commlink
	{
		displayName = "[HC] Commlink 288";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_289: HC_Commlink
	{
		displayName = "[HC] Commlink 289";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_290: HC_Commlink
	{
		displayName = "[HC] Commlink 290";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_291: HC_Commlink
	{
		displayName = "[HC] Commlink 291";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_292: HC_Commlink
	{
		displayName = "[HC] Commlink 292";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_293: HC_Commlink
	{
		displayName = "[HC] Commlink 293";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_294: HC_Commlink
	{
		displayName = "[HC] Commlink 294";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_295: HC_Commlink
	{
		displayName = "[HC] Commlink 295";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_296: HC_Commlink
	{
		displayName = "[HC] Commlink 296";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_297: HC_Commlink
	{
		displayName = "[HC] Commlink 297";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_298: HC_Commlink
	{
		displayName = "[HC] Commlink 298";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_299: HC_Commlink
	{
		displayName = "[HC] Commlink 299";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_300: HC_Commlink
	{
		displayName = "[HC] Commlink 300";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_301: HC_Commlink
	{
		displayName = "[HC] Commlink 301";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_302: HC_Commlink
	{
		displayName = "[HC] Commlink 302";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_303: HC_Commlink
	{
		displayName = "[HC] Commlink 303";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_304: HC_Commlink
	{
		displayName = "[HC] Commlink 304";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_305: HC_Commlink
	{
		displayName = "[HC] Commlink 305";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_306: HC_Commlink
	{
		displayName = "[HC] Commlink 306";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_307: HC_Commlink
	{
		displayName = "[HC] Commlink 307";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_308: HC_Commlink
	{
		displayName = "[HC] Commlink 308";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_309: HC_Commlink
	{
		displayName = "[HC] Commlink 309";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_310: HC_Commlink
	{
		displayName = "[HC] Commlink 310";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_311: HC_Commlink
	{
		displayName = "[HC] Commlink 311";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_312: HC_Commlink
	{
		displayName = "[HC] Commlink 312";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_313: HC_Commlink
	{
		displayName = "[HC] Commlink 313";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_314: HC_Commlink
	{
		displayName = "[HC] Commlink 314";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_315: HC_Commlink
	{
		displayName = "[HC] Commlink 315";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_316: HC_Commlink
	{
		displayName = "[HC] Commlink 316";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_317: HC_Commlink
	{
		displayName = "[HC] Commlink 317";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_318: HC_Commlink
	{
		displayName = "[HC] Commlink 318";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_319: HC_Commlink
	{
		displayName = "[HC] Commlink 319";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_320: HC_Commlink
	{
		displayName = "[HC] Commlink 320";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_321: HC_Commlink
	{
		displayName = "[HC] Commlink 321";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_322: HC_Commlink
	{
		displayName = "[HC] Commlink 322";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_323: HC_Commlink
	{
		displayName = "[HC] Commlink 323";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_324: HC_Commlink
	{
		displayName = "[HC] Commlink 324";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_325: HC_Commlink
	{
		displayName = "[HC] Commlink 325";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_326: HC_Commlink
	{
		displayName = "[HC] Commlink 326";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_327: HC_Commlink
	{
		displayName = "[HC] Commlink 327";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_328: HC_Commlink
	{
		displayName = "[HC] Commlink 328";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_329: HC_Commlink
	{
		displayName = "[HC] Commlink 329";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_330: HC_Commlink
	{
		displayName = "[HC] Commlink 330";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_331: HC_Commlink
	{
		displayName = "[HC] Commlink 331";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_332: HC_Commlink
	{
		displayName = "[HC] Commlink 332";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_333: HC_Commlink
	{
		displayName = "[HC] Commlink 333";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_334: HC_Commlink
	{
		displayName = "[HC] Commlink 334";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_335: HC_Commlink
	{
		displayName = "[HC] Commlink 335";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_336: HC_Commlink
	{
		displayName = "[HC] Commlink 336";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_337: HC_Commlink
	{
		displayName = "[HC] Commlink 337";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_338: HC_Commlink
	{
		displayName = "[HC] Commlink 338";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_339: HC_Commlink
	{
		displayName = "[HC] Commlink 339";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_340: HC_Commlink
	{
		displayName = "[HC] Commlink 340";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_341: HC_Commlink
	{
		displayName = "[HC] Commlink 341";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_342: HC_Commlink
	{
		displayName = "[HC] Commlink 342";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_343: HC_Commlink
	{
		displayName = "[HC] Commlink 343";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_344: HC_Commlink
	{
		displayName = "[HC] Commlink 344";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_345: HC_Commlink
	{
		displayName = "[HC] Commlink 345";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_346: HC_Commlink
	{
		displayName = "[HC] Commlink 346";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_347: HC_Commlink
	{
		displayName = "[HC] Commlink 347";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_348: HC_Commlink
	{
		displayName = "[HC] Commlink 348";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_349: HC_Commlink
	{
		displayName = "[HC] Commlink 349";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_350: HC_Commlink
	{
		displayName = "[HC] Commlink 350";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_351: HC_Commlink
	{
		displayName = "[HC] Commlink 351";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_352: HC_Commlink
	{
		displayName = "[HC] Commlink 352";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_353: HC_Commlink
	{
		displayName = "[HC] Commlink 353";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_354: HC_Commlink
	{
		displayName = "[HC] Commlink 354";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_355: HC_Commlink
	{
		displayName = "[HC] Commlink 355";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_356: HC_Commlink
	{
		displayName = "[HC] Commlink 356";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_357: HC_Commlink
	{
		displayName = "[HC] Commlink 357";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_358: HC_Commlink
	{
		displayName = "[HC] Commlink 358";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_359: HC_Commlink
	{
		displayName = "[HC] Commlink 359";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_360: HC_Commlink
	{
		displayName = "[HC] Commlink 360";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_361: HC_Commlink
	{
		displayName = "[HC] Commlink 361";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_362: HC_Commlink
	{
		displayName = "[HC] Commlink 362";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_363: HC_Commlink
	{
		displayName = "[HC] Commlink 363";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_364: HC_Commlink
	{
		displayName = "[HC] Commlink 364";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_365: HC_Commlink
	{
		displayName = "[HC] Commlink 365";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_366: HC_Commlink
	{
		displayName = "[HC] Commlink 366";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_367: HC_Commlink
	{
		displayName = "[HC] Commlink 367";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_368: HC_Commlink
	{
		displayName = "[HC] Commlink 368";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_369: HC_Commlink
	{
		displayName = "[HC] Commlink 369";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_370: HC_Commlink
	{
		displayName = "[HC] Commlink 370";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_371: HC_Commlink
	{
		displayName = "[HC] Commlink 371";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_372: HC_Commlink
	{
		displayName = "[HC] Commlink 372";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_373: HC_Commlink
	{
		displayName = "[HC] Commlink 373";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_374: HC_Commlink
	{
		displayName = "[HC] Commlink 374";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_375: HC_Commlink
	{
		displayName = "[HC] Commlink 375";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_376: HC_Commlink
	{
		displayName = "[HC] Commlink 376";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_377: HC_Commlink
	{
		displayName = "[HC] Commlink 377";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_378: HC_Commlink
	{
		displayName = "[HC] Commlink 378";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_379: HC_Commlink
	{
		displayName = "[HC] Commlink 379";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_380: HC_Commlink
	{
		displayName = "[HC] Commlink 380";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_381: HC_Commlink
	{
		displayName = "[HC] Commlink 381";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_382: HC_Commlink
	{
		displayName = "[HC] Commlink 382";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_383: HC_Commlink
	{
		displayName = "[HC] Commlink 383";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_384: HC_Commlink
	{
		displayName = "[HC] Commlink 384";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_385: HC_Commlink
	{
		displayName = "[HC] Commlink 385";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_386: HC_Commlink
	{
		displayName = "[HC] Commlink 386";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_387: HC_Commlink
	{
		displayName = "[HC] Commlink 387";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_388: HC_Commlink
	{
		displayName = "[HC] Commlink 388";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_389: HC_Commlink
	{
		displayName = "[HC] Commlink 389";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_390: HC_Commlink
	{
		displayName = "[HC] Commlink 390";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_391: HC_Commlink
	{
		displayName = "[HC] Commlink 391";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_392: HC_Commlink
	{
		displayName = "[HC] Commlink 392";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_393: HC_Commlink
	{
		displayName = "[HC] Commlink 393";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_394: HC_Commlink
	{
		displayName = "[HC] Commlink 394";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_395: HC_Commlink
	{
		displayName = "[HC] Commlink 395";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_396: HC_Commlink
	{
		displayName = "[HC] Commlink 396";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_397: HC_Commlink
	{
		displayName = "[HC] Commlink 397";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_398: HC_Commlink
	{
		displayName = "[HC] Commlink 398";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_399: HC_Commlink
	{
		displayName = "[HC] Commlink 399";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_400: HC_Commlink
	{
		displayName = "[HC] Commlink 400";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_401: HC_Commlink
	{
		displayName = "[HC] Commlink 401";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_402: HC_Commlink
	{
		displayName = "[HC] Commlink 402";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_403: HC_Commlink
	{
		displayName = "[HC] Commlink 403";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_404: HC_Commlink
	{
		displayName = "[HC] Commlink 404";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_405: HC_Commlink
	{
		displayName = "[HC] Commlink 405";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_406: HC_Commlink
	{
		displayName = "[HC] Commlink 406";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_407: HC_Commlink
	{
		displayName = "[HC] Commlink 407";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_408: HC_Commlink
	{
		displayName = "[HC] Commlink 408";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_409: HC_Commlink
	{
		displayName = "[HC] Commlink 409";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_410: HC_Commlink
	{
		displayName = "[HC] Commlink 410";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_411: HC_Commlink
	{
		displayName = "[HC] Commlink 411";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_412: HC_Commlink
	{
		displayName = "[HC] Commlink 412";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_413: HC_Commlink
	{
		displayName = "[HC] Commlink 413";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_414: HC_Commlink
	{
		displayName = "[HC] Commlink 414";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_415: HC_Commlink
	{
		displayName = "[HC] Commlink 415";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_416: HC_Commlink
	{
		displayName = "[HC] Commlink 416";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_417: HC_Commlink
	{
		displayName = "[HC] Commlink 417";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_418: HC_Commlink
	{
		displayName = "[HC] Commlink 418";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_419: HC_Commlink
	{
		displayName = "[HC] Commlink 419";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_420: HC_Commlink
	{
		displayName = "[HC] Commlink 420";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_421: HC_Commlink
	{
		displayName = "[HC] Commlink 421";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_422: HC_Commlink
	{
		displayName = "[HC] Commlink 422";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_423: HC_Commlink
	{
		displayName = "[HC] Commlink 423";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_424: HC_Commlink
	{
		displayName = "[HC] Commlink 424";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_425: HC_Commlink
	{
		displayName = "[HC] Commlink 425";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_426: HC_Commlink
	{
		displayName = "[HC] Commlink 426";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_427: HC_Commlink
	{
		displayName = "[HC] Commlink 427";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_428: HC_Commlink
	{
		displayName = "[HC] Commlink 428";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_429: HC_Commlink
	{
		displayName = "[HC] Commlink 429";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_430: HC_Commlink
	{
		displayName = "[HC] Commlink 430";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_431: HC_Commlink
	{
		displayName = "[HC] Commlink 431";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_432: HC_Commlink
	{
		displayName = "[HC] Commlink 432";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_433: HC_Commlink
	{
		displayName = "[HC] Commlink 433";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_434: HC_Commlink
	{
		displayName = "[HC] Commlink 434";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_435: HC_Commlink
	{
		displayName = "[HC] Commlink 435";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_436: HC_Commlink
	{
		displayName = "[HC] Commlink 436";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_437: HC_Commlink
	{
		displayName = "[HC] Commlink 437";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_438: HC_Commlink
	{
		displayName = "[HC] Commlink 438";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_439: HC_Commlink
	{
		displayName = "[HC] Commlink 439";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_440: HC_Commlink
	{
		displayName = "[HC] Commlink 440";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_441: HC_Commlink
	{
		displayName = "[HC] Commlink 441";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_442: HC_Commlink
	{
		displayName = "[HC] Commlink 442";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_443: HC_Commlink
	{
		displayName = "[HC] Commlink 443";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_444: HC_Commlink
	{
		displayName = "[HC] Commlink 444";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_445: HC_Commlink
	{
		displayName = "[HC] Commlink 445";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_446: HC_Commlink
	{
		displayName = "[HC] Commlink 446";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_447: HC_Commlink
	{
		displayName = "[HC] Commlink 447";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_448: HC_Commlink
	{
		displayName = "[HC] Commlink 448";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_449: HC_Commlink
	{
		displayName = "[HC] Commlink 449";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_450: HC_Commlink
	{
		displayName = "[HC] Commlink 450";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_451: HC_Commlink
	{
		displayName = "[HC] Commlink 451";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_452: HC_Commlink
	{
		displayName = "[HC] Commlink 452";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_453: HC_Commlink
	{
		displayName = "[HC] Commlink 453";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_454: HC_Commlink
	{
		displayName = "[HC] Commlink 454";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_455: HC_Commlink
	{
		displayName = "[HC] Commlink 455";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_456: HC_Commlink
	{
		displayName = "[HC] Commlink 456";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_457: HC_Commlink
	{
		displayName = "[HC] Commlink 457";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_458: HC_Commlink
	{
		displayName = "[HC] Commlink 458";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_459: HC_Commlink
	{
		displayName = "[HC] Commlink 459";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_460: HC_Commlink
	{
		displayName = "[HC] Commlink 460";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_461: HC_Commlink
	{
		displayName = "[HC] Commlink 461";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_462: HC_Commlink
	{
		displayName = "[HC] Commlink 462";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_463: HC_Commlink
	{
		displayName = "[HC] Commlink 463";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_464: HC_Commlink
	{
		displayName = "[HC] Commlink 464";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_465: HC_Commlink
	{
		displayName = "[HC] Commlink 465";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_466: HC_Commlink
	{
		displayName = "[HC] Commlink 466";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_467: HC_Commlink
	{
		displayName = "[HC] Commlink 467";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_468: HC_Commlink
	{
		displayName = "[HC] Commlink 468";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_469: HC_Commlink
	{
		displayName = "[HC] Commlink 469";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_470: HC_Commlink
	{
		displayName = "[HC] Commlink 470";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_471: HC_Commlink
	{
		displayName = "[HC] Commlink 471";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_472: HC_Commlink
	{
		displayName = "[HC] Commlink 472";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_473: HC_Commlink
	{
		displayName = "[HC] Commlink 473";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_474: HC_Commlink
	{
		displayName = "[HC] Commlink 474";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_475: HC_Commlink
	{
		displayName = "[HC] Commlink 475";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_476: HC_Commlink
	{
		displayName = "[HC] Commlink 476";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_477: HC_Commlink
	{
		displayName = "[HC] Commlink 477";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_478: HC_Commlink
	{
		displayName = "[HC] Commlink 478";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_479: HC_Commlink
	{
		displayName = "[HC] Commlink 479";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_480: HC_Commlink
	{
		displayName = "[HC] Commlink 480";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_481: HC_Commlink
	{
		displayName = "[HC] Commlink 481";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_482: HC_Commlink
	{
		displayName = "[HC] Commlink 482";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_483: HC_Commlink
	{
		displayName = "[HC] Commlink 483";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_484: HC_Commlink
	{
		displayName = "[HC] Commlink 484";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_485: HC_Commlink
	{
		displayName = "[HC] Commlink 485";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_486: HC_Commlink
	{
		displayName = "[HC] Commlink 486";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_487: HC_Commlink
	{
		displayName = "[HC] Commlink 487";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_488: HC_Commlink
	{
		displayName = "[HC] Commlink 488";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_489: HC_Commlink
	{
		displayName = "[HC] Commlink 489";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_490: HC_Commlink
	{
		displayName = "[HC] Commlink 490";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_491: HC_Commlink
	{
		displayName = "[HC] Commlink 491";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_492: HC_Commlink
	{
		displayName = "[HC] Commlink 492";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_493: HC_Commlink
	{
		displayName = "[HC] Commlink 493";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_494: HC_Commlink
	{
		displayName = "[HC] Commlink 494";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_495: HC_Commlink
	{
		displayName = "[HC] Commlink 495";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_496: HC_Commlink
	{
		displayName = "[HC] Commlink 496";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_497: HC_Commlink
	{
		displayName = "[HC] Commlink 497";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_498: HC_Commlink
	{
		displayName = "[HC] Commlink 498";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_499: HC_Commlink
	{
		displayName = "[HC] Commlink 499";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_500: HC_Commlink
	{
		displayName = "[HC] Commlink 500";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_501: HC_Commlink
	{
		displayName = "[HC] Commlink 501";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_502: HC_Commlink
	{
		displayName = "[HC] Commlink 502";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_503: HC_Commlink
	{
		displayName = "[HC] Commlink 503";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_504: HC_Commlink
	{
		displayName = "[HC] Commlink 504";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_505: HC_Commlink
	{
		displayName = "[HC] Commlink 505";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_506: HC_Commlink
	{
		displayName = "[HC] Commlink 506";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_507: HC_Commlink
	{
		displayName = "[HC] Commlink 507";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_508: HC_Commlink
	{
		displayName = "[HC] Commlink 508";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_509: HC_Commlink
	{
		displayName = "[HC] Commlink 509";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_510: HC_Commlink
	{
		displayName = "[HC] Commlink 510";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_511: HC_Commlink
	{
		displayName = "[HC] Commlink 511";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_512: HC_Commlink
	{
		displayName = "[HC] Commlink 512";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_513: HC_Commlink
	{
		displayName = "[HC] Commlink 513";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_514: HC_Commlink
	{
		displayName = "[HC] Commlink 514";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_515: HC_Commlink
	{
		displayName = "[HC] Commlink 515";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_516: HC_Commlink
	{
		displayName = "[HC] Commlink 516";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_517: HC_Commlink
	{
		displayName = "[HC] Commlink 517";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_518: HC_Commlink
	{
		displayName = "[HC] Commlink 518";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_519: HC_Commlink
	{
		displayName = "[HC] Commlink 519";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_520: HC_Commlink
	{
		displayName = "[HC] Commlink 520";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_521: HC_Commlink
	{
		displayName = "[HC] Commlink 521";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_522: HC_Commlink
	{
		displayName = "[HC] Commlink 522";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_523: HC_Commlink
	{
		displayName = "[HC] Commlink 523";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_524: HC_Commlink
	{
		displayName = "[HC] Commlink 524";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_525: HC_Commlink
	{
		displayName = "[HC] Commlink 525";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_526: HC_Commlink
	{
		displayName = "[HC] Commlink 526";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_527: HC_Commlink
	{
		displayName = "[HC] Commlink 527";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_528: HC_Commlink
	{
		displayName = "[HC] Commlink 528";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_529: HC_Commlink
	{
		displayName = "[HC] Commlink 529";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_530: HC_Commlink
	{
		displayName = "[HC] Commlink 530";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_531: HC_Commlink
	{
		displayName = "[HC] Commlink 531";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_532: HC_Commlink
	{
		displayName = "[HC] Commlink 532";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_533: HC_Commlink
	{
		displayName = "[HC] Commlink 533";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_534: HC_Commlink
	{
		displayName = "[HC] Commlink 534";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_535: HC_Commlink
	{
		displayName = "[HC] Commlink 535";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_536: HC_Commlink
	{
		displayName = "[HC] Commlink 536";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_537: HC_Commlink
	{
		displayName = "[HC] Commlink 537";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_538: HC_Commlink
	{
		displayName = "[HC] Commlink 538";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_539: HC_Commlink
	{
		displayName = "[HC] Commlink 539";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_540: HC_Commlink
	{
		displayName = "[HC] Commlink 540";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_541: HC_Commlink
	{
		displayName = "[HC] Commlink 541";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_542: HC_Commlink
	{
		displayName = "[HC] Commlink 542";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_543: HC_Commlink
	{
		displayName = "[HC] Commlink 543";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_544: HC_Commlink
	{
		displayName = "[HC] Commlink 544";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_545: HC_Commlink
	{
		displayName = "[HC] Commlink 545";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_546: HC_Commlink
	{
		displayName = "[HC] Commlink 546";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_547: HC_Commlink
	{
		displayName = "[HC] Commlink 547";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_548: HC_Commlink
	{
		displayName = "[HC] Commlink 548";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_549: HC_Commlink
	{
		displayName = "[HC] Commlink 549";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_550: HC_Commlink
	{
		displayName = "[HC] Commlink 550";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_551: HC_Commlink
	{
		displayName = "[HC] Commlink 551";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_552: HC_Commlink
	{
		displayName = "[HC] Commlink 552";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_553: HC_Commlink
	{
		displayName = "[HC] Commlink 553";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_554: HC_Commlink
	{
		displayName = "[HC] Commlink 554";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_555: HC_Commlink
	{
		displayName = "[HC] Commlink 555";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_556: HC_Commlink
	{
		displayName = "[HC] Commlink 556";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_557: HC_Commlink
	{
		displayName = "[HC] Commlink 557";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_558: HC_Commlink
	{
		displayName = "[HC] Commlink 558";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_559: HC_Commlink
	{
		displayName = "[HC] Commlink 559";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_560: HC_Commlink
	{
		displayName = "[HC] Commlink 560";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_561: HC_Commlink
	{
		displayName = "[HC] Commlink 561";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_562: HC_Commlink
	{
		displayName = "[HC] Commlink 562";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_563: HC_Commlink
	{
		displayName = "[HC] Commlink 563";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_564: HC_Commlink
	{
		displayName = "[HC] Commlink 564";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_565: HC_Commlink
	{
		displayName = "[HC] Commlink 565";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_566: HC_Commlink
	{
		displayName = "[HC] Commlink 566";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_567: HC_Commlink
	{
		displayName = "[HC] Commlink 567";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_568: HC_Commlink
	{
		displayName = "[HC] Commlink 568";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_569: HC_Commlink
	{
		displayName = "[HC] Commlink 569";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_570: HC_Commlink
	{
		displayName = "[HC] Commlink 570";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_571: HC_Commlink
	{
		displayName = "[HC] Commlink 571";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_572: HC_Commlink
	{
		displayName = "[HC] Commlink 572";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_573: HC_Commlink
	{
		displayName = "[HC] Commlink 573";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_574: HC_Commlink
	{
		displayName = "[HC] Commlink 574";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_575: HC_Commlink
	{
		displayName = "[HC] Commlink 575";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_576: HC_Commlink
	{
		displayName = "[HC] Commlink 576";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_577: HC_Commlink
	{
		displayName = "[HC] Commlink 577";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_578: HC_Commlink
	{
		displayName = "[HC] Commlink 578";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_579: HC_Commlink
	{
		displayName = "[HC] Commlink 579";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_580: HC_Commlink
	{
		displayName = "[HC] Commlink 580";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_581: HC_Commlink
	{
		displayName = "[HC] Commlink 581";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_582: HC_Commlink
	{
		displayName = "[HC] Commlink 582";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_583: HC_Commlink
	{
		displayName = "[HC] Commlink 583";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_584: HC_Commlink
	{
		displayName = "[HC] Commlink 584";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_585: HC_Commlink
	{
		displayName = "[HC] Commlink 585";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_586: HC_Commlink
	{
		displayName = "[HC] Commlink 586";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_587: HC_Commlink
	{
		displayName = "[HC] Commlink 587";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_588: HC_Commlink
	{
		displayName = "[HC] Commlink 588";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_589: HC_Commlink
	{
		displayName = "[HC] Commlink 589";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_590: HC_Commlink
	{
		displayName = "[HC] Commlink 590";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_591: HC_Commlink
	{
		displayName = "[HC] Commlink 591";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_592: HC_Commlink
	{
		displayName = "[HC] Commlink 592";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_593: HC_Commlink
	{
		displayName = "[HC] Commlink 593";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_594: HC_Commlink
	{
		displayName = "[HC] Commlink 594";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_595: HC_Commlink
	{
		displayName = "[HC] Commlink 595";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_596: HC_Commlink
	{
		displayName = "[HC] Commlink 596";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_597: HC_Commlink
	{
		displayName = "[HC] Commlink 597";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_598: HC_Commlink
	{
		displayName = "[HC] Commlink 598";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_599: HC_Commlink
	{
		displayName = "[HC] Commlink 599";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_600: HC_Commlink
	{
		displayName = "[HC] Commlink 600";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_601: HC_Commlink
	{
		displayName = "[HC] Commlink 601";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_602: HC_Commlink
	{
		displayName = "[HC] Commlink 602";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_603: HC_Commlink
	{
		displayName = "[HC] Commlink 603";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_604: HC_Commlink
	{
		displayName = "[HC] Commlink 604";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_605: HC_Commlink
	{
		displayName = "[HC] Commlink 605";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_606: HC_Commlink
	{
		displayName = "[HC] Commlink 606";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_607: HC_Commlink
	{
		displayName = "[HC] Commlink 607";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_608: HC_Commlink
	{
		displayName = "[HC] Commlink 608";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_609: HC_Commlink
	{
		displayName = "[HC] Commlink 609";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_610: HC_Commlink
	{
		displayName = "[HC] Commlink 610";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_611: HC_Commlink
	{
		displayName = "[HC] Commlink 611";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_612: HC_Commlink
	{
		displayName = "[HC] Commlink 612";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_613: HC_Commlink
	{
		displayName = "[HC] Commlink 613";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_614: HC_Commlink
	{
		displayName = "[HC] Commlink 614";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_615: HC_Commlink
	{
		displayName = "[HC] Commlink 615";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_616: HC_Commlink
	{
		displayName = "[HC] Commlink 616";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_617: HC_Commlink
	{
		displayName = "[HC] Commlink 617";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_618: HC_Commlink
	{
		displayName = "[HC] Commlink 618";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_619: HC_Commlink
	{
		displayName = "[HC] Commlink 619";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_620: HC_Commlink
	{
		displayName = "[HC] Commlink 620";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_621: HC_Commlink
	{
		displayName = "[HC] Commlink 621";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_622: HC_Commlink
	{
		displayName = "[HC] Commlink 622";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_623: HC_Commlink
	{
		displayName = "[HC] Commlink 623";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_624: HC_Commlink
	{
		displayName = "[HC] Commlink 624";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_625: HC_Commlink
	{
		displayName = "[HC] Commlink 625";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_626: HC_Commlink
	{
		displayName = "[HC] Commlink 626";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_627: HC_Commlink
	{
		displayName = "[HC] Commlink 627";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_628: HC_Commlink
	{
		displayName = "[HC] Commlink 628";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_629: HC_Commlink
	{
		displayName = "[HC] Commlink 629";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_630: HC_Commlink
	{
		displayName = "[HC] Commlink 630";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_631: HC_Commlink
	{
		displayName = "[HC] Commlink 631";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_632: HC_Commlink
	{
		displayName = "[HC] Commlink 632";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_633: HC_Commlink
	{
		displayName = "[HC] Commlink 633";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_634: HC_Commlink
	{
		displayName = "[HC] Commlink 634";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_635: HC_Commlink
	{
		displayName = "[HC] Commlink 635";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_636: HC_Commlink
	{
		displayName = "[HC] Commlink 636";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_637: HC_Commlink
	{
		displayName = "[HC] Commlink 637";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_638: HC_Commlink
	{
		displayName = "[HC] Commlink 638";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_639: HC_Commlink
	{
		displayName = "[HC] Commlink 639";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_640: HC_Commlink
	{
		displayName = "[HC] Commlink 640";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_641: HC_Commlink
	{
		displayName = "[HC] Commlink 641";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_642: HC_Commlink
	{
		displayName = "[HC] Commlink 642";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_643: HC_Commlink
	{
		displayName = "[HC] Commlink 643";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_644: HC_Commlink
	{
		displayName = "[HC] Commlink 644";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_645: HC_Commlink
	{
		displayName = "[HC] Commlink 645";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_646: HC_Commlink
	{
		displayName = "[HC] Commlink 646";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_647: HC_Commlink
	{
		displayName = "[HC] Commlink 647";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_648: HC_Commlink
	{
		displayName = "[HC] Commlink 648";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_649: HC_Commlink
	{
		displayName = "[HC] Commlink 649";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_650: HC_Commlink
	{
		displayName = "[HC] Commlink 650";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_651: HC_Commlink
	{
		displayName = "[HC] Commlink 651";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_652: HC_Commlink
	{
		displayName = "[HC] Commlink 652";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_653: HC_Commlink
	{
		displayName = "[HC] Commlink 653";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_654: HC_Commlink
	{
		displayName = "[HC] Commlink 654";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_655: HC_Commlink
	{
		displayName = "[HC] Commlink 655";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_656: HC_Commlink
	{
		displayName = "[HC] Commlink 656";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_657: HC_Commlink
	{
		displayName = "[HC] Commlink 657";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_658: HC_Commlink
	{
		displayName = "[HC] Commlink 658";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_659: HC_Commlink
	{
		displayName = "[HC] Commlink 659";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_660: HC_Commlink
	{
		displayName = "[HC] Commlink 660";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_661: HC_Commlink
	{
		displayName = "[HC] Commlink 661";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_662: HC_Commlink
	{
		displayName = "[HC] Commlink 662";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_663: HC_Commlink
	{
		displayName = "[HC] Commlink 663";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_664: HC_Commlink
	{
		displayName = "[HC] Commlink 664";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_665: HC_Commlink
	{
		displayName = "[HC] Commlink 665";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_666: HC_Commlink
	{
		displayName = "[HC] Commlink 666";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_667: HC_Commlink
	{
		displayName = "[HC] Commlink 667";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_668: HC_Commlink
	{
		displayName = "[HC] Commlink 668";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_669: HC_Commlink
	{
		displayName = "[HC] Commlink 669";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_670: HC_Commlink
	{
		displayName = "[HC] Commlink 670";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_671: HC_Commlink
	{
		displayName = "[HC] Commlink 671";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_672: HC_Commlink
	{
		displayName = "[HC] Commlink 672";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_673: HC_Commlink
	{
		displayName = "[HC] Commlink 673";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_674: HC_Commlink
	{
		displayName = "[HC] Commlink 674";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_675: HC_Commlink
	{
		displayName = "[HC] Commlink 675";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_676: HC_Commlink
	{
		displayName = "[HC] Commlink 676";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_677: HC_Commlink
	{
		displayName = "[HC] Commlink 677";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_678: HC_Commlink
	{
		displayName = "[HC] Commlink 678";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_679: HC_Commlink
	{
		displayName = "[HC] Commlink 679";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_680: HC_Commlink
	{
		displayName = "[HC] Commlink 680";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_681: HC_Commlink
	{
		displayName = "[HC] Commlink 681";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_682: HC_Commlink
	{
		displayName = "[HC] Commlink 682";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_683: HC_Commlink
	{
		displayName = "[HC] Commlink 683";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_684: HC_Commlink
	{
		displayName = "[HC] Commlink 684";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_685: HC_Commlink
	{
		displayName = "[HC] Commlink 685";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_686: HC_Commlink
	{
		displayName = "[HC] Commlink 686";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_687: HC_Commlink
	{
		displayName = "[HC] Commlink 687";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_688: HC_Commlink
	{
		displayName = "[HC] Commlink 688";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_689: HC_Commlink
	{
		displayName = "[HC] Commlink 689";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_690: HC_Commlink
	{
		displayName = "[HC] Commlink 690";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_691: HC_Commlink
	{
		displayName = "[HC] Commlink 691";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_692: HC_Commlink
	{
		displayName = "[HC] Commlink 692";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_693: HC_Commlink
	{
		displayName = "[HC] Commlink 693";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_694: HC_Commlink
	{
		displayName = "[HC] Commlink 694";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_695: HC_Commlink
	{
		displayName = "[HC] Commlink 695";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_696: HC_Commlink
	{
		displayName = "[HC] Commlink 696";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_697: HC_Commlink
	{
		displayName = "[HC] Commlink 697";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_698: HC_Commlink
	{
		displayName = "[HC] Commlink 698";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_699: HC_Commlink
	{
		displayName = "[HC] Commlink 699";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_700: HC_Commlink
	{
		displayName = "[HC] Commlink 700";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_701: HC_Commlink
	{
		displayName = "[HC] Commlink 701";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_702: HC_Commlink
	{
		displayName = "[HC] Commlink 702";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_703: HC_Commlink
	{
		displayName = "[HC] Commlink 703";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_704: HC_Commlink
	{
		displayName = "[HC] Commlink 704";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_705: HC_Commlink
	{
		displayName = "[HC] Commlink 705";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_706: HC_Commlink
	{
		displayName = "[HC] Commlink 706";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_707: HC_Commlink
	{
		displayName = "[HC] Commlink 707";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_708: HC_Commlink
	{
		displayName = "[HC] Commlink 708";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_709: HC_Commlink
	{
		displayName = "[HC] Commlink 709";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_710: HC_Commlink
	{
		displayName = "[HC] Commlink 710";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_711: HC_Commlink
	{
		displayName = "[HC] Commlink 711";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_712: HC_Commlink
	{
		displayName = "[HC] Commlink 712";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_713: HC_Commlink
	{
		displayName = "[HC] Commlink 713";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_714: HC_Commlink
	{
		displayName = "[HC] Commlink 714";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_715: HC_Commlink
	{
		displayName = "[HC] Commlink 715";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_716: HC_Commlink
	{
		displayName = "[HC] Commlink 716";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_717: HC_Commlink
	{
		displayName = "[HC] Commlink 717";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_718: HC_Commlink
	{
		displayName = "[HC] Commlink 718";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_719: HC_Commlink
	{
		displayName = "[HC] Commlink 719";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_720: HC_Commlink
	{
		displayName = "[HC] Commlink 720";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_721: HC_Commlink
	{
		displayName = "[HC] Commlink 721";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_722: HC_Commlink
	{
		displayName = "[HC] Commlink 722";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_723: HC_Commlink
	{
		displayName = "[HC] Commlink 723";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_724: HC_Commlink
	{
		displayName = "[HC] Commlink 724";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_725: HC_Commlink
	{
		displayName = "[HC] Commlink 725";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_726: HC_Commlink
	{
		displayName = "[HC] Commlink 726";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_727: HC_Commlink
	{
		displayName = "[HC] Commlink 727";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_728: HC_Commlink
	{
		displayName = "[HC] Commlink 728";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_729: HC_Commlink
	{
		displayName = "[HC] Commlink 729";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_730: HC_Commlink
	{
		displayName = "[HC] Commlink 730";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_731: HC_Commlink
	{
		displayName = "[HC] Commlink 731";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_732: HC_Commlink
	{
		displayName = "[HC] Commlink 732";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_733: HC_Commlink
	{
		displayName = "[HC] Commlink 733";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_734: HC_Commlink
	{
		displayName = "[HC] Commlink 734";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_735: HC_Commlink
	{
		displayName = "[HC] Commlink 735";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_736: HC_Commlink
	{
		displayName = "[HC] Commlink 736";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_737: HC_Commlink
	{
		displayName = "[HC] Commlink 737";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_738: HC_Commlink
	{
		displayName = "[HC] Commlink 738";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_739: HC_Commlink
	{
		displayName = "[HC] Commlink 739";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_740: HC_Commlink
	{
		displayName = "[HC] Commlink 740";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_741: HC_Commlink
	{
		displayName = "[HC] Commlink 741";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_742: HC_Commlink
	{
		displayName = "[HC] Commlink 742";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_743: HC_Commlink
	{
		displayName = "[HC] Commlink 743";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_744: HC_Commlink
	{
		displayName = "[HC] Commlink 744";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_745: HC_Commlink
	{
		displayName = "[HC] Commlink 745";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_746: HC_Commlink
	{
		displayName = "[HC] Commlink 746";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_747: HC_Commlink
	{
		displayName = "[HC] Commlink 747";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_748: HC_Commlink
	{
		displayName = "[HC] Commlink 748";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_749: HC_Commlink
	{
		displayName = "[HC] Commlink 749";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_750: HC_Commlink
	{
		displayName = "[HC] Commlink 750";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_751: HC_Commlink
	{
		displayName = "[HC] Commlink 751";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_752: HC_Commlink
	{
		displayName = "[HC] Commlink 752";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_753: HC_Commlink
	{
		displayName = "[HC] Commlink 753";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_754: HC_Commlink
	{
		displayName = "[HC] Commlink 754";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_755: HC_Commlink
	{
		displayName = "[HC] Commlink 755";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_756: HC_Commlink
	{
		displayName = "[HC] Commlink 756";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_757: HC_Commlink
	{
		displayName = "[HC] Commlink 757";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_758: HC_Commlink
	{
		displayName = "[HC] Commlink 758";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_759: HC_Commlink
	{
		displayName = "[HC] Commlink 759";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_760: HC_Commlink
	{
		displayName = "[HC] Commlink 760";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_761: HC_Commlink
	{
		displayName = "[HC] Commlink 761";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_762: HC_Commlink
	{
		displayName = "[HC] Commlink 762";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_763: HC_Commlink
	{
		displayName = "[HC] Commlink 763";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_764: HC_Commlink
	{
		displayName = "[HC] Commlink 764";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_765: HC_Commlink
	{
		displayName = "[HC] Commlink 765";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_766: HC_Commlink
	{
		displayName = "[HC] Commlink 766";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_767: HC_Commlink
	{
		displayName = "[HC] Commlink 767";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_768: HC_Commlink
	{
		displayName = "[HC] Commlink 768";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_769: HC_Commlink
	{
		displayName = "[HC] Commlink 769";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_770: HC_Commlink
	{
		displayName = "[HC] Commlink 770";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_771: HC_Commlink
	{
		displayName = "[HC] Commlink 771";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_772: HC_Commlink
	{
		displayName = "[HC] Commlink 772";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_773: HC_Commlink
	{
		displayName = "[HC] Commlink 773";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_774: HC_Commlink
	{
		displayName = "[HC] Commlink 774";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_775: HC_Commlink
	{
		displayName = "[HC] Commlink 775";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_776: HC_Commlink
	{
		displayName = "[HC] Commlink 776";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_777: HC_Commlink
	{
		displayName = "[HC] Commlink 777";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_778: HC_Commlink
	{
		displayName = "[HC] Commlink 778";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_779: HC_Commlink
	{
		displayName = "[HC] Commlink 779";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_780: HC_Commlink
	{
		displayName = "[HC] Commlink 780";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_781: HC_Commlink
	{
		displayName = "[HC] Commlink 781";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_782: HC_Commlink
	{
		displayName = "[HC] Commlink 782";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_783: HC_Commlink
	{
		displayName = "[HC] Commlink 783";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_784: HC_Commlink
	{
		displayName = "[HC] Commlink 784";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_785: HC_Commlink
	{
		displayName = "[HC] Commlink 785";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_786: HC_Commlink
	{
		displayName = "[HC] Commlink 786";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_787: HC_Commlink
	{
		displayName = "[HC] Commlink 787";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_788: HC_Commlink
	{
		displayName = "[HC] Commlink 788";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_789: HC_Commlink
	{
		displayName = "[HC] Commlink 789";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_790: HC_Commlink
	{
		displayName = "[HC] Commlink 790";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_791: HC_Commlink
	{
		displayName = "[HC] Commlink 791";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_792: HC_Commlink
	{
		displayName = "[HC] Commlink 792";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_793: HC_Commlink
	{
		displayName = "[HC] Commlink 793";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_794: HC_Commlink
	{
		displayName = "[HC] Commlink 794";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_795: HC_Commlink
	{
		displayName = "[HC] Commlink 795";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_796: HC_Commlink
	{
		displayName = "[HC] Commlink 796";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_797: HC_Commlink
	{
		displayName = "[HC] Commlink 797";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_798: HC_Commlink
	{
		displayName = "[HC] Commlink 798";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_799: HC_Commlink
	{
		displayName = "[HC] Commlink 799";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_800: HC_Commlink
	{
		displayName = "[HC] Commlink 800";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_801: HC_Commlink
	{
		displayName = "[HC] Commlink 801";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_802: HC_Commlink
	{
		displayName = "[HC] Commlink 802";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_803: HC_Commlink
	{
		displayName = "[HC] Commlink 803";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_804: HC_Commlink
	{
		displayName = "[HC] Commlink 804";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_805: HC_Commlink
	{
		displayName = "[HC] Commlink 805";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_806: HC_Commlink
	{
		displayName = "[HC] Commlink 806";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_807: HC_Commlink
	{
		displayName = "[HC] Commlink 807";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_808: HC_Commlink
	{
		displayName = "[HC] Commlink 808";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_809: HC_Commlink
	{
		displayName = "[HC] Commlink 809";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_810: HC_Commlink
	{
		displayName = "[HC] Commlink 810";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_811: HC_Commlink
	{
		displayName = "[HC] Commlink 811";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_812: HC_Commlink
	{
		displayName = "[HC] Commlink 812";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_813: HC_Commlink
	{
		displayName = "[HC] Commlink 813";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_814: HC_Commlink
	{
		displayName = "[HC] Commlink 814";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_815: HC_Commlink
	{
		displayName = "[HC] Commlink 815";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_816: HC_Commlink
	{
		displayName = "[HC] Commlink 816";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_817: HC_Commlink
	{
		displayName = "[HC] Commlink 817";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_818: HC_Commlink
	{
		displayName = "[HC] Commlink 818";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_819: HC_Commlink
	{
		displayName = "[HC] Commlink 819";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_820: HC_Commlink
	{
		displayName = "[HC] Commlink 820";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_821: HC_Commlink
	{
		displayName = "[HC] Commlink 821";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_822: HC_Commlink
	{
		displayName = "[HC] Commlink 822";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_823: HC_Commlink
	{
		displayName = "[HC] Commlink 823";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_824: HC_Commlink
	{
		displayName = "[HC] Commlink 824";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_825: HC_Commlink
	{
		displayName = "[HC] Commlink 825";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_826: HC_Commlink
	{
		displayName = "[HC] Commlink 826";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_827: HC_Commlink
	{
		displayName = "[HC] Commlink 827";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_828: HC_Commlink
	{
		displayName = "[HC] Commlink 828";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_829: HC_Commlink
	{
		displayName = "[HC] Commlink 829";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_830: HC_Commlink
	{
		displayName = "[HC] Commlink 830";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_831: HC_Commlink
	{
		displayName = "[HC] Commlink 831";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_832: HC_Commlink
	{
		displayName = "[HC] Commlink 832";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_833: HC_Commlink
	{
		displayName = "[HC] Commlink 833";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_834: HC_Commlink
	{
		displayName = "[HC] Commlink 834";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_835: HC_Commlink
	{
		displayName = "[HC] Commlink 835";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_836: HC_Commlink
	{
		displayName = "[HC] Commlink 836";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_837: HC_Commlink
	{
		displayName = "[HC] Commlink 837";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_838: HC_Commlink
	{
		displayName = "[HC] Commlink 838";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_839: HC_Commlink
	{
		displayName = "[HC] Commlink 839";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_840: HC_Commlink
	{
		displayName = "[HC] Commlink 840";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_841: HC_Commlink
	{
		displayName = "[HC] Commlink 841";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_842: HC_Commlink
	{
		displayName = "[HC] Commlink 842";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_843: HC_Commlink
	{
		displayName = "[HC] Commlink 843";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_844: HC_Commlink
	{
		displayName = "[HC] Commlink 844";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_845: HC_Commlink
	{
		displayName = "[HC] Commlink 845";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_846: HC_Commlink
	{
		displayName = "[HC] Commlink 846";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_847: HC_Commlink
	{
		displayName = "[HC] Commlink 847";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_848: HC_Commlink
	{
		displayName = "[HC] Commlink 848";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_849: HC_Commlink
	{
		displayName = "[HC] Commlink 849";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_850: HC_Commlink
	{
		displayName = "[HC] Commlink 850";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_851: HC_Commlink
	{
		displayName = "[HC] Commlink 851";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_852: HC_Commlink
	{
		displayName = "[HC] Commlink 852";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_853: HC_Commlink
	{
		displayName = "[HC] Commlink 853";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_854: HC_Commlink
	{
		displayName = "[HC] Commlink 854";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_855: HC_Commlink
	{
		displayName = "[HC] Commlink 855";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_856: HC_Commlink
	{
		displayName = "[HC] Commlink 856";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_857: HC_Commlink
	{
		displayName = "[HC] Commlink 857";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_858: HC_Commlink
	{
		displayName = "[HC] Commlink 858";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_859: HC_Commlink
	{
		displayName = "[HC] Commlink 859";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_860: HC_Commlink
	{
		displayName = "[HC] Commlink 860";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_861: HC_Commlink
	{
		displayName = "[HC] Commlink 861";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_862: HC_Commlink
	{
		displayName = "[HC] Commlink 862";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_863: HC_Commlink
	{
		displayName = "[HC] Commlink 863";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_864: HC_Commlink
	{
		displayName = "[HC] Commlink 864";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_865: HC_Commlink
	{
		displayName = "[HC] Commlink 865";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_866: HC_Commlink
	{
		displayName = "[HC] Commlink 866";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_867: HC_Commlink
	{
		displayName = "[HC] Commlink 867";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_868: HC_Commlink
	{
		displayName = "[HC] Commlink 868";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_869: HC_Commlink
	{
		displayName = "[HC] Commlink 869";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_870: HC_Commlink
	{
		displayName = "[HC] Commlink 870";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_871: HC_Commlink
	{
		displayName = "[HC] Commlink 871";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_872: HC_Commlink
	{
		displayName = "[HC] Commlink 872";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_873: HC_Commlink
	{
		displayName = "[HC] Commlink 873";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_874: HC_Commlink
	{
		displayName = "[HC] Commlink 874";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_875: HC_Commlink
	{
		displayName = "[HC] Commlink 875";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_876: HC_Commlink
	{
		displayName = "[HC] Commlink 876";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_877: HC_Commlink
	{
		displayName = "[HC] Commlink 877";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_878: HC_Commlink
	{
		displayName = "[HC] Commlink 878";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_879: HC_Commlink
	{
		displayName = "[HC] Commlink 879";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_880: HC_Commlink
	{
		displayName = "[HC] Commlink 880";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_881: HC_Commlink
	{
		displayName = "[HC] Commlink 881";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_882: HC_Commlink
	{
		displayName = "[HC] Commlink 882";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_883: HC_Commlink
	{
		displayName = "[HC] Commlink 883";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_884: HC_Commlink
	{
		displayName = "[HC] Commlink 884";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_885: HC_Commlink
	{
		displayName = "[HC] Commlink 885";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_886: HC_Commlink
	{
		displayName = "[HC] Commlink 886";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_887: HC_Commlink
	{
		displayName = "[HC] Commlink 887";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_888: HC_Commlink
	{
		displayName = "[HC] Commlink 888";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_889: HC_Commlink
	{
		displayName = "[HC] Commlink 889";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_890: HC_Commlink
	{
		displayName = "[HC] Commlink 890";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_891: HC_Commlink
	{
		displayName = "[HC] Commlink 891";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_892: HC_Commlink
	{
		displayName = "[HC] Commlink 892";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_893: HC_Commlink
	{
		displayName = "[HC] Commlink 893";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_894: HC_Commlink
	{
		displayName = "[HC] Commlink 894";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_895: HC_Commlink
	{
		displayName = "[HC] Commlink 895";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_896: HC_Commlink
	{
		displayName = "[HC] Commlink 896";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_897: HC_Commlink
	{
		displayName = "[HC] Commlink 897";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_898: HC_Commlink
	{
		displayName = "[HC] Commlink 898";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_899: HC_Commlink
	{
		displayName = "[HC] Commlink 899";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_900: HC_Commlink
	{
		displayName = "[HC] Commlink 900";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_901: HC_Commlink
	{
		displayName = "[HC] Commlink 901";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_902: HC_Commlink
	{
		displayName = "[HC] Commlink 902";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_903: HC_Commlink
	{
		displayName = "[HC] Commlink 903";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_904: HC_Commlink
	{
		displayName = "[HC] Commlink 904";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_905: HC_Commlink
	{
		displayName = "[HC] Commlink 905";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_906: HC_Commlink
	{
		displayName = "[HC] Commlink 906";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_907: HC_Commlink
	{
		displayName = "[HC] Commlink 907";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_908: HC_Commlink
	{
		displayName = "[HC] Commlink 908";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_909: HC_Commlink
	{
		displayName = "[HC] Commlink 909";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_910: HC_Commlink
	{
		displayName = "[HC] Commlink 910";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_911: HC_Commlink
	{
		displayName = "[HC] Commlink 911";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_912: HC_Commlink
	{
		displayName = "[HC] Commlink 912";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_913: HC_Commlink
	{
		displayName = "[HC] Commlink 913";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_914: HC_Commlink
	{
		displayName = "[HC] Commlink 914";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_915: HC_Commlink
	{
		displayName = "[HC] Commlink 915";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_916: HC_Commlink
	{
		displayName = "[HC] Commlink 916";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_917: HC_Commlink
	{
		displayName = "[HC] Commlink 917";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_918: HC_Commlink
	{
		displayName = "[HC] Commlink 918";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_919: HC_Commlink
	{
		displayName = "[HC] Commlink 919";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_920: HC_Commlink
	{
		displayName = "[HC] Commlink 920";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_921: HC_Commlink
	{
		displayName = "[HC] Commlink 921";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_922: HC_Commlink
	{
		displayName = "[HC] Commlink 922";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_923: HC_Commlink
	{
		displayName = "[HC] Commlink 923";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_924: HC_Commlink
	{
		displayName = "[HC] Commlink 924";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_925: HC_Commlink
	{
		displayName = "[HC] Commlink 925";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_926: HC_Commlink
	{
		displayName = "[HC] Commlink 926";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_927: HC_Commlink
	{
		displayName = "[HC] Commlink 927";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_928: HC_Commlink
	{
		displayName = "[HC] Commlink 928";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_929: HC_Commlink
	{
		displayName = "[HC] Commlink 929";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_930: HC_Commlink
	{
		displayName = "[HC] Commlink 930";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_931: HC_Commlink
	{
		displayName = "[HC] Commlink 931";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_932: HC_Commlink
	{
		displayName = "[HC] Commlink 932";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_933: HC_Commlink
	{
		displayName = "[HC] Commlink 933";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_934: HC_Commlink
	{
		displayName = "[HC] Commlink 934";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_935: HC_Commlink
	{
		displayName = "[HC] Commlink 935";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_936: HC_Commlink
	{
		displayName = "[HC] Commlink 936";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_937: HC_Commlink
	{
		displayName = "[HC] Commlink 937";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_938: HC_Commlink
	{
		displayName = "[HC] Commlink 938";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_939: HC_Commlink
	{
		displayName = "[HC] Commlink 939";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_940: HC_Commlink
	{
		displayName = "[HC] Commlink 940";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_941: HC_Commlink
	{
		displayName = "[HC] Commlink 941";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_942: HC_Commlink
	{
		displayName = "[HC] Commlink 942";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_943: HC_Commlink
	{
		displayName = "[HC] Commlink 943";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_944: HC_Commlink
	{
		displayName = "[HC] Commlink 944";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_945: HC_Commlink
	{
		displayName = "[HC] Commlink 945";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_946: HC_Commlink
	{
		displayName = "[HC] Commlink 946";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_947: HC_Commlink
	{
		displayName = "[HC] Commlink 947";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_948: HC_Commlink
	{
		displayName = "[HC] Commlink 948";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_949: HC_Commlink
	{
		displayName = "[HC] Commlink 949";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_950: HC_Commlink
	{
		displayName = "[HC] Commlink 950";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_951: HC_Commlink
	{
		displayName = "[HC] Commlink 951";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_952: HC_Commlink
	{
		displayName = "[HC] Commlink 952";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_953: HC_Commlink
	{
		displayName = "[HC] Commlink 953";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_954: HC_Commlink
	{
		displayName = "[HC] Commlink 954";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_955: HC_Commlink
	{
		displayName = "[HC] Commlink 955";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_956: HC_Commlink
	{
		displayName = "[HC] Commlink 956";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_957: HC_Commlink
	{
		displayName = "[HC] Commlink 957";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_958: HC_Commlink
	{
		displayName = "[HC] Commlink 958";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_959: HC_Commlink
	{
		displayName = "[HC] Commlink 959";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_960: HC_Commlink
	{
		displayName = "[HC] Commlink 960";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_961: HC_Commlink
	{
		displayName = "[HC] Commlink 961";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_962: HC_Commlink
	{
		displayName = "[HC] Commlink 962";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_963: HC_Commlink
	{
		displayName = "[HC] Commlink 963";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_964: HC_Commlink
	{
		displayName = "[HC] Commlink 964";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_965: HC_Commlink
	{
		displayName = "[HC] Commlink 965";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_966: HC_Commlink
	{
		displayName = "[HC] Commlink 966";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_967: HC_Commlink
	{
		displayName = "[HC] Commlink 967";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_968: HC_Commlink
	{
		displayName = "[HC] Commlink 968";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_969: HC_Commlink
	{
		displayName = "[HC] Commlink 969";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_970: HC_Commlink
	{
		displayName = "[HC] Commlink 970";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_971: HC_Commlink
	{
		displayName = "[HC] Commlink 971";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_972: HC_Commlink
	{
		displayName = "[HC] Commlink 972";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_973: HC_Commlink
	{
		displayName = "[HC] Commlink 973";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_974: HC_Commlink
	{
		displayName = "[HC] Commlink 974";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_975: HC_Commlink
	{
		displayName = "[HC] Commlink 975";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_976: HC_Commlink
	{
		displayName = "[HC] Commlink 976";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_977: HC_Commlink
	{
		displayName = "[HC] Commlink 977";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_978: HC_Commlink
	{
		displayName = "[HC] Commlink 978";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_979: HC_Commlink
	{
		displayName = "[HC] Commlink 979";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_980: HC_Commlink
	{
		displayName = "[HC] Commlink 980";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_981: HC_Commlink
	{
		displayName = "[HC] Commlink 981";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_982: HC_Commlink
	{
		displayName = "[HC] Commlink 982";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_983: HC_Commlink
	{
		displayName = "[HC] Commlink 983";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_984: HC_Commlink
	{
		displayName = "[HC] Commlink 984";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_985: HC_Commlink
	{
		displayName = "[HC] Commlink 985";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_986: HC_Commlink
	{
		displayName = "[HC] Commlink 986";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_987: HC_Commlink
	{
		displayName = "[HC] Commlink 987";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_988: HC_Commlink
	{
		displayName = "[HC] Commlink 988";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_989: HC_Commlink
	{
		displayName = "[HC] Commlink 989";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_990: HC_Commlink
	{
		displayName = "[HC] Commlink 990";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_991: HC_Commlink
	{
		displayName = "[HC] Commlink 991";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_992: HC_Commlink
	{
		displayName = "[HC] Commlink 992";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_993: HC_Commlink
	{
		displayName = "[HC] Commlink 993";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_994: HC_Commlink
	{
		displayName = "[HC] Commlink 994";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_995: HC_Commlink
	{
		displayName = "[HC] Commlink 995";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_996: HC_Commlink
	{
		displayName = "[HC] Commlink 996";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_997: HC_Commlink
	{
		displayName = "[HC] Commlink 997";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_998: HC_Commlink
	{
		displayName = "[HC] Commlink 998";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_999: HC_Commlink
	{
		displayName = "[HC] Commlink 999";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};
	class HC_Commlink_1000: HC_Commlink
	{
		displayName = "[HC] Commlink 1000";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
	};

	
};

class CfgVehicles
{
	//Backpacks
	class JMSLLTE_back_rebradio_v1_black;
	class Endor_Rebel_Radio;
	class ItemInfo;
	class HC_Backpack_LR_Green: Endor_Rebel_Radio
	{
		author = "Queen";
		scope = 2;
    	displayName = "[HC] U/MCL 77";
		tf_range = 40000;
		tf_encryptionCode = "tf_east_radio_code";
		tf_dialog = "hc_lr_radio_dialog";
		tf_subtype = "digital_lr";
 		tf_dialogUpdate = "['CH: %1'] call TFAR_fnc_updateLRDialogToChannel;";
		maximumLoad = 160;
	};
	//Uniforms USE EdSubcat_Personnel_Story FOR CUSTOMS GEORGE <3
	
	//Objects
	class JLTS_Ammobox_weapons_GAR;
	class HC_Ammobox_REB: JLTS_Ammobox_weapons_GAR
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Ammobox Rebels";
		editorCategory = "HC_Props";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"HC_Core\data\objects\screen_1_REB_weapons1_co"
		};
		icon="iconCrateWpns";
		armor=1000;

	};
	
};



class ACE_Tags {
    class Horizon_Logo {
        displayName = "Horizon Company";  // Name of your tag being displayed in the interaction menu
        requiredItem = "ACE_SpraypaintRed";  // Required item to have in the inventory to be able to spray your tag (eg. `"ACE_SpraypaintBlack"`, `"ACE_SpraypaintRed"`, `"ACE_SpraypaintGreen"`, `"ACE_SpraypaintBlue"` or any custom item from `CfgWeapons`)
        textures[] = 
		{
			"HC_Core\data\logos\hclogospraypaint_co.paa"
		
		};  // List of texture variations (one is randomly selected when tagging)
        //materials[] = {"path\to\material.rvmat"}; // Optional: List of material variations (one is randomly selected). Keep empty if you don't need a custom material.
        icon = "HC_Core\data\logos\hclogo.paa";  // Icon being displayed in the interaction menu
        //tagModel = "UserTexture1m_F"; // Optional: The 3D Model that will be spawned with the texture on it, can either be CfgVehicles classname or P3D file path.
    };
};

