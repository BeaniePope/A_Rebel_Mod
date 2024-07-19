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

class CfgVehicles
{
	//Backpacks
	// class JMSLLTE_back_rebpack_v1_black;
	// class HC_Rebel_Backpack_Black: JMSLLTE_back_rebpack_v1_black
	// {
	// 	author = "Queen";
	// 	scope = 2;
	// 	tf_range = 40000;
    // 	tf_encryptionCode = "tf_west_radio_code";
    // 	tf_dialog = "hc_lr_radio_dialog";
    // 	tf_subtype = "airborne";
    // 	tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
	// 	hiddenSelectionsTextures[] = 
	// 	{
	// 		"\HC_Core\data\backpacks\HC_Rebel_Backpack_Black_co.paa"
	// 	};
	// 	hiddenSelectionsMaterials[] =
	// 	{
	// 		"\HC_Core\data\HC_Rebel_Backpack_Black.rvmat"
	// 	};
	// };
	class JMSLLTE_back_rebradio_v1_black;
	class HC_Rebel_Backpack_Black: JMSLLTE_back_rebradio_v1_black
	{
		author = "Queen";
		scope = 2;
    	displayName = "[HC] LR Backpack";
		tf_range = 40000;
		tf_encryptionCode = "tf_east_radio_code";
		tf_dialog = "hc_lr_radio_dialog";
		tf_subtype = "digital_lr";
 		tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
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

		};
		class TransportWeapons
		{

		};
		class TransportItems
		{

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

