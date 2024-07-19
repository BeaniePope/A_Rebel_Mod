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


