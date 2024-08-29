class CfgPatches
{
    class HC_Core
    {
        author= "HC Aux Team";
        requiredAddons[]=
        {
			
        };
        weapons[]=
        {
			"HC_Commlink"
        };
        units[]=
        {
			"HC_Rebel_Backpack_Black",
			"HC_Backpack_LR_Black",
			"HC_Backpack_LR_Green",
			"HC_Ammobox_REB"
        };
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
};

class ACEX_Fortify_Presets
{
	class HC_FortPreset
	{
		displayName = "Horizon Company Defenses";
		objects[] = {
			{"Land_Plank_01_4m_F"},
			{"Land_BagFence_Long_F", 7},
			{"Land_BagFence_Short_F", 5},
			{"Land_BagFence_Round_F", 5},
		};
	};
};

class CfgFaces
{
    class Default;
    class Man_A3: Default
    {
        class Default;
        class Head_QuarrenPossum: Default
        {
            //name="[HC] Possum";
            displayname="[HC] Possum";
            identityTypes[]=
            {
                "HeadQuarrenPossum"
            };
            head="Head_Quarren_head";
            texture="HC_Core\data\faces\quarren_brown_co.paa";
            disabled=0;
            material="\JMSLLTE_scum\head\data\quarren.rvmat";
            textureHL="HC_Core\data\faces\hl_sullustan_co.paa";
            materialHL="\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
            textureHL2="HC_Core\data\faces\hl_sullustan_co.paa";
            materialHL2="\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
        };
    };
};

class CfgVehicles
{
	//Backpacks
	class Black_WM_Rebel_Radio;
	class Endor_Rebel_Radio;
	class ItemInfo;
	class HC_Backpack_LR_Green: Endor_Rebel_Radio
	{
		author = "Queen";
		scope = 2;
    	displayName = "[HC] U/MCL 77 (Green)";
		tf_range = 40000;
		tf_encryptionCode = "tf_east_radio_code";
		tf_dialog = "hc_lr_radio_dialog";
		tf_subtype = "digital_lr";
 		tf_dialogUpdate = "['CH: %1'] call TFAR_fnc_updateLRDialogToChannel;";
		maximumLoad = 160;
		mass=85;
	};
	class HC_Backpack_LR_Black: Black_WM_Rebel_Radio
	{
		author = "Queen";
		scope = 2;
    	displayName = "[HC] U/MCL 77 (Black)";
		tf_range = 40000;
		tf_encryptionCode = "tf_east_radio_code";
		tf_dialog = "hc_lr_radio_dialog";
		tf_subtype = "digital_lr";
 		tf_dialogUpdate = "['CH: %1'] call TFAR_fnc_updateLRDialogToChannel;";
		maximumLoad = 160;
		mass=85;
	};
	//Uniforms USE EdSubcat_Personnel_Story FOR CUSTOMS GEORGE <3
	
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

	};
	
};



class ACE_Tags {
    class Horizon_Logo {
        displayName = "Horizon Company";  // Name of your tag being displayed in the interaction menu
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

