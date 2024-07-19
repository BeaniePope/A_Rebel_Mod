class CfgPatches
{
    class HC_Core
    {
        author= "HC Aux Team"
        requiredAddos[]=
        {
			"JMSLLTE_scum"
        };
        weapons[]=
        {
			"HC_Commando_Helmet_Endor",
			"HC_Commando_Helmet_Cloud",
			"HC_Commando_Helmet_Desert",
			"HC_Commando_Helmet_Black"
        };
        units[]=
        {

        };
    };
};
///idk why these hear
#include "uiDefines.hpp"
#include "data\ui\hclr.hpp"

class CfgFactionClasses
{
	class HC_Faction
	{
		displayName="Horizon Company";
	};
};
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
class CfgWeapons
{
	//Helmets
	class JMSLLTE_Commando_endor_helmet;
	class HC_Commando_Helmet_Endor: JMSLLTE_Commando_endor_helmet
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Helmet (Endor)";
		hiddenSelectionsTextures[]=
		{
			"HC_Core\data\helmets\HC_commando_helmet_Endor_co.paa"
		};
	};
	class HC_Commando_Helmet_Cloud: HC_Commando_Helmet_Endor
	{
		displayName = "[HC] Commando Helmet (Cloud)";
		hiddenSelectionsTextures[]=
		{
			"HC_Core\data\helmets\HC_commando_helmet_Cloud_co.paa"
		};
	};
	class HC_Commando_Helmet_Desert: HC_Commando_Helmet_Endor
	{
		displayName = "[HC] Commando Helmet (Green)";
		hiddenSelectionsTextures[]=
		{
			"HC_Core\data\helmets\HC_commando_helmet_Desert_co.paa"
		};
	};
	class HC_Commando_Helmet_Black: HC_Commando_Helmet_Endor
	{
		displayName = "[HC] Commando Helmet (Black)";
		hiddenSelectionsTextures[]=
		{
			"HC_Core\data\helmets\HC_commando_helmet_Black_co.paa"
		};
	};

	//Vests
	class HC_Armor_1
	{
		class ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=0;
					passThrough=0.40000001;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=0;
					passThrough=0.40000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=0;
					passThrough=0.40000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=0;
					passThrough=0.40000001;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=0;
					passThrough=0.2;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=0;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.40000001;
				};
			};
		};
	};

	class JMSLLTE_CommandoBelt_armor: HC_Armor_1 {}; //the horror of ace compats
	class JMSLLTE_ComStrap_armor: HC_Armor_1 {};
	class JMSLLTE_ComStrapBag_armor: HC_Armor_1 {};
	class JMSLLTE_ComBag_armor: HC_Armor_1 {};
	class JMSLLTE_HeavyBandBag_brown_armor: HC_Armor_1 {};
	class JMSLLTE_HeavyBandBag_black_armor: HC_Armor_1 {};
	class JMSLLTE_HeavyBand_black_armor: HC_Armor_1 {};
	class JMSLLTE_HeavyBand_brown_armor: HC_Armor_1 {};
	class JMSLLTE_HeavyBand2_black_armor: HC_Armor_1 {};
	class JMSLLTE_HeavyBand2_brown_armor: HC_Armor_1 {};
	class JMSLLTE_PathfinderBags_armor: HC_Armor_1 {};
	class JMSLLTE_PathfinderVest_armor: HC_Armor_1 {};
	class JMSLLTE_PathfinderBelt_armor: HC_Armor_1 {};
	class JMSLLTE_SnowCommandoBelt_armor: HC_Armor_1 {};
	class JMSLLTE_CommandosStrip_armor: HC_Armor_1 {};
	class JMSLLTE_CommandosStripL_armor: HC_Armor_1 {};
	class JMSLLTE_CommandosVest_armor: HC_Armor_1 {};
	class JMSLLTE_CommandosVest2_armor: HC_Armor_1 {};
	class JMSLLTE_CommandosVestL_armor: HC_Armor_1 {};
	class JMSLLTE_PilotBreather_xwing: HC_Armor_1 {};
	class JMSLLTE_NavytrooperStrip_armor: HC_Armor_1 {};
	class JMSLLTE_NavytrooperHolster_armor: HC_Armor_1 {};
	//Weapons
	class JMSLLTE_a280;
	class JMSLLTE_a280stock;
	class JMSLLTE_a280c;
	class JMSLLTE_a280cr;
	class JMSLLTE_a300;
	class JMSLLTE_a300c;
	class HC_a280: JMSLLTE_a280
	{
		author = "Queen";
		displayName = "[HC] A280 Blaster Rifle";
		magazines[]=
		{
			"HC_Magazine_A280_Uni"
		};
	};
	class HC_a280stock: JMSLLTE_a280stock
	{
		author = "Queen";
		displayName = "[HC] A280 Blaster Rifle w/ stock";
		magazines[]=
		{
			"HC_Magazine_A280_Uni"
		};
	};
	class HC_a280c: JMSLLTE_a280c
	{
		author = "Queen";
		displayName = "[HC] A280c Blaster Rifle";
		magazines[]=
		{
			"HC_Magazine_A280_Uni"
		};
	};
	class HC_a280cr: JMSLLTE_a280cr
	{
		author = "Queen";
		displayName = "[HC] A295 Blaster Rifle";
		magazines[]=
		{
			"HC_Magazine_A280_Uni"
		};
	}
	class HC_A300: JMSLLTE_a300
	{
		author = "Queen";
		displayName = "[HC] A300 Blaster Rifle";
		magazines[]=
		{
			"HC_Magazine_A300_Uni"
		};
	};
	class HC_A300c: JMSLLTE_a300c
	{
		author = "Queen";
		displayName = "[HC] A300 Blaster Carbine";
		magazines[]=
		{
			"HC_Magazine_A300_Uni"
		};
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
		displayName = "Ammobox Rebels [HC]";
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