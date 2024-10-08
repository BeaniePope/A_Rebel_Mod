class CfgPatches
{
    class HC_Equipment
    {
        author= "HC Aux Team";
        requiredAddos[]=
        {
			"JMSLLTE_scum",
			"JMSLLTE_scum_m"
        };
        weapons[]=
        {
			"HC_Commando_Helmet_Endor",
			"HC_Commando_Helmet_Cloud",
			"HC_Commando_Helmet_Desert",
			"HC_Commando_Helmet_Black",

			"HC_Navy_Uniform_Green",
			"HC_Navy_Uniform_Black",
			"HC_Navy_Uniform_Brown",
			"HC_Navy_Uniform_Purple",
			"HC_Navy_Uniform_Zeus"

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
	class VestItem;
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
		displayName = "[HC] Commando Helmet (Desert)";
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
	class JMSLLTE_Commando_green_helmet;
	class HC_Commando_Helmet_Wood: JMSLLTE_Commando_green_helmet
	{
		displayName = "[HC] Commando Helmet (Wood)";
	};

	class HC_Commando_Helmet_Empty: HC_Commando_Helmet_Endor
	{
		displayName = "[HC] Commando Helmet (Invisible)";
		model = "";
	};


	//Vests
	//the horror of ace compats
	class JMSLLTE_CommandoBelt_armor;
	class JMSLLTE_ComStrap_armor;
	class JMSLLTE_ComStrapBag_armor;
	class JMSLLTE_ComBag_armor;
	class JMSLLTE_HeavyBandBag_brown_armor;
	class JMSLLTE_HeavyBandBag_black_armor;
	class JMSLLTE_HeavyBand_black_armor;
	class JMSLLTE_HeavyBand_brown_armor;
	class JMSLLTE_HeavyBand2_black_armor;
	class JMSLLTE_HeavyBand2_brown_armor;
	class JMSLLTE_PathfinderBags_armor;
	class JMSLLTE_PathfinderVest_armor;
	class JMSLLTE_PathfinderBelt_armor;
	class JMSLLTE_SnowCommandoBelt_armor;
	class JMSLLTE_CommandosStrip_armor;
	class JMSLLTE_CommandosStripL_armor;
	class JMSLLTE_CommandosVest2_armor;
	class JMSLLTE_CommandosVestL_armor;
	class JMSLLTE_PilotBreather_xwing;
	class JMSLLTE_NavytrooperStrip_armor;
	class JMSLLTE_NavytrooperHolster_armor;
	class JMSLLTE_CommandosVest_armor;
	class HC_Commando_Belt_V: JMSLLTE_CommandoBelt_armor 
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Belt";
		class iteminfo: VestItem
		{
			uniformModel = "\JMSLLTE_scum_m\vests\Commando_vest1.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};   
	class HC_Commando_Strap_V: JMSLLTE_ComStrap_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Strap";
		class iteminfo: VestItem
		{	
			uniformModel= "\JMSLLTE_scum_m\vests\TrooperCom_vest.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};  
	class HC_Commando_StrapBag_V: JMSLLTE_ComStrapBag_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Strap w/ Bag";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\TrooperCom_vestBag.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};  
	class HC_Commando_Bag_V: JMSLLTE_ComBag_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Bag";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\TrooperCom_Bag.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};  
	class HC_AmmoStrap_Bag_Brown_V: JMSLLTE_HeavyBandBag_brown_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Bag (Brown)";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\TrooperHeavy.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};  
	class HC_AmmoStrap_Bag_Black_V: JMSLLTE_HeavyBandBag_black_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Bag (Black)";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\TrooperHeavy.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HC_AmmoStrap_Black_V: JMSLLTE_HeavyBand_black_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Ammo Strap (Black)";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\TrooperHeavy_band.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HC_AmmoStrap_Brown_V: JMSLLTE_HeavyBand_brown_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Ammo Strap (Brown)";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\TrooperHeavy_band.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HC_AmmoStrap_Alt_Black_V: JMSLLTE_HeavyBand2_black_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Alt Ammo Strap (Black)";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\TrooperHeavy_band2.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HC_AmmoStrap_Alt_Brown_V: JMSLLTE_HeavyBand2_brown_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Alt Ammo Strap (Brown)";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\TrooperHeavy_band2.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HC_Pathfinder_Bag_V: JMSLLTE_PathfinderBags_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Pathfinder Bag";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\PathfinderBags.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HC_Pathfinder_Strap_V: JMSLLTE_PathfinderVest_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Pathfinder Strap";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\PathfinderGren.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HC_Pathfinder_Belt_V: JMSLLTE_PathfinderBelt_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Belt";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\PathfinderVest.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HC_Commando_Belt_Snow_V: JMSLLTE_SnowCommandoBelt_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Belt (Snow)";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\Snow_vest1.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HC_Commando_Strap_V: JMSLLTE_CommandosStrip_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Strap";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\Alcommandos_strip.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	}
	class HC_Commando_Strap_Light_V: JMSLLTE_CommandosStripL_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Strap (Light)";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\Alcommandos_strip.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HC_Commando_Alt_V: JMSLLTE_CommandosVest2_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Alt Commando Vest";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\Alcommandos_vest2.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HC_Commando_Light_V: JMSLLTE_CommandosVestL_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Vest (Light)";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\Alcommandos_vestL.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HC_Pilot_XWing_V: JMSLLTE_PilotBreather_xwing
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] X-Wing Pilot Vest";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\Pilot_breather.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HC_Navy_Strap_V: JMSLLTE_NavytrooperStrip_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Navy Trooper Strap";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\Navytrooper_vest.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HC_Navy_Holster_V: JMSLLTE_NavytrooperHolster_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Navy Troooper Holster";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\Navytrooper_holster.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HC_Commando_V: JMSLLTE_CommandosVest_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Vest";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\Alcommandos_vest.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	
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

	class JMSLLTE_ScumNavy_blue_F_CombatUniform; //navy suit
	//Uniforms
	class UniformItem;
	//Commando Suit
	class HC_Rebel_Uniform_Suit_Base: JMSLLTE_ScumCommando_wood_F_CombatUniform
	{
		author = "Greg";
		scope = 2;
		displayName = "[HC] Rebel Commando Suit";
		class ItemInfo: UniformItem
		{
			uniformClass="HC_Unit_Rebel_Trooper_Base";
			containerClass="Supply150";
			mass=100;
		};
	};

	class HC_Rebel_Uniform_Suit_Brown: HC_Rebel_Uniform_Suit_Base
	{
		author = "Greg";
		scope = 2;
		displayName = "[HC] Rebel Commando Suit (Brown)";
		class ItemInfo: UniformItem
		{
			uniformClass="HC_Unit_Rebel_Trooper_Brown";
			containerClass="Supply150";
			mass=100;
		};
	};
	class HC_Rebel_Uniform_Suit_Grey: HC_Rebel_Uniform_Suit_Brown
	{
		author = "Greg";
		scope = 2;
		displayName = "[HC] Rebel Commando Suit (Grey)";
		class ItemInfo: UniformItem
		{
			uniformClass="HC_Unit_Rebel_Trooper_Grey";
			containerClass="Supply150";
			mass=100;
		};
	};
	class HC_Rebel_Uniform_Suit_Green: HC_Rebel_Uniform_Suit_Brown
	{
		author = "Greg";
		scope = 2;
		displayName = "[HC] Rebel Commando Suit (Green)";
		class ItemInfo: UniformItem
		{
			uniformClass="HC_Unit_Rebel_Trooper_Green";
			containerClass="Supply150";
			mass=100;
		};
	};
	class HC_Rebel_Uniform_Suit_Purple: HC_Rebel_Uniform_Suit_Brown
	{
		author = "Greg";
		scope = 2;
		displayName = "[HC] Rebel Commando Suit (Purple)";
		class ItemInfo: UniformItem
		{
			uniformClass="HC_Unit_Rebel_Trooper_Purple";
			containerClass="Supply150";
			mass=100;
		};
	};

	//commando WEAR
	class HC_Rebel_Uniform_C_Wear: JMSLLTE_ScumAlCommando_wood_F_CombatUniform
	{
		author = "Greg";
		scope = 2;
		displayName = "[HC] Rebel Commando Wear";
		class ItemInfo: UniformItem
		{
			uniformClass="HC_Rebel_Uniform_C_Wear_U";
			containerClass="Supply150";
			mass=100;
		};
	};

	///navy uniforms
	class HC_Navy_Uniform_Green: JMSLLTE_ScumNavy_blue_F_CombatUniform
	{
		author = "Greg";
		scope = 2;
		displayName = "[HC] Rebel Navy Trooper Wear (Green)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HC_Unit_Navy_green";
			Armor=1;
			modelSides[]={6};
			containerClass="Supply80";
			mass=40;
		};
	};
	class HC_Navy_Uniform_Black: JMSLLTE_ScumNavy_blue_F_CombatUniform
	{
		author = "Greg";
		scope = 2;
		displayName = "[HC] Rebel Navy Trooper Wear (Black)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HC_Unit_Navy_Black";
			Armor=1;
			modelSides[]={6};
			containerClass="Supply80";
			mass=40;
		};
	};
	class HC_Navy_Uniform_Brown: JMSLLTE_ScumNavy_blue_F_CombatUniform
	{
		author = "Greg";
		scope = 2;
		displayName = "[HC] Rebel Navy Trooper Wear (Brown)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HC_Unit_Navy_Brown";
			Armor=1;
			modelSides[]={6};
			containerClass="Supply80";
			mass=40;
		};
	};
	class HC_Navy_Uniform_Purple: JMSLLTE_ScumNavy_blue_F_CombatUniform
	{
		author = "Greg";
		scope = 2;
		displayName = "[HC] Rebel Navy Trooper Wear (Purple)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HC_Unit_Navy_Purple";
			Armor=1;
			modelSides[]={6};
			containerClass="Supply80";
			mass=40;
		};
	};
	class HC_Navy_Uniform_Zeus: JMSLLTE_ScumNavy_blue_F_CombatUniform
	{
		author = "Greg";
		scope = 2;
		displayName = "[HC] Rebel Navy Trooper Wear (Hawaiian)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HC_Unit_Navy_Zues";
			Armor=1;
			modelSides[]={6};
			containerClass="Supply80";
			mass=40;
		};
	};


};
class CfgVehicles
{
	//Backpacks
	class JMSLLTE_back_rebpack_v1_black;
	class JMSLLTE_back_rebpack_v1_wood;
	class Endor_Rebel_bag;
	class Black_WM_Rebel_bag;

