class CfgPatches
{
    class HC_Core
    {
        author= "HC Aux Team";
        requiredAddos[]=
        {
			"JMSLLTE_scum"
        };
        weapons[]=
        {
        };
        units[]=
        {
			"HC_Rebel_Backpack_Black"
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
	class HC_VIP
	{
		displayName = "VIPs";
	};
};

class cfgWeapons
{
	class HC_Commlink: ItemRadio {
		author = "Queen";
		displayName = "[HC] Commlink";
		//descriptionShort = CSTRING(ANPRC152_Desc);
		scope = 2;
		scopeCurator = 2;
		model = "";
		picture = "";
		tf_prototype = 1;
		tf_range = 5000;
		tf_dialog = "commlink_radio_dialog";
		tf_encryptionCode = "tf_east_radio_code";
		tf_dialogUpdate = "call TFAR_fnc_updateSWDialogToChannel;";
		tf_subtype = "digital";
		tf_parent = "TFAR_anprc152";
		tf_additional_channel = 1;
	};
};

class CfgVehicles
{
	//Backpacks
	class JMSLLTE_back_rebradio_v1_black;
	class Endor_Rebel_Radio;
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
	};
	//Uniforms
	
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
		class TransportMagazines
		{
			MACRO_MAG_x15(HC_Magazine_A280_Uni),
			MACRO_MAG_x15(HC_Magazine_A280_Uni),
			MACRO_MAG_x15(HC_Magazine_A280_Uni),
			MACRO_MAG_x15(HC_Magazine_A300_Uni),
			MACRO_MAG_x15(HC_Magazine_A300_Uni),
			MACRO_MAG_x15(HC_Magazine_A300_Uni)
		};
		class TransportWeapons
		{
			MACRO_MAG_x5(HC_a280),
			MACRO_MAG_x5(HC_a280c),
			MACRO_MAG_x5(HC_a280cr),
			MACRO_MAG_x5(HC_a280stock)
		};
		class TransportItems
		{
			MACRO_MAG_x10(HC_Commando_Helmet_Endor),
			MACRO_MAG_x10(HC_Commando_Helmet_Cloud),
			MACRO_MAG_x10(HC_Commando_Helmet_Black),
			MACRO_MAG_x10(HC_Commando_Helmet_Desert),
			MACRO_MAG_x5(HC_Backpack_LR_Green)
		};

	};
	
};



class ACE_Tags {
    class yourTagClass {
        displayName = "Horizon";  // Name of your tag being displayed in the interaction menu
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

