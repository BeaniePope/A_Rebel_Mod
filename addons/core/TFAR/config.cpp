class CfgPatches
{
    class HCA_Core_SR
    {
        author= "HCA Aux Team";
        requiredAddons[]=
        {
			"A3_Modules_F",
			"A3_UI_F",
			"A3_Structures_F_Items_Electronics",
			"A3_Weapons_F_ItemHolders",
			"tfar_core",
			"tfar_static_radios",
			"3DEN"	
        };
        weapons[]=
        {
			"HCA_Commlink"
        };
        units[]=
        {};
    };
};

///TFAR Definitions
#include "TFAR_Radios\uiDefines.hpp"
#include "TFAR_Radios\ui\hclr.hpp"
#include "TFAR_Radios\ui\commlink.hpp"
class CfgWeapons
{
	class TFAR_anprc152;
	class ItemRadio;
	class HCA_Commlink: ItemRadio 
	{
		author = "Queen";
		displayName = "[HCA] Commlink";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal=2;
		//model = "";
		picture = "\HCA_Core\TFAR\TFAR_Radios\ui\commlink_icon.paa";
		tf_prototype = 1;
		tf_range = 5000;
		tf_dialog = "commlink_radio_dialog";
		tf_encryptionCode = "tf_east_radio_code";
		tf_dialogUpdate = "call TFAR_fnc_updateSWDialogToChannel;";
		tf_subtype = "digital";
		tf_parent = "HCA_Commlink";
		tf_additional_channel = 1;
	};
	class HCA_Commlink_1: HCA_Commlink
	{
		displayName = "[HCA] Commlink 1";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		ace_arsenal_uniqueBase="HCA_Commlink";
	};
	class HCA_Commlink_2: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 2";
	};
	class HCA_Commlink_3: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 3";
	};
	class HCA_Commlink_4: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 4";
	};
	class HCA_Commlink_5: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 5";
	};
	class HCA_Commlink_6: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 6";
	};
	class HCA_Commlink_7: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 7";
	};
	class HCA_Commlink_8: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 8";
	};
	class HCA_Commlink_9: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 9";
	};
	class HCA_Commlink_10: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 10";
	};
	class HCA_Commlink_11: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 11";
	};
	class HCA_Commlink_12: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 12";
		
	};
	class HCA_Commlink_13: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 13";
		
	};
	class HCA_Commlink_14: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 14";
		
	};
	class HCA_Commlink_15: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 15";
		
	};
	class HCA_Commlink_16: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 16";
		
	};
	class HCA_Commlink_17: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 17";
		
	};
	class HCA_Commlink_18: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 18";
		
	};
	class HCA_Commlink_19: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 19";
		
	};
	class HCA_Commlink_20: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 20";
		
	};
	class HCA_Commlink_21: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 21";
		
	};
	class HCA_Commlink_22: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 22";
		
	};
	class HCA_Commlink_23: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 23";
		
	};
	class HCA_Commlink_24: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 24";
		
	};
	class HCA_Commlink_25: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 25";
		
	};
	class HCA_Commlink_26: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 26";
		
	};
	class HCA_Commlink_27: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 27";
		
	};
	class HCA_Commlink_28: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 28";
		
	};
	class HCA_Commlink_29: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 29";
		
	};
	class HCA_Commlink_30: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 30";
		
	};
	class HCA_Commlink_31: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 31";
		
	};
	class HCA_Commlink_32: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 32";
		
	};
	class HCA_Commlink_33: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 33";
		
	};
	class HCA_Commlink_34: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 34";
		
	};
	class HCA_Commlink_35: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 35";
		
	};
	class HCA_Commlink_36: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 36";
		
	};
	class HCA_Commlink_37: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 37";
		
	};
	class HCA_Commlink_38: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 38";
		
	};
	class HCA_Commlink_39: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 39";
		
	};
	class HCA_Commlink_40: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 40";
		
	};
	class HCA_Commlink_41: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 41";
		
	};
	class HCA_Commlink_42: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 42";
		
	};
	class HCA_Commlink_43: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 43";
		
	};
	class HCA_Commlink_44: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 44";
		
	};
	class HCA_Commlink_45: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 45";
		
	};
	class HCA_Commlink_46: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 46";
		
	};
	class HCA_Commlink_47: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 47";
		
	};
	class HCA_Commlink_48: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 48";
		
	};
	class HCA_Commlink_49: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 49";
		
	};
	class HCA_Commlink_50: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 50";
		
	};
	class HCA_Commlink_51: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 51";
		
	};
	class HCA_Commlink_52: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 52";
		
	};
	class HCA_Commlink_53: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 53";
		
	};
	class HCA_Commlink_54: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 54";
		
	};
	class HCA_Commlink_55: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 55";
		
	};
	class HCA_Commlink_56: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 56";
		
	};
	class HCA_Commlink_57: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 57";
		
	};
	class HCA_Commlink_58: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 58";
		
	};
	class HCA_Commlink_59: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 59";
		
	};
	class HCA_Commlink_60: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 60";
		
	};
	class HCA_Commlink_61: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 61";
		
	};
	class HCA_Commlink_62: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 62";
		
	};
	class HCA_Commlink_63: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 63";
		
	};
	class HCA_Commlink_64: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 64";
		
	};
	class HCA_Commlink_65: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 65";
		
	};
	class HCA_Commlink_66: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 66";
		
	};
	class HCA_Commlink_67: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 67";
		
	};
	class HCA_Commlink_68: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 68";
		
	};
	class HCA_Commlink_69: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 69";
		
	};
	class HCA_Commlink_70: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 70";
		
	};
	class HCA_Commlink_71: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 71";
		
	};
	class HCA_Commlink_72: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 72";
		
	};
	class HCA_Commlink_73: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 73";
		
	};
	class HCA_Commlink_74: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 74";
		
	};
	class HCA_Commlink_75: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 75";
		
	};
	class HCA_Commlink_76: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 76";
		
	};
	class HCA_Commlink_77: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 77";
		
	};
	class HCA_Commlink_78: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 78";
		
	};
	class HCA_Commlink_79: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 79";
		
	};
	class HCA_Commlink_80: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 80";
		
	};
	class HCA_Commlink_81: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 81";
		
	};
	class HCA_Commlink_82: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 82";
		
	};
	class HCA_Commlink_83: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 83";
		
	};
	class HCA_Commlink_84: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 84";
		
	};
	class HCA_Commlink_85: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 85";
		
	};
	class HCA_Commlink_86: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 86";
		
	};
	class HCA_Commlink_87: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 87";
		
	};
	class HCA_Commlink_88: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 88";
		
	};
	class HCA_Commlink_89: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 89";
		
	};
	class HCA_Commlink_90: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 90";
		
	};
	class HCA_Commlink_91: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 91";
		
	};
	class HCA_Commlink_92: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 92";
		
	};
	class HCA_Commlink_93: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 93";
		
	};
	class HCA_Commlink_94: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 94";
		
	};
	class HCA_Commlink_95: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 95";
		
	};
	class HCA_Commlink_96: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 96";
		
	};
	class HCA_Commlink_97: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 97";
		
	};
	class HCA_Commlink_98: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 98";
		
	};
	class HCA_Commlink_99: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 99";
		
	};
	class HCA_Commlink_100: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 100";
		
	};
	class HCA_Commlink_101: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 101";
		
	};
	class HCA_Commlink_102: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 102";
		
	};
	class HCA_Commlink_103: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 103";
		
	};
	class HCA_Commlink_104: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 104";
		
	};
	class HCA_Commlink_105: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 105";
		
	};
	class HCA_Commlink_106: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 106";
		
	};
	class HCA_Commlink_107: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 107";
		
	};
	class HCA_Commlink_108: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 108";
		
	};
	class HCA_Commlink_109: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 109";
		
	};
	class HCA_Commlink_110: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 110";
		
	};
	class HCA_Commlink_111: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 111";
		
	};
	class HCA_Commlink_112: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 112";
		
	};
	class HCA_Commlink_113: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 113";
		
	};
	class HCA_Commlink_114: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 114";
		
	};
	class HCA_Commlink_115: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 115";
		
	};
	class HCA_Commlink_116: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 116";
		
	};
	class HCA_Commlink_117: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 117";
		
	};
	class HCA_Commlink_118: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 118";
		
	};
	class HCA_Commlink_119: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 119";
		
	};
	class HCA_Commlink_120: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 120";
		
	};
	class HCA_Commlink_121: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 121";
		
	};
	class HCA_Commlink_122: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 122";
		
	};
	class HCA_Commlink_123: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 123";
		
	};
	class HCA_Commlink_124: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 124";
		
	};
	class HCA_Commlink_125: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 125";
		
	};
	class HCA_Commlink_126: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 126";
		
	};
	class HCA_Commlink_127: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 127";
		
	};
	class HCA_Commlink_128: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 128";
		
	};
	class HCA_Commlink_129: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 129";
		
	};
	class HCA_Commlink_130: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 130";
		
	};
	class HCA_Commlink_131: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 131";
		
	};
	class HCA_Commlink_132: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 132";
		
	};
	class HCA_Commlink_133: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 133";
		
	};
	class HCA_Commlink_134: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 134";
		
	};
	class HCA_Commlink_135: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 135";
		
	};
	class HCA_Commlink_136: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 136";
		
	};
	class HCA_Commlink_137: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 137";
		
	};
	class HCA_Commlink_138: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 138";
		
	};
	class HCA_Commlink_139: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 139";
		
	};
	class HCA_Commlink_140: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 140";
		
	};
	class HCA_Commlink_141: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 141";
		
	};
	class HCA_Commlink_142: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 142";
		
	};
	class HCA_Commlink_143: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 143";
		
	};
	class HCA_Commlink_144: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 144";
		
	};
	class HCA_Commlink_145: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 145";
		
	};
	class HCA_Commlink_146: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 146";
		
	};
	class HCA_Commlink_147: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 147";
		
	};
	class HCA_Commlink_148: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 148";
		
	};
	class HCA_Commlink_149: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 149";
		
	};
	class HCA_Commlink_150: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 150";
		
	};
	class HCA_Commlink_151: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 151";
		
	};
	class HCA_Commlink_152: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 152";
		
	};
	class HCA_Commlink_153: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 153";
		
	};
	class HCA_Commlink_154: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 154";
		
	};
	class HCA_Commlink_155: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 155";
		
	};
	class HCA_Commlink_156: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 156";
		
	};
	class HCA_Commlink_157: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 157";
		
	};
	class HCA_Commlink_158: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 158";
		
	};
	class HCA_Commlink_159: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 159";
		
	};
	class HCA_Commlink_160: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 160";
		
	};
	class HCA_Commlink_161: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 161";
		
	};
	class HCA_Commlink_162: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 162";
		
	};
	class HCA_Commlink_163: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 163";
		
	};
	class HCA_Commlink_164: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 164";
		
	};
	class HCA_Commlink_165: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 165";
		
	};
	class HCA_Commlink_166: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 166";
		
	};
	class HCA_Commlink_167: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 167";
		
	};
	class HCA_Commlink_168: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 168";
		
	};
	class HCA_Commlink_169: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 169";
		
	};
	class HCA_Commlink_170: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 170";
		
	};
	class HCA_Commlink_171: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 171";
		
	};
	class HCA_Commlink_172: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 172";
		
	};
	class HCA_Commlink_173: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 173";
		
	};
	class HCA_Commlink_174: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 174";
		
	};
	class HCA_Commlink_175: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 175";
		
	};
	class HCA_Commlink_176: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 176";
		
	};
	class HCA_Commlink_177: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 177";
		
	};
	class HCA_Commlink_178: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 178";
		
	};
	class HCA_Commlink_179: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 179";
		
	};
	class HCA_Commlink_180: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 180";
		
	};
	class HCA_Commlink_181: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 181";
		
	};
	class HCA_Commlink_182: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 182";
		
	};
	class HCA_Commlink_183: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 183";
		
	};
	class HCA_Commlink_184: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 184";
		
	};
	class HCA_Commlink_185: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 185";
		
	};
	class HCA_Commlink_186: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 186";
		
	};
	class HCA_Commlink_187: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 187";
		
	};
	class HCA_Commlink_188: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 188";
		
	};
	class HCA_Commlink_189: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 189";
		
	};
	class HCA_Commlink_190: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 190";
		
	};
	class HCA_Commlink_191: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 191";
		
	};
	class HCA_Commlink_192: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 192";
		
	};
	class HCA_Commlink_193: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 193";
		
	};
	class HCA_Commlink_194: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 194";
		
	};
	class HCA_Commlink_195: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 195";
		
	};
	class HCA_Commlink_196: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 196";
		
	};
	class HCA_Commlink_197: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 197";
		
	};
	class HCA_Commlink_198: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 198";
		
	};
	class HCA_Commlink_199: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 199";
		
	};
	class HCA_Commlink_200: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 200";
		
	};
	class HCA_Commlink_201: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 201";
		
	};
	class HCA_Commlink_202: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 202";
		
	};
	class HCA_Commlink_203: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 203";
		
	};
	class HCA_Commlink_204: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 204";
		
	};
	class HCA_Commlink_205: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 205";
		
	};
	class HCA_Commlink_206: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 206";
		
	};
	class HCA_Commlink_207: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 207";
		
	};
	class HCA_Commlink_208: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 208";
		
	};
	class HCA_Commlink_209: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 209";
		
	};
	class HCA_Commlink_210: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 210";
		
	};
	class HCA_Commlink_211: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 211";
		
	};
	class HCA_Commlink_212: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 212";
		
	};
	class HCA_Commlink_213: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 213";
		
	};
	class HCA_Commlink_214: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 214";
		
	};
	class HCA_Commlink_215: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 215";
		
	};
	class HCA_Commlink_216: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 216";
		
	};
	class HCA_Commlink_217: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 217";
		
	};
	class HCA_Commlink_218: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 218";
		
	};
	class HCA_Commlink_219: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 219";
		
	};
	class HCA_Commlink_220: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 220";
		
	};
	class HCA_Commlink_221: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 221";
		
	};
	class HCA_Commlink_222: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 222";
		
	};
	class HCA_Commlink_223: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 223";
		
	};
	class HCA_Commlink_224: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 224";
		
	};
	class HCA_Commlink_225: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 225";
		
	};
	class HCA_Commlink_226: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 226";
		
	};
	class HCA_Commlink_227: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 227";
		
	};
	class HCA_Commlink_228: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 228";
		
	};
	class HCA_Commlink_229: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 229";
		
	};
	class HCA_Commlink_230: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 230";
		
	};
	class HCA_Commlink_231: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 231";
		
	};
	class HCA_Commlink_232: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 232";
		
	};
	class HCA_Commlink_233: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 233";
		
	};
	class HCA_Commlink_234: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 234";
		
	};
	class HCA_Commlink_235: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 235";
		
	};
	class HCA_Commlink_236: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 236";
		
	};
	class HCA_Commlink_237: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 237";
		
	};
	class HCA_Commlink_238: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 238";
		
	};
	class HCA_Commlink_239: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 239";
		
	};
	class HCA_Commlink_240: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 240";
		
	};
	class HCA_Commlink_241: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 241";
		
	};
	class HCA_Commlink_242: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 242";
		
	};
	class HCA_Commlink_243: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 243";
		
	};
	class HCA_Commlink_244: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 244";
		
	};
	class HCA_Commlink_245: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 245";
		
	};
	class HCA_Commlink_246: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 246";
		
	};
	class HCA_Commlink_247: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 247";
		
	};
	class HCA_Commlink_248: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 248";
		
	};
	class HCA_Commlink_249: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 249";
		
	};
	class HCA_Commlink_250: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 250";
		
	};
	class HCA_Commlink_251: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 251";
		
	};
	class HCA_Commlink_252: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 252";
		
	};
	class HCA_Commlink_253: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 253";
		
	};
	class HCA_Commlink_254: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 254";
		
	};
	class HCA_Commlink_255: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 255";
		
	};
	class HCA_Commlink_256: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 256";
		
	};
	class HCA_Commlink_257: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 257";
		
	};
	class HCA_Commlink_258: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 258";
		
	};
	class HCA_Commlink_259: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 259";
		
	};
	class HCA_Commlink_260: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 260";
		
	};
	class HCA_Commlink_261: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 261";
		
	};
	class HCA_Commlink_262: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 262";
		
	};
	class HCA_Commlink_263: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 263";
		
	};
	class HCA_Commlink_264: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 264";
		
	};
	class HCA_Commlink_265: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 265";
		
	};
	class HCA_Commlink_266: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 266";
		
	};
	class HCA_Commlink_267: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 267";
		
	};
	class HCA_Commlink_268: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 268";
		
	};
	class HCA_Commlink_269: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 269";
		
	};
	class HCA_Commlink_270: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 270";
		
	};
	class HCA_Commlink_271: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 271";
		
	};
	class HCA_Commlink_272: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 272";
		
	};
	class HCA_Commlink_273: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 273";
		
	};
	class HCA_Commlink_274: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 274";
		
	};
	class HCA_Commlink_275: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 275";
		
	};
	class HCA_Commlink_276: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 276";
		
	};
	class HCA_Commlink_277: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 277";
		
	};
	class HCA_Commlink_278: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 278";
		
	};
	class HCA_Commlink_279: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 279";
		
	};
	class HCA_Commlink_280: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 280";
		
	};
	class HCA_Commlink_281: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 281";
		
	};
	class HCA_Commlink_282: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 282";
		
	};
	class HCA_Commlink_283: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 283";
		
	};
	class HCA_Commlink_284: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 284";
		
	};
	class HCA_Commlink_285: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 285";
		
	};
	class HCA_Commlink_286: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 286";
		
	};
	class HCA_Commlink_287: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 287";
		
	};
	class HCA_Commlink_288: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 288";
		
	};
	class HCA_Commlink_289: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 289";
		
	};
	class HCA_Commlink_290: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 290";
		
	};
	class HCA_Commlink_291: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 291";
		
	};
	class HCA_Commlink_292: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 292";
		
	};
	class HCA_Commlink_293: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 293";
		
	};
	class HCA_Commlink_294: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 294";
		
	};
	class HCA_Commlink_295: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 295";
		
	};
	class HCA_Commlink_296: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 296";
		
	};
	class HCA_Commlink_297: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 297";
		
	};
	class HCA_Commlink_298: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 298";
		
	};
	class HCA_Commlink_299: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 299";
		
	};
	class HCA_Commlink_300: HCA_Commlink_1
	{
		displayName = "[HCA] Commlink 300";
		
	};
	
};
