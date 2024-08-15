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

class ACEX_Fortify_Presets
{
	class HC_FortPreset
	{
		displayName = "Horizon Company Defenses";
		objects[] = {
			{"Land_Plank_01_4m_F"},
			{"Land_BagFence_Long_F", 7},
			{"Land_BagFence_Short_F", 5},
			{"Land_BagFence_Round_F", 5},
		};
	};
};
class CfgWeapons
{
	class ItemRadio;
	class HC_Commlink: ItemRadio {
		author = "Queen";
		displayName = "[HC] Commlink";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal=2;
		model = "";
		picture = "";
		tf_prototype = 1;
		tf_range = 5000;
		tf_dialog = "commlink_radio_dialog";
		tf_encryptionCode = "tf_east_radio_code";
		tf_dialogUpdate = "call TFAR_fnc_updateSWDialogToChannel;";
		tf_subtype = "digital";
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

