class CfgPatches
{
    class HC_Equipment
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
			"HC_Rebel_Backpack_Wood",
			"HC_Rebel_Uniform_Suit",
			"HC_Unit_Rebel_Trooper_Base",
			"HC_Unit_Rebel_Trooper_Wood",
			"HC_Unit_Rebel_AntiTank_Wood",
			"HC_Unit_Rebel_Pathfinder_Base"
        };
    };
};

#include "includes.hpp"
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
	class ItemInfo;
	//Helmets
	class JMSLLTE_Commando_endor_helmet;
	class HC_Commando_Helmet_Endor: JMSLLTE_Commando_endor_helmet
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Helmet (Endor)";
		hiddenSelectionsTextures[]=
		{
			"HC_Equipment\data\helmets\HC_commando_helmet_Endor_co.paa"
		};
	};
	class HC_Commando_Helmet_Cloud: HC_Commando_Helmet_Endor
	{
		displayName = "[HC] Commando Helmet (Cloud)";
		hiddenSelectionsTextures[]=
		{
			"HC_Equipment\data\helmets\HC_commando_helmet_Cloud_co.paa"
		};
	};
	class HC_Commando_Helmet_Desert: HC_Commando_Helmet_Endor
	{
		displayName = "[HC] Commando Helmet (Green)";
		hiddenSelectionsTextures[]=
		{
			"HC_Equipment\data\helmets\HC_commando_helmet_Desert_co.paa"
		};
	};
	class HC_Commando_Helmet_Black: HC_Commando_Helmet_Endor
	{
		displayName = "[HC] Commando Helmet (Black)";
		hiddenSelectionsTextures[]=
		{
			"HC_Equipment\data\helmets\HC_commando_helmet_Black_co.paa"
		};
	};

	class HC_Commando_Helmet_Empty: HC_Commando_Helmet_Endor
	{
		displayName = "[HC] Commando Helmet (Invisible)";
		model = "";
	};


	//Vests
	//the horror of ace compats
	class HC_Commando_Belt_V: JMSLLTE_CommandoBelt_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Belt";
		class ItemInfo: ItemInfo
		{	
			containerClass = "Supply80";
		};
	};   
	class JMSLLTE_Commando_Strap_V: JMSLLTE_ComStrap_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Strap";
		class ItemInfo: ItemInfo
		{	
			containerClass = "Supply80";
		};
	};  
	class HC_Commando_StrapBag_V: JMSLLTE_ComStrapBag_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Strap w/ Bag";
		class ItemInfo: ItemInfo
		{	
			containerClass = "Supply80";
		};
	};  
	class HC_Commando_Bag_V: JMSLLTE_ComBag_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Bag";
		class ItemInfo: ItemInfo
		{	
			containerClass = "Supply80";
		};
	};  
	class HC_AmmoStrap_Bag_Brown_V: JMSLLTE_HeavyBandBag_brown_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Bag (Brown)";
		class ItemInfo: ItemInfo
		{	
			containerClass = "Supply80";
		};
	};  
	class HC_AmmoStrap_Bag_Black_V: JMSLLTE_HeavyBandBag_black_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Bag (Black)";
		class ItemInfo: ItemInfo
		{	
			containerClass = "Supply80";
		};
	};
	class HC_AmmoStrap_Black_V: JMSLLTE_HeavyBand_black_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Ammo Strap (Black)";
		class ItemInfo: ItemInfo
		{	
			containerClass = "Supply80";
		};
	};
	class HC_AmmoStrap_Brown_V: JMSLLTE_HeavyBand_brown_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Ammo Strap (Brown)";
		class ItemInfo: ItemInfo
		{	
			containerClass = "Supply80";
		};
	};
	class HC_AmmoStrap_Alt_Black_V: JMSLLTE_HeavyBand2_black_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Alt Ammo Strap (Black)";
		class ItemInfo: ItemInfo
		{	
			containerClass = "Supply80";
		};
	};
	class HC_AmmoStrap_Alt_Brown_V: JMSLLTE_HeavyBand2_brown_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Alt Ammo Strap (Brown)";
		class ItemInfo: ItemInfo
		{	
			containerClass = "Supply80";
		};
	};
	class HC_Pathfinder_Bag_V: JMSLLTE_PathfinderBags_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Pathfinder Bag";
		class ItemInfo: ItemInfo
		{	
			containerClass = "Supply80";
		};
	};
	class HC_Pathfinder_Strap_V: JMSLLTE_PathfinderVest_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Pathfinder Strap";
		class ItemInfo: ItemInfo
		{	
			containerClass = "Supply80";
		};
	};
	class HC_Pathfinder_Belt_V: JMSLLTE_PathfinderBelt_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Belt";
		class ItemInfo: ItemInfo
		{	
			containerClass = "Supply80";
		};
	};
	class HC_Commando_Belt_Snow_V: JMSLLTE_SnowCommandoBelt_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Belt (Snow)";
		class ItemInfo: ItemInfo
		{	
			containerClass = "Supply80";
		};
	};
	class HC_Commando_Strap_V: JMSLLTE_CommandosStrip_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Strap";
		class ItemInfo: ItemInfo
		{	
			containerClass = "Supply80";
		};
	};
	class HC_Commando_Strap_Light_V: JMSLLTE_CommandosStripL_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Strap (Light)";
		class ItemInfo: ItemInfo
		{	
			containerClass = "Supply80";
		};
	};
	class HC_Commando_Alt_V: JMSLLTE_CommandosVest2_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Alt Commando Vest";
		class ItemInfo: ItemInfo
		{	
			containerClass = "Supply80";
		};
	};
	class HC_Commando_Light_V: JMSLLTE_CommandosVestL_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Vest (Light)";
		class ItemInfo: ItemInfo
		{	
			containerClass = "Supply80";
		};
	};
	class HC_Pilot_XWing_V: JMSLLTE_PilotBreather_xwing
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] X-Wing Pilot Vest";
		class ItemInfo: ItemInfo
		{	
			containerClass = "Supply80";
		};
	};
	class HC_Navy_Strap_V: JMSLLTE_NavytrooperStrip_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Navy Trooper Strap";
		class ItemInfo: ItemInfo
		{	
			containerClass = "Supply80";
		};
	};
	class HC_Navy_Holster_V: JMSLLTE_NavytrooperHolster_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Navy Troooper Holster";
		class ItemInfo: ItemInfo
		{	
			containerClass = "Supply80";
		};
	};
	class HC_Commando_V: JMSLLTE_CommandosVest_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Vest";
		class ItemInfo: ItemInfo
		{	
			containerClass = "Supply80";
		};
	};
	

	//Uniforms
	class UniformItem;
	class JMSLLTE_ScumAlCommando_wood_F_CombatUniform;
	class HC_Rebel_Uniform_Suit_Wood: JMSLLTE_ScumAlCommando_wood_F_CombatUniform
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Rebel Commando Suit";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HC_Unit_Rebel_Trooper_Base";
			containerClass="Supply150";
			mass=100;
		};
	};

};
class CfgVehicles
{
	//Backpacks
	class JMSLLTE_back_rebpack_v1_black;
	class JMSLLTE_back_rebpack_v1_wood;
	//class HC_Rebel_Backpack_Black: JMSLLTE_back_rebpack_v1_black
	// {
	// 	author = "Queen";
	// 	scope = 2;
	// 	displayName = "[HC] Rebel Backpack (Black)";
	// 	hiddenSelectionsTextures[] = 
	// 	{
	// 		"\HC_Equipment\data\backpacks\HC_Rebel_Backpack_Black_co.paa"
	// 	};
	// 	hiddenSelectionsMaterials[] =
	// 	{
	// 		"\HC_Equipment\data\HC_Rebel_Backpack_Black.rvmat"
	// 	};
	// };

