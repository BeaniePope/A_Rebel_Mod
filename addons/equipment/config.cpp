class CfgPatches
{
    class HCA_Equipment
    {
        author= "HCA Aux Team";
        requiredAddos[]=
        {
			"JMSLLTE_scum",
			"JMSLLTE_scum_m"
        };
        weapons[]=
        {
			"HCA_Commando_Helmet_Endor",
			"HCA_Commando_Helmet_Cloud",
			"HCA_Commando_Helmet_Desert",
			"HCA_Commando_Helmet_Black",

			"HCA_Navy_Uniform_Green",
			"HCA_Navy_Uniform_Black",
			"HCA_Navy_Uniform_Brown",
			"HCA_Navy_Uniform_Purple",
			"HCA_Navy_Uniform_Zeus"

        };
        units[]=
        {
			"HCA_Rebel_Backpack_Wood",
			"HCA_Rebel_Uniform_Suit",
			"HCA_Unit_Rebel_Trooper_Base",
			"HCA_Unit_Rebel_Trooper_Wood",
			"HCA_Unit_Rebel_AntiTank_Wood",
			"HCA_Unit_Rebel_Pathfinder_Base"
        };
    };
};

#include "includes.hpp"
class CfgFactionClasses
{
	class HCA_Faction
	{
		displayName="Horizon Company";
	};
};
class CfgEditorCategories
{
	class HCA_Props
	{
		displayName="Horizon Company. Supplies";
	};
};
class CfgEditorSubcategories
{
	class HCA_Resupply
	{
		displayName="Resupply";
		priority=1;
	};
	class HCA_VIP
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
	class HCA_Commando_Helmet_Endor: JMSLLTE_Commando_endor_helmet
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Commando Helmet (Endor)";
		hiddenSelectionsTextures[]=
		{
			"HCA_Equipment\data\helmets\HCA_commando_helmet_Endor_co.paa"
		};
	};
	class HCA_Commando_Helmet_Cloud: HCA_Commando_Helmet_Endor
	{
		displayName = "[HCA] Commando Helmet (Cloud)";
		hiddenSelectionsTextures[]=
		{
			"HCA_Equipment\data\helmets\HCA_commando_helmet_Cloud_co.paa"
		};
	};
	class HCA_Commando_Helmet_Desert: HCA_Commando_Helmet_Endor
	{
		displayName = "[HCA] Commando Helmet (Desert)";
		hiddenSelectionsTextures[]=
		{
			"HCA_Equipment\data\helmets\HCA_commando_helmet_Desert_co.paa"
		};
	};
	class HCA_Commando_Helmet_Black: HCA_Commando_Helmet_Endor
	{
		displayName = "[HCA] Commando Helmet (Black)";
		hiddenSelectionsTextures[]=
		{
			"HCA_Equipment\data\helmets\HCA_commando_helmet_Black_co.paa"
		};
	};
	class JMSLLTE_Commando_green_helmet;
	class HCA_Commando_Helmet_Wood: JMSLLTE_Commando_green_helmet
	{
		displayName = "[HCA] Commando Helmet (Wood)";
	};

	class HCA_Commando_Helmet_Empty: HCA_Commando_Helmet_Endor
	{
		displayName = "[HCA] Commando Helmet (Invisible)";
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
	class HCA_Commando_Belt_V: JMSLLTE_CommandoBelt_armor 
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Commando Belt";
		class iteminfo: VestItem
		{
			uniformModel = "\JMSLLTE_scum_m\vests\Commando_vest1.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};   
	class HCA_Commando_Strap_V: JMSLLTE_ComStrap_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Commando Strap";
		class iteminfo: VestItem
		{	
			uniformModel= "\JMSLLTE_scum_m\vests\TrooperCom_vest.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};  
	class HCA_Commando_StrapBag_V: JMSLLTE_ComStrapBag_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Commando Strap w/ Bag";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\TrooperCom_vestBag.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};  
	class HCA_Commando_Bag_V: JMSLLTE_ComBag_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Commando Bag";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\TrooperCom_Bag.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};  
	class HCA_AmmoStrap_Bag_Brown_V: JMSLLTE_HeavyBandBag_brown_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Commando Bag (Brown)";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\TrooperHeavy.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};  
	class HCA_AmmoStrap_Bag_Black_V: JMSLLTE_HeavyBandBag_black_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Commando Bag (Black)";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\TrooperHeavy.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HCA_AmmoStrap_Black_V: JMSLLTE_HeavyBand_black_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Ammo Strap (Black)";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\TrooperHeavy_band.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HCA_AmmoStrap_Brown_V: JMSLLTE_HeavyBand_brown_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Ammo Strap (Brown)";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\TrooperHeavy_band.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HCA_AmmoStrap_Alt_Black_V: JMSLLTE_HeavyBand2_black_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Alt Ammo Strap (Black)";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\TrooperHeavy_band2.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HCA_AmmoStrap_Alt_Brown_V: JMSLLTE_HeavyBand2_brown_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Alt Ammo Strap (Brown)";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\TrooperHeavy_band2.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HCA_Pathfinder_Bag_V: JMSLLTE_PathfinderBags_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Pathfinder Bag";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\PathfinderBags.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HCA_Pathfinder_Strap_V: JMSLLTE_PathfinderVest_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Pathfinder Strap";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\PathfinderGren.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HCA_Pathfinder_Belt_V: JMSLLTE_PathfinderBelt_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Commando Belt";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\PathfinderVest.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HCA_Commando_Belt_Snow_V: JMSLLTE_SnowCommandoBelt_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Commando Belt (Snow)";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\Snow_vest1.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HCA_Commando_Strap_Light_V: JMSLLTE_CommandosStripL_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Commando Strap (Light)";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\Alcommandos_strip.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HCA_Commando_Alt_V: JMSLLTE_CommandosVest2_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Alt Commando Vest";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\Alcommandos_vest2.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HCA_Commando_Light_V: JMSLLTE_CommandosVestL_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Commando Vest (Light)";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\Alcommandos_vestL.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HCA_Pilot_XWing_V: JMSLLTE_PilotBreather_xwing
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] X-Wing Pilot Vest";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\Pilot_breather.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HCA_Navy_Strap_V: JMSLLTE_NavytrooperStrip_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Navy Trooper Strap";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\Navytrooper_vest.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HCA_Navy_Holster_V: JMSLLTE_NavytrooperHolster_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Navy Troooper Holster";
		class iteminfo: VestItem
		{	
			uniformModel="\JMSLLTE_scum_m\vests\Navytrooper_holster.p3d";
			containerClass = "Supply120";
			mass = 15;
		};
	};
	class HCA_Commando_V: JMSLLTE_CommandosVest_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Commando Vest";
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
	class HCA_Rebel_Uniform_Suit_Base: JMSLLTE_ScumCommando_wood_F_CombatUniform
	{
		author = "Greg";
		scope = 2;
		displayName = "[HCA] Rebel Commando Suit";
		class ItemInfo: UniformItem
		{
			uniformClass="HCA_Unit_Rebel_Trooper_Base";
			containerClass="Supply150";
			mass=100;
		};
	};

	class HCA_Rebel_Uniform_Suit_Brown: HCA_Rebel_Uniform_Suit_Base
	{
		author = "Greg";
		scope = 2;
		displayName = "[HCA] Rebel Commando Suit (Brown)";
		class ItemInfo: UniformItem
		{
			uniformClass="HCA_Unit_Rebel_Trooper_Brown";
			containerClass="Supply150";
			mass=100;
		};
	};
	class HCA_Rebel_Uniform_Suit_Grey: HCA_Rebel_Uniform_Suit_Brown
	{
		author = "Greg";
		scope = 2;
		displayName = "[HCA] Rebel Commando Suit (Grey)";
		class ItemInfo: UniformItem
		{
			uniformClass="HCA_Unit_Rebel_Trooper_Grey";
			containerClass="Supply150";
			mass=100;
		};
	};
	class HCA_Rebel_Uniform_Suit_Green: HCA_Rebel_Uniform_Suit_Brown
	{
		author = "Greg";
		scope = 2;
		displayName = "[HCA] Rebel Commando Suit (Green)";
		class ItemInfo: UniformItem
		{
			uniformClass="HCA_Unit_Rebel_Trooper_Green";
			containerClass="Supply150";
			mass=100;
		};
	};
	class HCA_Rebel_Uniform_Suit_Purple: HCA_Rebel_Uniform_Suit_Brown
	{
		author = "Greg";
		scope = 2;
		displayName = "[HCA] Rebel Commando Suit (Purple)";
		class ItemInfo: UniformItem
		{
			uniformClass="HCA_Unit_Rebel_Trooper_Purple";
			containerClass="Supply150";
			mass=100;
		};
	};

	//commando WEAR
	class HCA_Rebel_Uniform_C_Wear: JMSLLTE_ScumAlCommando_wood_F_CombatUniform
	{
		author = "Greg";
		scope = 2;
		displayName = "[HCA] Rebel Commando Wear";
		class ItemInfo: UniformItem
		{
			uniformClass="HCA_Rebel_Uniform_C_Wear_U";
			containerClass="Supply150";
			mass=100;
		};
	};

	///navy uniforms
	class HCA_Navy_Uniform_Green: JMSLLTE_ScumNavy_blue_F_CombatUniform
	{
		author = "Greg";
		scope = 2;
		displayName = "[HCA] Rebel Navy Trooper Wear (Green)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HCA_Unit_Navy_green";
			Armor=1;
			modelSides[]={6};
			containerClass="Supply80";
			mass=40;
		};
	};
	class HCA_Navy_Uniform_Black: JMSLLTE_ScumNavy_blue_F_CombatUniform
	{
		author = "Greg";
		scope = 2;
		displayName = "[HCA] Rebel Navy Trooper Wear (Black)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HCA_Unit_Navy_Black";
			Armor=1;
			modelSides[]={6};
			containerClass="Supply80";
			mass=40;
		};
	};
	class HCA_Navy_Uniform_Brown: JMSLLTE_ScumNavy_blue_F_CombatUniform
	{
		author = "Greg";
		scope = 2;
		displayName = "[HCA] Rebel Navy Trooper Wear (Brown)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HCA_Unit_Navy_Brown";
			Armor=1;
			modelSides[]={6};
			containerClass="Supply80";
			mass=40;
		};
	};
	class HCA_Navy_Uniform_Purple: JMSLLTE_ScumNavy_blue_F_CombatUniform
	{
		author = "Greg";
		scope = 2;
		displayName = "[HCA] Rebel Navy Trooper Wear (Purple)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HCA_Unit_Navy_Purple";
			Armor=1;
			modelSides[]={6};
			containerClass="Supply80";
			mass=40;
		};
	};
	class HCA_Navy_Uniform_Zeus: JMSLLTE_ScumNavy_blue_F_CombatUniform
	{
		author = "Greg";
		scope = 2;
		displayName = "[HCA] Rebel Navy Trooper Wear (Hawaiian)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HCA_Unit_Navy_Zues";
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

	class HCA_Rebel_Backpack_Wood: Endor_Rebel_bag
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Rebel Backpack (Wood)";
		maximumLoad = 280;
	};
	class HCA_Rebel_Backpack_Black: Black_WM_Rebel_bag
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Rebel Backpack (Black)";
		maximumLoad = 280;
	};
	//vanilla packs being the same.
	class B_AssaultPack_cbr
	{
		maximumLoad = 280;
	};
	class B_AssaultPack_rgr
	{
		maximumLoad = 280;
	};
	class B_AssaultPack_khk
	{
		maximumLoad = 280;
	};
	class JLTS_Clone_belt_bag
	{
		maximumLoad = 280;
	};
	class B_FieldPack_cbr
	{
		maximumLoad = 280;
	};
	class B_FieldPack_green_F
	{
		maximumLoad = 280;
	};
	class B_FieldPack_khk
	{
		maximumLoad = 280;
	};
	class B_FieldPack_oli
	{
		maximumLoad = 280;
	};
	class B_Messenger_Black_F
	{
		maximumLoad = 280;
	};
	class B_Messenger_Coyote_F
	{
		maximumLoad = 280;
	};
	class B_Messenger_Gray_F
	{
		maximumLoad = 280;
	};
	class B_Messenger_Olive_F
	{
		maximumLoad = 280;
	};
	//Uniforms
	//Units USE EdSubcat_Personnel_Story FOR CUSTOMS GEORGE <3
	class JMSLLTE_ScumCommando_wood_F;
	class JMSLLTE_ScumAlCommando_wood_F;

	class HCA_Unit_Rebel_Trooper_Base: JMSLLTE_ScumCommando_wood_F
	{
		author = "Queen";
		scope = 2;
		displayName = "[HCA] Rebel Trooper";
		uniformClass = "HCA_Rebel_Uniform_Suit_Wood";
		backpack = "HCA_Rebel_Backpack_Wood";
		editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
		linkedItems[] = 
		{
			"HCA_Commando_Helmet_Endor",
			"HCA_Commando_V",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"FirstAidKit",
			"HCA_Commlink"
		};
		respawnLinkedItems[]=
		{
			"HCA_Commando_Helmet_Endor",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"FirstAidKit",
			"HCA_Commlink"
		};
		weapons[]= 
		{
			"HCA_a280",
			"Throw",
			"Put"
		};
		respawnWeapons[]= 
		{
			"HCA_a280",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			MACRO_MAG_x5(HCA_Magazine_A280_Uni)
		};
		respawnMagazines[]=
		{
			MACRO_MAG_x5(HCA_Magazine_A280_Uni)
		};
	};
	class HCA_Unit_Rebel_Trooper_Brown: HCA_Unit_Rebel_Trooper_Base
	{
		author="Possum";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"\HCA_Equipment\data\uniforms\Commando_wear\CommandoBrown.paa"
		};
	};
	class HCA_Unit_Rebel_Trooper_Grey: HCA_Unit_Rebel_Trooper_Base
	{
		author="Possum";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"\HCA_Equipment\data\uniforms\Commando_wear\CommandoGray.paa"
		};
	};
	class HCA_Unit_Rebel_Trooper_Green: HCA_Unit_Rebel_Trooper_Base
	{
		author="Possum";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"\HCA_Equipment\data\uniforms\Commando_wear\CommandoGreen.paa"
		};
	};
	class HCA_Unit_Rebel_Trooper_Purple: HCA_Unit_Rebel_Trooper_Base
	{
		author="Possum";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"\HCA_Equipment\data\uniforms\Commando_wear\CommandoPurple.paa"
		};
	};


	class JMSLLTE_ScumPathfinder_blue_F;
	class HCA_Unit_Rebel_Pathfinder_Base: JMSLLTE_ScumPathfinder_blue_F
	{
		author = "Queen";
		scope = 0;
		displayName = "[HCA] Rebel Pathfinder ()";
		uniformClass = "HCA_Rebel_Uniform_Suit_Wood";
		backpack = "HCA_Rebel_Backpack";
		editorSubcategory = "EdSubcat_Personnel";
	};
	class HCA_Rebel_Uniform_C_Wear_U: JMSLLTE_ScumAlCommando_wood_F
	{

	};


	class JMSLLTE_ScumNavy_blue_F; 	//JMSLLTE_ScumNavy_blue_F_CombatUniform
	class HCA_Unit_Navy_green: JMSLLTE_ScumNavy_blue_F
	{
		author="Possum";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"\HCA_Equipment\data\uniforms\Trooper_Navy\NavyGreen.paa"
		};
	};
	class HCA_Unit_Navy_Black: JMSLLTE_ScumNavy_blue_F
	{
		author="Possum";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"\HCA_Equipment\data\uniforms\Trooper_Navy\NavyBlack.paa"
		};
	};
	class HCA_Unit_Navy_Brown: JMSLLTE_ScumNavy_blue_F
	{
		author="Possum";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"\HCA_Equipment\data\uniforms\Trooper_Navy\NavyBrown.paa"
		};
	};
	class HCA_Unit_Navy_Purple: JMSLLTE_ScumNavy_blue_F
	{
		author="Possum";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"\HCA_Equipment\data\uniforms\Trooper_Navy\NavyPurple.paa"
		};
	};
	class HCA_Unit_Navy_Zeus: JMSLLTE_ScumNavy_blue_F
	{
		author="Possum";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"\HCA_Equipment\data\uniforms\Trooper_Navy\Navy_Hawaiian.paa"
		};
	};
};

