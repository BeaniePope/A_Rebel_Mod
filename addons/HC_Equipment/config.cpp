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
	//Uniforms
};