	class HC_Rebel_Backpack_Wood: JMSLLTE_back_rebpack_v1_wood
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Rebel Backpack (Wood)";
	};
	//Uniforms
	class JMSLLTE_ScumTroopHeavy_wood_F_CombatUniform; //Raincoats
	class JMSLLTE_ScumTroopHeavy_brown_F_CombatUniform;
	class JMSLLTE_ScumTroopHeavy_desert_F_CombatUniform;

	class JMSLLTE_ScumCommando_cloud_F_CombatUniform; //"Suit" light 
	class JMSLLTE_ScumCommando_woodD_F_CombatUniform;
	class JMSLLTE_ScumCommando_desertS_F_CombatUniform;
	class JMSLLTE_ScumCommando_green_F_CombatUniform;
	class JMSLLTE_ScumCommando_wood_F_CombatUniform;

	class JMSLLTE_ScumAlCommando_cloud_F_CombatUniform; //"Wear" Suit
	class JMSLLTE_ScumAlCommando_desert_F_CombatUniform;
	class JMSLLTE_ScumAlCommando_base_F_CombatUniform;
	class JMSLLTE_ScumAlCommando_wood_F_CombatUniform;




	//Units USE EdSubcat_Personnel_Story FOR CUSTOMS GEORGE <3
	class B_Soldier_base_F;
	class HC_Unit_Rebel_Trooper_Base: B_Soldier_base_F
	{
		author = "Queen";
		scope = 0;
		displayName = "[HC] Base Rebel Trooper (Dev)";
		uniformClass = "HC_Rebel_Uniform_Suit_Wood";
		backpack = "";
		faction = "HC_Faction";
		side = 0;
		editorSubcategory = "EdSubcat_Personnel";
		linkedItems[] = {};
	};

	class HC_Unit_Rebel_Trooper_Wood: HC_Unit_Rebel_Trooper_Base
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Rebel Trooper";
		uniformClass = "HC_Rebel_Uniform_Suit_Wood";
		backpack = "HC_Rebel_Backpack_Wood";
		editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
		linkedItems[] = 
		{
			"HC_Commando_Helmet_Endor",
			"HC_Commando_V",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"FirstAidKit",
			"HC_Commlink"
		};
		respawnLinkedItems[]=
		{
			"HC_Commando_Helmet_Endor",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"FirstAidKit",
			"HC_Commlink"
		};
		weapons[]= 
		{
			"HC_a280",
			"Throw",
			"Put"
		};
		respawnWeapons[]= 
		{
			"HC_a280",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			MACRO_MAG_x5(HC_Magazine_A280_Uni)
		};
		respawnMagazines[]=
		{
			MACRO_MAG_x5(HC_Magazine_A280_Uni)
		};
	};

	class HC_Unit_Rebel_AntiTank_Wood: HC_Unit_Rebel_Trooper_Base
	{
		scope = 2;
		displayName = "[HC] Rebel AT Trooper";
		uniformClass = "HC_Rebel_Uniform_Suit_Wood";
		backpack = "HC_Rebel_Backpack_Wood";
		editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
		linkedItems[] = 
		{
			"HC_Commando_Helmet_Endor",
			"HC_Commando_V",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"FirstAidKit",
			"HC_Commlink"
		};
		respawnLinkedItems[]=
		{
			"HC_Commando_Helmet_Endor",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HC_Commlink"
		};
		weapons[]= 
		{
			"HC_a280",
			"Throw",
			"Put"
		};
		respawnWeapons[]= 
		{
			"HC_a280",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			MACRO_MAG_x5(HC_Magazine_A280_Uni)
		};
		respawnMagazines[]=
		{
			MACRO_MAG_x5(HC_Magazine_A280_Uni)
		};
	};

	class HC_Unit_Rebel_Medic_Wood: HC_Unit_Rebel_Trooper_Base
	{
		scope = 2;
		displayName = "[HC] Rebel Medical Trooper";
		uniformClass = "HC_Rebel_Uniform_Suit_Wood";
		backpack = "HC_Medical_Backpack_Wood";
		linkedItems[] = 
		{
			"HC_Medical_Helmet_Endor",
			"HC_Commando_V",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			MACRO_MAG_x5(FirstAidKit),
			"MedicKit",
			"HC_Commlink"
		};
		respawnLinkedItems[] =
		{
			"HC_Medical_Helmet_Endor",
			"HC_Commando_V",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			MACRO_MAG_x5(FirstAidKit),
			"MedicKit",			
			"HC_Commlink"
		};
		weapons[] = 
		{
			"HC_a280c",
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"HC_a280c",
			"Throw",
			"Put"
		};
		magazines[] = 
		{
			MACRO_MAG_x5(HC_Magazine_A280_Uni)
		};
		respawnMagazines[] =
		{
			MACRO_MAG_x5(HC_Magazine_A280_Uni)
		};
	};

	class HC_Unit_Rebel_Pathfinder_Base: B_Soldier_base_F
	{
		author = "Queen";
		scope = 0;
		displayName = "[HC] Rebel Pathfinder (Dev)";
		uniformClass = "HC_Rebel_Uniform_Suit_Wood";
		backpack = "HC_Rebel_Backpack";
		editorSubcategory = "EdSubcat_Personnel";
		linkedItems[]=
		{
			"HC_Pathfinder_Helmet_Green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HC_Commlink"
		};
		respawnLinkedItems[]=
		{
			"HC_Pathfinder_Helmet_Green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"HC_Commlink"
		};
		weapons[] = 
		{
			"HC_a300",
			"Throw",
			"Put"
		};
		respawnWeapons[]= 
		{
			"HC_a300",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			MACRO_MAG_x5(HC_Magazine_A300_Uni)
		};
		respawnMagazines[]=
		{
			MACRO_MAG_x5(HC_Magazine_A300_Uni)
		};
	};

};