	class HC_Rebel_Backpack_Wood: Endor_Rebel_bag
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Rebel Backpack (Wood)";
		maximumLoad = 280;
	};
	class HC_Rebel_Backpack_Black: Black_WM_Rebel_bag
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Rebel Backpack (Black)";
		maximumLoad = 280;
	};
	//vanilla packs being the same.
	class B_AssaultPack_cbr
	{
		maximumLoad = 280
	};
	class B_AssaultPack_rgr
	{
		maximumLoad = 280
	};
	class B_AssaultPack_khk
	{
		maximumLoad = 280
	};
	class JLTS_Clone_belt_bag
	{
		maximumLoad = 280
	};
	class B_FieldPack_cbr
	{
		maximumLoad = 280
	};
	class B_FieldPack_green_F
	{
		maximumLoad = 280
	};
	class B_FieldPack_khk
	{
		maximumLoad = 280
	};
	class B_FieldPack_oli
	{
		maximumLoad = 280
	};
	class B_Messenger_Black_F
	{
		maximumLoad = 280
	};
	class B_Messenger_Coyote_F
	{
		maximumLoad = 280
	};
	class B_Messenger_Gray_F
	{
		maximumLoad = 280
	};
	class B_Messenger_Olive_F
	{
		maximumLoad = 280
	};
	//Uniforms
	//Units USE EdSubcat_Personnel_Story FOR CUSTOMS GEORGE <3
	class JMSLLTE_ScumCommando_wood_F;
	class JMSLLTE_ScumAlCommando_wood_F;

	class HC_Unit_Rebel_Trooper_Base: JMSLLTE_ScumCommando_wood_F
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
	class HC_Unit_Rebel_Trooper_Brown: HC_Unit_Rebel_Trooper_Base
	{
		author="Possum";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"\HC_Equipment\data\uniforms\Commando_wear\CommandoBrown.paa"
		};
	};
	class HC_Unit_Rebel_Trooper_Grey: HC_Unit_Rebel_Trooper_Base
	{
		author="Possum";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"\HC_Equipment\data\uniforms\Commando_wear\CommandoGray.paa"
		};
	};
	class HC_Unit_Rebel_Trooper_Green: HC_Unit_Rebel_Trooper_Base
	{
		author="Possum";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"\HC_Equipment\data\uniforms\Commando_wear\CommandoGreen.paa"
		};
	};
	class HC_Unit_Rebel_Trooper_Purple: HC_Unit_Rebel_Trooper_Base
	{
		author="Possum";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"\HC_Equipment\data\uniforms\Commando_wear\CommandoPurple.paa"
		};
	};


	class JMSLLTE_ScumPathfinder_blue_F;
	class HC_Unit_Rebel_Pathfinder_Base: JMSLLTE_ScumPathfinder_blue_F
	{
		author = "Queen";
		scope = 0;
		displayName = "[HC] Rebel Pathfinder ()";
		uniformClass = "HC_Rebel_Uniform_Suit_Wood";
		backpack = "HC_Rebel_Backpack";
		editorSubcategory = "EdSubcat_Personnel";
	};
	class HC_Rebel_Uniform_C_Wear_U: JMSLLTE_ScumAlCommando_wood_F
	{

	};


	class JMSLLTE_ScumNavy_blue_F; 	//JMSLLTE_ScumNavy_blue_F_CombatUniform
	class HC_Unit_Navy_green: JMSLLTE_ScumNavy_blue_F
	{
		author="Possum";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"\HC_Equipment\data\uniforms\Trooper_Navy\NavyGreen.paa"
		};
	};
	class HC_Unit_Navy_Black: JMSLLTE_ScumNavy_blue_F
	{
		author="Possum";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"\HC_Equipment\data\uniforms\Trooper_Navy\NavyBlack.paa"
		};
	};
	class HC_Unit_Navy_Brown: JMSLLTE_ScumNavy_blue_F
	{
		author="Possum";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"\HC_Equipment\data\uniforms\Trooper_Navy\NavyBrown.paa"
		};
	};
	class HC_Unit_Navy_Purple: JMSLLTE_ScumNavy_blue_F
	{
		author="Possum";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"\HC_Equipment\data\uniforms\Trooper_Navy\NavyPurple.paa"
		};
	};
	class HC_Unit_Navy_Zues: JMSLLTE_ScumNavy_blue_F
	{
		author="Possum";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"\HC_Equipment\data\uniforms\Trooper_Navy\Navy_Hawaiian.paa"
		};
	};
};

