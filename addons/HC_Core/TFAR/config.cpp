class CfgPatches
{
    class HC_Core_SR
    {
        author= "HC Aux Team";
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
			"HC_Commlink"
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
	class HC_Commlink: ItemRadio 
	{
		author = "Queen";
		displayName = "[HC] Commlink";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal=2;
		//model = "";
		picture = "\HC_Core\TFAR\TFAR_Radios\ui\commlink_icon.paa";
		tf_prototype = 1;
		tf_range = 5000;
		tf_dialog = "commlink_radio_dialog";
		tf_encryptionCode = "tf_east_radio_code";
		tf_dialogUpdate = "call TFAR_fnc_updateSWDialogToChannel;";
		tf_subtype = "digital";
		tf_parent = "HC_Commlink";
		tf_additional_channel = 1;
	};
	class HC_Commlink_1: HC_commlink
	{
		displayName = "[HC] Commlink 1";
		tf_radio = 1;
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_prototype = 0;
		tf_radio = 1;
		ace_arsenal_uniqueBase="HC_Commlink"
	};
	class HC_Commlink_2: HC_Commlink_1
	{
		displayName = "[HC] Commlink 2";
	};
	class HC_Commlink_3: HC_Commlink_1
	{
		displayName = "[HC] Commlink 3";
	};
	class HC_Commlink_4: HC_Commlink_1
	{
		displayName = "[HC] Commlink 4";
	};
	class HC_Commlink_5: HC_Commlink_1
	{
		displayName = "[HC] Commlink 5";
	};
	class HC_Commlink_6: HC_Commlink_1
	{
		displayName = "[HC] Commlink 6";
	};
	class HC_Commlink_7: HC_Commlink_1
	{
		displayName = "[HC] Commlink 7";
	};
	class HC_Commlink_8: HC_Commlink_1
	{
		displayName = "[HC] Commlink 8";
	};
	class HC_Commlink_9: HC_Commlink_1
	{
		displayName = "[HC] Commlink 9";
	};
	class HC_Commlink_10: HC_Commlink_1
	{
		displayName = "[HC] Commlink 10";
	};
	class HC_Commlink_11: HC_Commlink_1
	{
		displayName = "[HC] Commlink 11";
	};
	class HC_Commlink_12: HC_commlink_1
	{
		displayName = "[HC] Commlink 12";
		
	};
	class HC_Commlink_13: HC_commlink_1
	{
		displayName = "[HC] Commlink 13";
		
	};
	class HC_Commlink_14: HC_commlink_1
	{
		displayName = "[HC] Commlink 14";
		
	};
	class HC_Commlink_15: HC_commlink_1
	{
		displayName = "[HC] Commlink 15";
		
	};
	class HC_Commlink_16: HC_commlink_1
	{
		displayName = "[HC] Commlink 16";
		
	};
	class HC_Commlink_17: HC_commlink_1
	{
		displayName = "[HC] Commlink 17";
		
	};
	class HC_Commlink_18: HC_commlink_1
	{
		displayName = "[HC] Commlink 18";
		
	};
	class HC_Commlink_19: HC_commlink_1
	{
		displayName = "[HC] Commlink 19";
		
	};
	class HC_Commlink_20: HC_commlink_1
	{
		displayName = "[HC] Commlink 20";
		
	};
	class HC_Commlink_21: HC_commlink_1
	{
		displayName = "[HC] Commlink 21";
		
	};
	class HC_Commlink_22: HC_commlink_1
	{
		displayName = "[HC] Commlink 22";
		
	};
	class HC_Commlink_23: HC_commlink_1
	{
		displayName = "[HC] Commlink 23";
		
	};
	class HC_Commlink_24: HC_commlink_1
	{
		displayName = "[HC] Commlink 24";
		
	};
	class HC_Commlink_25: HC_commlink_1
	{
		displayName = "[HC] Commlink 25";
		
	};
	class HC_Commlink_26: HC_commlink_1
	{
		displayName = "[HC] Commlink 26";
		
	};
	class HC_Commlink_27: HC_commlink_1
	{
		displayName = "[HC] Commlink 27";
		
	};
	class HC_Commlink_28: HC_commlink_1
	{
		displayName = "[HC] Commlink 28";
		
	};
	class HC_Commlink_29: HC_commlink_1
	{
		displayName = "[HC] Commlink 29";
		
	};
	class HC_Commlink_30: HC_commlink_1
	{
		displayName = "[HC] Commlink 30";
		
	};
	class HC_Commlink_31: HC_commlink_1
	{
		displayName = "[HC] Commlink 31";
		
	};
	class HC_Commlink_32: HC_commlink_1
	{
		displayName = "[HC] Commlink 32";
		
	};
	class HC_Commlink_33: HC_commlink_1
	{
		displayName = "[HC] Commlink 33";
		
	};
	class HC_Commlink_34: HC_commlink_1
	{
		displayName = "[HC] Commlink 34";
		
	};
	class HC_Commlink_35: HC_commlink_1
	{
		displayName = "[HC] Commlink 35";
		
	};
	class HC_Commlink_36: HC_commlink_1
	{
		displayName = "[HC] Commlink 36";
		
	};
	class HC_Commlink_37: HC_commlink_1
	{
		displayName = "[HC] Commlink 37";
		
	};
	class HC_Commlink_38: HC_commlink_1
	{
		displayName = "[HC] Commlink 38";
		
	};
	class HC_Commlink_39: HC_commlink_1
	{
		displayName = "[HC] Commlink 39";
		
	};
	class HC_Commlink_40: HC_commlink_1
	{
		displayName = "[HC] Commlink 40";
		
	};
	class HC_Commlink_41: HC_commlink_1
	{
		displayName = "[HC] Commlink 41";
		
	};
	class HC_Commlink_42: HC_commlink_1
	{
		displayName = "[HC] Commlink 42";
		
	};
	class HC_Commlink_43: HC_commlink_1
	{
		displayName = "[HC] Commlink 43";
		
	};
	class HC_Commlink_44: HC_commlink_1
	{
		displayName = "[HC] Commlink 44";
		
	};
	class HC_Commlink_45: HC_commlink_1
	{
		displayName = "[HC] Commlink 45";
		
	};
	class HC_Commlink_46: HC_commlink_1
	{
		displayName = "[HC] Commlink 46";
		
	};
	class HC_Commlink_47: HC_commlink_1
	{
		displayName = "[HC] Commlink 47";
		
	};
	class HC_Commlink_48: HC_commlink_1
	{
		displayName = "[HC] Commlink 48";
		
	};
	class HC_Commlink_49: HC_commlink_1
	{
		displayName = "[HC] Commlink 49";
		
	};
	class HC_Commlink_50: HC_commlink_1
	{
		displayName = "[HC] Commlink 50";
		
	};
	class HC_Commlink_51: HC_commlink_1
	{
		displayName = "[HC] Commlink 51";
		
	};
	class HC_Commlink_52: HC_commlink_1
	{
		displayName = "[HC] Commlink 52";
		
	};
	class HC_Commlink_53: HC_commlink_1
	{
		displayName = "[HC] Commlink 53";
		
	};
	class HC_Commlink_54: HC_commlink_1
	{
		displayName = "[HC] Commlink 54";
		
	};
	class HC_Commlink_55: HC_commlink_1
	{
		displayName = "[HC] Commlink 55";
		
	};
	class HC_Commlink_56: HC_commlink_1
	{
		displayName = "[HC] Commlink 56";
		
	};
	class HC_Commlink_57: HC_commlink_1
	{
		displayName = "[HC] Commlink 57";
		
	};
	class HC_Commlink_58: HC_commlink_1
	{
		displayName = "[HC] Commlink 58";
		
	};
	class HC_Commlink_59: HC_commlink_1
	{
		displayName = "[HC] Commlink 59";
		
	};
	class HC_Commlink_60: HC_commlink_1
	{
		displayName = "[HC] Commlink 60";
		
	};
	class HC_Commlink_61: HC_commlink_1
	{
		displayName = "[HC] Commlink 61";
		
	};
	class HC_Commlink_62: HC_commlink_1
	{
		displayName = "[HC] Commlink 62";
		
	};
	class HC_Commlink_63: HC_commlink_1
	{
		displayName = "[HC] Commlink 63";
		
	};
	class HC_Commlink_64: HC_commlink_1
	{
		displayName = "[HC] Commlink 64";
		
	};
	class HC_Commlink_65: HC_commlink_1
	{
		displayName = "[HC] Commlink 65";
		
	};
	class HC_Commlink_66: HC_commlink_1
	{
		displayName = "[HC] Commlink 66";
		
	};
	class HC_Commlink_67: HC_commlink_1
	{
		displayName = "[HC] Commlink 67";
		
	};
	class HC_Commlink_68: HC_commlink_1
	{
		displayName = "[HC] Commlink 68";
		
	};
	class HC_Commlink_69: HC_commlink_1
	{
		displayName = "[HC] Commlink 69";
		
	};
	class HC_Commlink_70: HC_commlink_1
	{
		displayName = "[HC] Commlink 70";
		
	};
	class HC_Commlink_71: HC_commlink_1
	{
		displayName = "[HC] Commlink 71";
		
	};
	class HC_Commlink_72: HC_commlink_1
	{
		displayName = "[HC] Commlink 72";
		
	};
	class HC_Commlink_73: HC_commlink_1
	{
		displayName = "[HC] Commlink 73";
		
	};
	class HC_Commlink_74: HC_commlink_1
	{
		displayName = "[HC] Commlink 74";
		
	};
	class HC_Commlink_75: HC_commlink_1
	{
		displayName = "[HC] Commlink 75";
		
	};
	class HC_Commlink_76: HC_commlink_1
	{
		displayName = "[HC] Commlink 76";
		
	};
	class HC_Commlink_77: HC_commlink_1
	{
		displayName = "[HC] Commlink 77";
		
	};
	class HC_Commlink_78: HC_commlink_1
	{
		displayName = "[HC] Commlink 78";
		
	};
	class HC_Commlink_79: HC_commlink_1
	{
		displayName = "[HC] Commlink 79";
		
	};
	class HC_Commlink_80: HC_commlink_1
	{
		displayName = "[HC] Commlink 80";
		
	};
	class HC_Commlink_81: HC_commlink_1
	{
		displayName = "[HC] Commlink 81";
		
	};
	class HC_Commlink_82: HC_commlink_1
	{
		displayName = "[HC] Commlink 82";
		
	};
	class HC_Commlink_83: HC_commlink_1
	{
		displayName = "[HC] Commlink 83";
		
	};
	class HC_Commlink_84: HC_commlink_1
	{
		displayName = "[HC] Commlink 84";
		
	};
	class HC_Commlink_85: HC_commlink_1
	{
		displayName = "[HC] Commlink 85";
		
	};
	class HC_Commlink_86: HC_commlink_1
	{
		displayName = "[HC] Commlink 86";
		
	};
	class HC_Commlink_87: HC_commlink_1
	{
		displayName = "[HC] Commlink 87";
		
	};
	class HC_Commlink_88: HC_commlink_1
	{
		displayName = "[HC] Commlink 88";
		
	};
	class HC_Commlink_89: HC_commlink_1
	{
		displayName = "[HC] Commlink 89";
		
	};
	class HC_Commlink_90: HC_commlink_1
	{
		displayName = "[HC] Commlink 90";
		
	};
	class HC_Commlink_91: HC_commlink_1
	{
		displayName = "[HC] Commlink 91";
		
	};
	class HC_Commlink_92: HC_commlink_1
	{
		displayName = "[HC] Commlink 92";
		
	};
	class HC_Commlink_93: HC_commlink_1
	{
		displayName = "[HC] Commlink 93";
		
	};
	class HC_Commlink_94: HC_commlink_1
	{
		displayName = "[HC] Commlink 94";
		
	};
	class HC_Commlink_95: HC_commlink_1
	{
		displayName = "[HC] Commlink 95";
		
	};
	class HC_Commlink_96: HC_commlink_1
	{
		displayName = "[HC] Commlink 96";
		
	};
	class HC_Commlink_97: HC_commlink_1
	{
		displayName = "[HC] Commlink 97";
		
	};
	class HC_Commlink_98: HC_commlink_1
	{
		displayName = "[HC] Commlink 98";
		
	};
	class HC_Commlink_99: HC_commlink_1
	{
		displayName = "[HC] Commlink 99";
		
	};
	class HC_Commlink_100: HC_commlink_1
	{
		displayName = "[HC] Commlink 100";
		
	};
	class HC_Commlink_101: HC_commlink_1
	{
		displayName = "[HC] Commlink 101";
		
	};
	class HC_Commlink_102: HC_commlink_1
	{
		displayName = "[HC] Commlink 102";
		
	};
	class HC_Commlink_103: HC_commlink_1
	{
		displayName = "[HC] Commlink 103";
		
	};
	class HC_Commlink_104: HC_commlink_1
	{
		displayName = "[HC] Commlink 104";
		
	};
	class HC_Commlink_105: HC_commlink_1
	{
		displayName = "[HC] Commlink 105";
		
	};
	class HC_Commlink_106: HC_commlink_1
	{
		displayName = "[HC] Commlink 106";
		
	};
	class HC_Commlink_107: HC_commlink_1
	{
		displayName = "[HC] Commlink 107";
		
	};
	class HC_Commlink_108: HC_commlink_1
	{
		displayName = "[HC] Commlink 108";
		
	};
	class HC_Commlink_109: HC_commlink_1
	{
		displayName = "[HC] Commlink 109";
		
	};
	class HC_Commlink_110: HC_commlink_1
	{
		displayName = "[HC] Commlink 110";
		
	};
	class HC_Commlink_111: HC_commlink_1
	{
		displayName = "[HC] Commlink 111";
		
	};
	class HC_Commlink_112: HC_commlink_1
	{
		displayName = "[HC] Commlink 112";
		
	};
	class HC_Commlink_113: HC_commlink_1
	{
		displayName = "[HC] Commlink 113";
		
	};
	class HC_Commlink_114: HC_commlink_1
	{
		displayName = "[HC] Commlink 114";
		
	};
	class HC_Commlink_115: HC_commlink_1
	{
		displayName = "[HC] Commlink 115";
		
	};
	class HC_Commlink_116: HC_commlink_1
	{
		displayName = "[HC] Commlink 116";
		
	};
	class HC_Commlink_117: HC_commlink_1
	{
		displayName = "[HC] Commlink 117";
		
	};
	class HC_Commlink_118: HC_commlink_1
	{
		displayName = "[HC] Commlink 118";
		
	};
	class HC_Commlink_119: HC_commlink_1
	{
		displayName = "[HC] Commlink 119";
		
	};
	class HC_Commlink_120: HC_commlink_1
	{
		displayName = "[HC] Commlink 120";
		
	};
	class HC_Commlink_121: HC_commlink_1
	{
		displayName = "[HC] Commlink 121";
		
	};
	class HC_Commlink_122: HC_commlink_1
	{
		displayName = "[HC] Commlink 122";
		
	};
	class HC_Commlink_123: HC_commlink_1
	{
		displayName = "[HC] Commlink 123";
		
	};
	class HC_Commlink_124: HC_commlink_1
	{
		displayName = "[HC] Commlink 124";
		
	};
	class HC_Commlink_125: HC_commlink_1
	{
		displayName = "[HC] Commlink 125";
		
	};
	class HC_Commlink_126: HC_commlink_1
	{
		displayName = "[HC] Commlink 126";
		
	};
	class HC_Commlink_127: HC_commlink_1
	{
		displayName = "[HC] Commlink 127";
		
	};
	class HC_Commlink_128: HC_commlink_1
	{
		displayName = "[HC] Commlink 128";
		
	};
	class HC_Commlink_129: HC_commlink_1
	{
		displayName = "[HC] Commlink 129";
		
	};
	class HC_Commlink_130: HC_commlink_1
	{
		displayName = "[HC] Commlink 130";
		
	};
	class HC_Commlink_131: HC_commlink_1
	{
		displayName = "[HC] Commlink 131";
		
	};
	class HC_Commlink_132: HC_commlink_1
	{
		displayName = "[HC] Commlink 132";
		
	};
	class HC_Commlink_133: HC_commlink_1
	{
		displayName = "[HC] Commlink 133";
		
	};
	class HC_Commlink_134: HC_commlink_1
	{
		displayName = "[HC] Commlink 134";
		
	};
	class HC_Commlink_135: HC_commlink_1
	{
		displayName = "[HC] Commlink 135";
		
	};
	class HC_Commlink_136: HC_commlink_1
	{
		displayName = "[HC] Commlink 136";
		
	};
	class HC_Commlink_137: HC_commlink_1
	{
		displayName = "[HC] Commlink 137";
		
	};
	class HC_Commlink_138: HC_commlink_1
	{
		displayName = "[HC] Commlink 138";
		
	};
	class HC_Commlink_139: HC_commlink_1
	{
		displayName = "[HC] Commlink 139";
		
	};
	class HC_Commlink_140: HC_commlink_1
	{
		displayName = "[HC] Commlink 140";
		
	};
	class HC_Commlink_141: HC_commlink_1
	{
		displayName = "[HC] Commlink 141";
		
	};
	class HC_Commlink_142: HC_commlink_1
	{
		displayName = "[HC] Commlink 142";
		
	};
	class HC_Commlink_143: HC_commlink_1
	{
		displayName = "[HC] Commlink 143";
		
	};
	class HC_Commlink_144: HC_commlink_1
	{
		displayName = "[HC] Commlink 144";
		
	};
	class HC_Commlink_145: HC_commlink_1
	{
		displayName = "[HC] Commlink 145";
		
	};
	class HC_Commlink_146: HC_commlink_1
	{
		displayName = "[HC] Commlink 146";
		
	};
	class HC_Commlink_147: HC_commlink_1
	{
		displayName = "[HC] Commlink 147";
		
	};
	class HC_Commlink_148: HC_commlink_1
	{
		displayName = "[HC] Commlink 148";
		
	};
	class HC_Commlink_149: HC_commlink_1
	{
		displayName = "[HC] Commlink 149";
		
	};
	class HC_Commlink_150: HC_commlink_1
	{
		displayName = "[HC] Commlink 150";
		
	};
	class HC_Commlink_151: HC_commlink_1
	{
		displayName = "[HC] Commlink 151";
		
	};
	class HC_Commlink_152: HC_commlink_1
	{
		displayName = "[HC] Commlink 152";
		
	};
	class HC_Commlink_153: HC_commlink_1
	{
		displayName = "[HC] Commlink 153";
		
	};
	class HC_Commlink_154: HC_commlink_1
	{
		displayName = "[HC] Commlink 154";
		
	};
	class HC_Commlink_155: HC_commlink_1
	{
		displayName = "[HC] Commlink 155";
		
	};
	class HC_Commlink_156: HC_commlink_1
	{
		displayName = "[HC] Commlink 156";
		
	};
	class HC_Commlink_157: HC_commlink_1
	{
		displayName = "[HC] Commlink 157";
		
	};
	class HC_Commlink_158: HC_commlink_1
	{
		displayName = "[HC] Commlink 158";
		
	};
	class HC_Commlink_159: HC_commlink_1
	{
		displayName = "[HC] Commlink 159";
		
	};
	class HC_Commlink_160: HC_commlink_1
	{
		displayName = "[HC] Commlink 160";
		
	};
	class HC_Commlink_161: HC_commlink_1
	{
		displayName = "[HC] Commlink 161";
		
	};
	class HC_Commlink_162: HC_commlink_1
	{
		displayName = "[HC] Commlink 162";
		
	};
	class HC_Commlink_163: HC_commlink_1
	{
		displayName = "[HC] Commlink 163";
		
	};
	class HC_Commlink_164: HC_commlink_1
	{
		displayName = "[HC] Commlink 164";
		
	};
	class HC_Commlink_165: HC_commlink_1
	{
		displayName = "[HC] Commlink 165";
		
	};
	class HC_Commlink_166: HC_commlink_1
	{
		displayName = "[HC] Commlink 166";
		
	};
	class HC_Commlink_167: HC_commlink_1
	{
		displayName = "[HC] Commlink 167";
		
	};
	class HC_Commlink_168: HC_commlink_1
	{
		displayName = "[HC] Commlink 168";
		
	};
	class HC_Commlink_169: HC_commlink_1
	{
		displayName = "[HC] Commlink 169";
		
	};
	class HC_Commlink_170: HC_commlink_1
	{
		displayName = "[HC] Commlink 170";
		
	};
	class HC_Commlink_171: HC_commlink_1
	{
		displayName = "[HC] Commlink 171";
		
	};
	class HC_Commlink_172: HC_commlink_1
	{
		displayName = "[HC] Commlink 172";
		
	};
	class HC_Commlink_173: HC_commlink_1
	{
		displayName = "[HC] Commlink 173";
		
	};
	class HC_Commlink_174: HC_commlink_1
	{
		displayName = "[HC] Commlink 174";
		
	};
	class HC_Commlink_175: HC_commlink_1
	{
		displayName = "[HC] Commlink 175";
		
	};
	class HC_Commlink_176: HC_commlink_1
	{
		displayName = "[HC] Commlink 176";
		
	};
	class HC_Commlink_177: HC_commlink_1
	{
		displayName = "[HC] Commlink 177";
		
	};
	class HC_Commlink_178: HC_commlink_1
	{
		displayName = "[HC] Commlink 178";
		
	};
	class HC_Commlink_179: HC_commlink_1
	{
		displayName = "[HC] Commlink 179";
		
	};
	class HC_Commlink_180: HC_commlink_1
	{
		displayName = "[HC] Commlink 180";
		
	};
	class HC_Commlink_181: HC_commlink_1
	{
		displayName = "[HC] Commlink 181";
		
	};
	class HC_Commlink_182: HC_commlink_1
	{
		displayName = "[HC] Commlink 182";
		
	};
	class HC_Commlink_183: HC_commlink_1
	{
		displayName = "[HC] Commlink 183";
		
	};
	class HC_Commlink_184: HC_commlink_1
	{
		displayName = "[HC] Commlink 184";
		
	};
	class HC_Commlink_185: HC_commlink_1
	{
		displayName = "[HC] Commlink 185";
		
	};
	class HC_Commlink_186: HC_commlink_1
	{
		displayName = "[HC] Commlink 186";
		
	};
	class HC_Commlink_187: HC_commlink_1
	{
		displayName = "[HC] Commlink 187";
		
	};
	class HC_Commlink_188: HC_commlink_1
	{
		displayName = "[HC] Commlink 188";
		
	};
	class HC_Commlink_189: HC_commlink_1
	{
		displayName = "[HC] Commlink 189";
		
	};
	class HC_Commlink_190: HC_commlink_1
	{
		displayName = "[HC] Commlink 190";
		
	};
	class HC_Commlink_191: HC_commlink_1
	{
		displayName = "[HC] Commlink 191";
		
	};
	class HC_Commlink_192: HC_commlink_1
	{
		displayName = "[HC] Commlink 192";
		
	};
	class HC_Commlink_193: HC_commlink_1
	{
		displayName = "[HC] Commlink 193";
		
	};
	class HC_Commlink_194: HC_commlink_1
	{
		displayName = "[HC] Commlink 194";
		
	};
	class HC_Commlink_195: HC_commlink_1
	{
		displayName = "[HC] Commlink 195";
		
	};
	class HC_Commlink_196: HC_commlink_1
	{
		displayName = "[HC] Commlink 196";
		
	};
	class HC_Commlink_197: HC_commlink_1
	{
		displayName = "[HC] Commlink 197";
		
	};
	class HC_Commlink_198: HC_commlink_1
	{
		displayName = "[HC] Commlink 198";
		
	};
	class HC_Commlink_199: HC_commlink_1
	{
		displayName = "[HC] Commlink 199";
		
	};
	class HC_Commlink_200: HC_commlink_1
	{
		displayName = "[HC] Commlink 200";
		
	};
	class HC_Commlink_201: HC_commlink_1
	{
		displayName = "[HC] Commlink 201";
		
	};
	class HC_Commlink_202: HC_commlink_1
	{
		displayName = "[HC] Commlink 202";
		
	};
	class HC_Commlink_203: HC_commlink_1
	{
		displayName = "[HC] Commlink 203";
		
	};
	class HC_Commlink_204: HC_commlink_1
	{
		displayName = "[HC] Commlink 204";
		
	};
	class HC_Commlink_205: HC_commlink_1
	{
		displayName = "[HC] Commlink 205";
		
	};
	class HC_Commlink_206: HC_commlink_1
	{
		displayName = "[HC] Commlink 206";
		
	};
	class HC_Commlink_207: HC_commlink_1
	{
		displayName = "[HC] Commlink 207";
		
	};
	class HC_Commlink_208: HC_commlink_1
	{
		displayName = "[HC] Commlink 208";
		
	};
	class HC_Commlink_209: HC_commlink_1
	{
		displayName = "[HC] Commlink 209";
		
	};
	class HC_Commlink_210: HC_commlink_1
	{
		displayName = "[HC] Commlink 210";
		
	};
	class HC_Commlink_211: HC_commlink_1
	{
		displayName = "[HC] Commlink 211";
		
	};
	class HC_Commlink_212: HC_commlink_1
	{
		displayName = "[HC] Commlink 212";
		
	};
	class HC_Commlink_213: HC_commlink_1
	{
		displayName = "[HC] Commlink 213";
		
	};
	class HC_Commlink_214: HC_commlink_1
	{
		displayName = "[HC] Commlink 214";
		
	};
	class HC_Commlink_215: HC_commlink_1
	{
		displayName = "[HC] Commlink 215";
		
	};
	class HC_Commlink_216: HC_commlink_1
	{
		displayName = "[HC] Commlink 216";
		
	};
	class HC_Commlink_217: HC_commlink_1
	{
		displayName = "[HC] Commlink 217";
		
	};
	class HC_Commlink_218: HC_commlink_1
	{
		displayName = "[HC] Commlink 218";
		
	};
	class HC_Commlink_219: HC_commlink_1
	{
		displayName = "[HC] Commlink 219";
		
	};
	class HC_Commlink_220: HC_commlink_1
	{
		displayName = "[HC] Commlink 220";
		
	};
	class HC_Commlink_221: HC_commlink_1
	{
		displayName = "[HC] Commlink 221";
		
	};
	class HC_Commlink_222: HC_commlink_1
	{
		displayName = "[HC] Commlink 222";
		
	};
	class HC_Commlink_223: HC_commlink_1
	{
		displayName = "[HC] Commlink 223";
		
	};
	class HC_Commlink_224: HC_commlink_1
	{
		displayName = "[HC] Commlink 224";
		
	};
	class HC_Commlink_225: HC_commlink_1
	{
		displayName = "[HC] Commlink 225";
		
	};
	class HC_Commlink_226: HC_commlink_1
	{
		displayName = "[HC] Commlink 226";
		
	};
	class HC_Commlink_227: HC_commlink_1
	{
		displayName = "[HC] Commlink 227";
		
	};
	class HC_Commlink_228: HC_commlink_1
	{
		displayName = "[HC] Commlink 228";
		
	};
	class HC_Commlink_229: HC_commlink_1
	{
		displayName = "[HC] Commlink 229";
		
	};
	class HC_Commlink_230: HC_commlink_1
	{
		displayName = "[HC] Commlink 230";
		
	};
	class HC_Commlink_231: HC_commlink_1
	{
		displayName = "[HC] Commlink 231";
		
	};
	class HC_Commlink_232: HC_commlink_1
	{
		displayName = "[HC] Commlink 232";
		
	};
	class HC_Commlink_233: HC_commlink_1
	{
		displayName = "[HC] Commlink 233";
		
	};
	class HC_Commlink_234: HC_commlink_1
	{
		displayName = "[HC] Commlink 234";
		
	};
	class HC_Commlink_235: HC_commlink_1
	{
		displayName = "[HC] Commlink 235";
		
	};
	class HC_Commlink_236: HC_commlink_1
	{
		displayName = "[HC] Commlink 236";
		
	};
	class HC_Commlink_237: HC_commlink_1
	{
		displayName = "[HC] Commlink 237";
		
	};
	class HC_Commlink_238: HC_commlink_1
	{
		displayName = "[HC] Commlink 238";
		
	};
	class HC_Commlink_239: HC_commlink_1
	{
		displayName = "[HC] Commlink 239";
		
	};
	class HC_Commlink_240: HC_commlink_1
	{
		displayName = "[HC] Commlink 240";
		
	};
	class HC_Commlink_241: HC_commlink_1
	{
		displayName = "[HC] Commlink 241";
		
	};
	class HC_Commlink_242: HC_commlink_1
	{
		displayName = "[HC] Commlink 242";
		
	};
	class HC_Commlink_243: HC_commlink_1
	{
		displayName = "[HC] Commlink 243";
		
	};
	class HC_Commlink_244: HC_commlink_1
	{
		displayName = "[HC] Commlink 244";
		
	};
	class HC_Commlink_245: HC_commlink_1
	{
		displayName = "[HC] Commlink 245";
		
	};
	class HC_Commlink_246: HC_commlink_1
	{
		displayName = "[HC] Commlink 246";
		
	};
	class HC_Commlink_247: HC_commlink_1
	{
		displayName = "[HC] Commlink 247";
		
	};
	class HC_Commlink_248: HC_commlink_1
	{
		displayName = "[HC] Commlink 248";
		
	};
	class HC_Commlink_249: HC_commlink_1
	{
		displayName = "[HC] Commlink 249";
		
	};
	class HC_Commlink_250: HC_commlink_1
	{
		displayName = "[HC] Commlink 250";
		
	};
	class HC_Commlink_251: HC_commlink_1
	{
		displayName = "[HC] Commlink 251";
		
	};
	class HC_Commlink_252: HC_commlink_1
	{
		displayName = "[HC] Commlink 252";
		
	};
	class HC_Commlink_253: HC_commlink_1
	{
		displayName = "[HC] Commlink 253";
		
	};
	class HC_Commlink_254: HC_commlink_1
	{
		displayName = "[HC] Commlink 254";
		
	};
	class HC_Commlink_255: HC_commlink_1
	{
		displayName = "[HC] Commlink 255";
		
	};
	class HC_Commlink_256: HC_commlink_1
	{
		displayName = "[HC] Commlink 256";
		
	};
	class HC_Commlink_257: HC_commlink_1
	{
		displayName = "[HC] Commlink 257";
		
	};
	class HC_Commlink_258: HC_commlink_1
	{
		displayName = "[HC] Commlink 258";
		
	};
	class HC_Commlink_259: HC_commlink_1
	{
		displayName = "[HC] Commlink 259";
		
	};
	class HC_Commlink_260: HC_commlink_1
	{
		displayName = "[HC] Commlink 260";
		
	};
	class HC_Commlink_261: HC_commlink_1
	{
		displayName = "[HC] Commlink 261";
		
	};
	class HC_Commlink_262: HC_commlink_1
	{
		displayName = "[HC] Commlink 262";
		
	};
	class HC_Commlink_263: HC_commlink_1
	{
		displayName = "[HC] Commlink 263";
		
	};
	class HC_Commlink_264: HC_commlink_1
	{
		displayName = "[HC] Commlink 264";
		
	};
	class HC_Commlink_265: HC_commlink_1
	{
		displayName = "[HC] Commlink 265";
		
	};
	class HC_Commlink_266: HC_commlink_1
	{
		displayName = "[HC] Commlink 266";
		
	};
	class HC_Commlink_267: HC_commlink_1
	{
		displayName = "[HC] Commlink 267";
		
	};
	class HC_Commlink_268: HC_commlink_1
	{
		displayName = "[HC] Commlink 268";
		
	};
	class HC_Commlink_269: HC_commlink_1
	{
		displayName = "[HC] Commlink 269";
		
	};
	class HC_Commlink_270: HC_commlink_1
	{
		displayName = "[HC] Commlink 270";
		
	};
	class HC_Commlink_271: HC_commlink_1
	{
		displayName = "[HC] Commlink 271";
		
	};
	class HC_Commlink_272: HC_commlink_1
	{
		displayName = "[HC] Commlink 272";
		
	};
	class HC_Commlink_273: HC_commlink_1
	{
		displayName = "[HC] Commlink 273";
		
	};
	class HC_Commlink_274: HC_commlink_1
	{
		displayName = "[HC] Commlink 274";
		
	};
	class HC_Commlink_275: HC_commlink_1
	{
		displayName = "[HC] Commlink 275";
		
	};
	class HC_Commlink_276: HC_commlink_1
	{
		displayName = "[HC] Commlink 276";
		
	};
	class HC_Commlink_277: HC_commlink_1
	{
		displayName = "[HC] Commlink 277";
		
	};
	class HC_Commlink_278: HC_commlink_1
	{
		displayName = "[HC] Commlink 278";
		
	};
	class HC_Commlink_279: HC_commlink_1
	{
		displayName = "[HC] Commlink 279";
		
	};
	class HC_Commlink_280: HC_commlink_1
	{
		displayName = "[HC] Commlink 280";
		
	};
	class HC_Commlink_281: HC_commlink_1
	{
		displayName = "[HC] Commlink 281";
		
	};
	class HC_Commlink_282: HC_commlink_1
	{
		displayName = "[HC] Commlink 282";
		
	};
	class HC_Commlink_283: HC_commlink_1
	{
		displayName = "[HC] Commlink 283";
		
	};
	class HC_Commlink_284: HC_commlink_1
	{
		displayName = "[HC] Commlink 284";
		
	};
	class HC_Commlink_285: HC_commlink_1
	{
		displayName = "[HC] Commlink 285";
		
	};
	class HC_Commlink_286: HC_commlink_1
	{
		displayName = "[HC] Commlink 286";
		
	};
	class HC_Commlink_287: HC_commlink_1
	{
		displayName = "[HC] Commlink 287";
		
	};
	class HC_Commlink_288: HC_commlink_1
	{
		displayName = "[HC] Commlink 288";
		
	};
	class HC_Commlink_289: HC_commlink_1
	{
		displayName = "[HC] Commlink 289";
		
	};
	class HC_Commlink_290: HC_commlink_1
	{
		displayName = "[HC] Commlink 290";
		
	};
	class HC_Commlink_291: HC_commlink_1
	{
		displayName = "[HC] Commlink 291";
		
	};
	class HC_Commlink_292: HC_commlink_1
	{
		displayName = "[HC] Commlink 292";
		
	};
	class HC_Commlink_293: HC_commlink_1
	{
		displayName = "[HC] Commlink 293";
		
	};
	class HC_Commlink_294: HC_commlink_1
	{
		displayName = "[HC] Commlink 294";
		
	};
	class HC_Commlink_295: HC_commlink_1
	{
		displayName = "[HC] Commlink 295";
		
	};
	class HC_Commlink_296: HC_commlink_1
	{
		displayName = "[HC] Commlink 296";
		
	};
	class HC_Commlink_297: HC_commlink_1
	{
		displayName = "[HC] Commlink 297";
		
	};
	class HC_Commlink_298: HC_commlink_1
	{
		displayName = "[HC] Commlink 298";
		
	};
	class HC_Commlink_299: HC_commlink_1
	{
		displayName = "[HC] Commlink 299";
		
	};
	class HC_Commlink_300: HC_commlink_1
	{
		displayName = "[HC] Commlink 300";
		
	};
	
};