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

        };
    };
};

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

	//Vests
	class JMSLLTE_CommandoBelt_armor;   //the horror of ace compats
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
	class JMSLLTE_CommandosVest_armor;  
	class JMSLLTE_CommandosVest2_armor;  
	class JMSLLTE_CommandosVestL_armor;  
	class JMSLLTE_PilotBreather_xwing;  
	class JMSLLTE_NavytrooperStrip_armor;  
	class JMSLLTE_NavytrooperHolster_armor;  

};
class CfgVehicles
{
	//Backpacks
	class JMSLLTE_back_rebpack_v1_black;
	class JMSLLTE_back_rebpack_v1_wood;
	class HC_Rebel_Backpack_Black: JMSLLTE_back_rebpack_v1_black
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Rebel Backpack (Black)";
		hiddenSelectionsTextures[] = 
		{
			"\HC_Core\data\backpacks\HC_Rebel_Backpack_Black_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\HC_Core\data\HC_Rebel_Backpack_Black.rvmat"
		};
	};

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
	class JMSLLTE_ScumCommando_wood_F_CombatUnifor;

	class JMSLLTE_ScumAlCommando_cloud_F_CombatUniform; //"Wear" Suit
	class JMSLLTE_ScumAlCommando_desert_F_CombatUniform;
	class JMSLLTE_ScumAlCommando_base_F_CombatUniform;
	class JMSLLTE_ScumAlCommando_wood_F_CombatUniform;

	class HC_Rebel_Uniform_Suit: JMSLLTE_ScumAlCommando_wood_F_CombatUniform
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Rebel Commando Suit";
	};


	//Units
	class HC_Unit_Rebel_Trooper_Base: B_Soldier_base_F
	{
		author = "Queen";
		scope = 0;
		displayName = "[HC] Base Rebel Trooper (Dev)";
		uniformClass = "";
		backpack = "";
		faction = "HC_Faction";
		side = 1;
		editorSubcategory = "EdSubcat_Personnel";
		linkedItems[] = {};
	};

	class HC_Unit_Rebel_Trooper_Wood: HC_Unit_Rebel_Trooper_Base
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Rebel Trooper";
		uniformClass = "HC_Rebel_Uniform_Suit";
		backpack = "HC_Rebel_Backpack_Wood";
		editorSubcategory = "EdSubcat_Personnel_Camo_Woodland";
		linkedItems[] = 
		{
			"HC_Commando_Helmet_Endor",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
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
			"HC_Magazine_A280_Uni",
			"HC_Magazine_A280_Uni",
			"HC_Magazine_A280_Uni",
			"HC_Magazine_A280_Uni",
			"HC_Magazine_A280_Uni"
		};
		respawnMagazines[]=
		{
			"HC_Magazine_A280_Uni",
			"HC_Magazine_A280_Uni",
			"HC_Magazine_A280_Uni",
			"HC_Magazine_A280_Uni",
			"HC_Magazine_A280_Uni"
		};
	};

};
