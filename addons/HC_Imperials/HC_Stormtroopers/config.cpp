class CfgPatches
{
    class HC_Imperials_ST
    {
        name="HC_Imperial"
        author="Greg"
        requiredAddons[]=
        {
            "JMSLLTE_Faction_name",
        };
        weapons[]=
        {
            "HC_Imps_ST_Base_U"
        };
        units[]=
        {
            "HC_Imps_ST_Base",
            "HC_Unit_Imperial_ST_Trooper",
            "HC_Unit_Imperial_ST_AT",
            "HC_Unit_Imperial_ST_AutoRifleman",
            "HC_Unit_Imperial_ST_Medic",
            "HC_Unit_Imperial_ST_CPL",
            "HC_Unit_Imperial_ST_SGT",
            "HC_Unit_Imperial_ST_SGM",
            "HC_Unit_Imperial_SCT_Trooper",
            "HC_Unit_Imperial_Officer",
            "HC_Unit_Imperial_Officer_Armored"
        };
    };
};

#include "includes.hpp"
class CfgFactionClasses
{
    class HC_Imperials
    {
		displayName="[HC] Imperial Faction";
		author="Queen";
		flag="\a3\Data_f\Flags\flag_nato_co.paa";
		icon="";
		priority=1;
	};
};

class CfgEditorSubcategories
{
    class HC_EdSubcat_Personnel_Stormtroopers
    {
        displayName = "Men (Stormtroopers)";
    };
};
class CfgWeapons
{
    class ItemInfo;
    ///helmets
    class WM_StormHelmet;
    class HC_Imperial_ST_Base_H: WM_StormHelmet
    {
        author="Greg";
		scope=2;
        displayName="[HC] Stormtrooper Helmet";
    };
    ///vests
    class WM_Basic_armor;
    class HC_Imperial_ST_Vest_hidden: WM_Basic_armor
    {
        author="Greg";
		scope=2;
        displayName="[HC] Stormtrooper Vest (invisible)";
    }
    ///uniforms
    class UniformItem;
    class WM_StormArmor;
    class HC_Imperial_ST_Base_U: WM_StormArmor
    {
        author="Greg";
		scope=0;
        displayName="[HC] Stormtrooper Uniform";
        class ItemInfo: UniformItem
		{
			//uniformModel="-";
			uniformClass="HC_Imps_ST_Base";
			containerClass="Supply150";
			mass=100;
		};
    };

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
		class ItemInfo: ItemInfo
		{	
			uniformModel = "\JMSLLTE_scum\vests\Commando_vest1.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	};   
	class HC_Commando_Strap_V: JMSLLTE_ComStrap_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Strap";
		class ItemInfo: ItemInfo
		{	
			uniformModel= "\JMSLLTE_scum\vests\TrooperCom_vest.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	};  
	class HC_Commando_StrapBag_V: JMSLLTE_ComStrapBag_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Strap w/ Bag";
		class ItemInfo: ItemInfo
		{	
			uniformModel="\JMSLLTE_scum\vests\TrooperCom_vestBag.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	};  
	class HC_Commando_Bag_V: JMSLLTE_ComBag_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Bag";
		class ItemInfo: ItemInfo
		{	
			uniformModel="\JMSLLTE_scum\vests\TrooperCom_Bag.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	};  
	class HC_AmmoStrap_Bag_Brown_V: JMSLLTE_HeavyBandBag_brown_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Bag (Brown)";
		class ItemInfo: ItemInfo
		{	
			uniformModel="\JMSLLTE_scum\vests\TrooperHeavy.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	};  
	class HC_AmmoStrap_Bag_Black_V: JMSLLTE_HeavyBandBag_black_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Bag (Black)";
		class ItemInfo: ItemInfo
		{	
			uniformModel="\JMSLLTE_scum\vests\TrooperHeavy.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	};
	class HC_AmmoStrap_Black_V: JMSLLTE_HeavyBand_black_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Ammo Strap (Black)";
		class ItemInfo: ItemInfo
		{	
			uniformModel="\JMSLLTE_scum\vests\TrooperHeavy_band.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	};
	class HC_AmmoStrap_Brown_V: JMSLLTE_HeavyBand_brown_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Ammo Strap (Brown)";
		class ItemInfo: ItemInfo
		{	
			uniformModel="\JMSLLTE_scum\vests\TrooperHeavy_band.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	};
	class HC_AmmoStrap_Alt_Black_V: JMSLLTE_HeavyBand2_black_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Alt Ammo Strap (Black)";
		class ItemInfo: ItemInfo
		{	
			uniformModel="\JMSLLTE_scum\vests\TrooperHeavy_band2.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	};
	class HC_AmmoStrap_Alt_Brown_V: JMSLLTE_HeavyBand2_brown_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Alt Ammo Strap (Brown)";
		class ItemInfo: ItemInfo
		{	
			uniformModel="\JMSLLTE_scum\vests\TrooperHeavy_band2.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	};
	class HC_Pathfinder_Bag_V: JMSLLTE_PathfinderBags_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Pathfinder Bag";
		class ItemInfo: ItemInfo
		{	
			uniformModel="\JMSLLTE_scum\vests\PathfinderBags.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	};
	class HC_Pathfinder_Strap_V: JMSLLTE_PathfinderVest_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Pathfinder Strap";
		class ItemInfo: ItemInfo
		{	
			uniformModel="\JMSLLTE_scum\vests\PathfinderGren.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	};
	class HC_Pathfinder_Belt_V: JMSLLTE_PathfinderBelt_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Belt";
		class ItemInfo: ItemInfo
		{	
			uniformModel="\JMSLLTE_scum\vests\PathfinderVest.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	};
	class HC_Commando_Belt_Snow_V: JMSLLTE_SnowCommandoBelt_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Belt (Snow)";
		class ItemInfo: ItemInfo
		{	
			uniformModel="\JMSLLTE_scum\vests\Snow_vest1.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	};
	class HC_Commando_Strap_V: JMSLLTE_CommandosStrip_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Strap";
		class ItemInfo: ItemInfo
		{	
			uniformModel="\JMSLLTE_scum\vests\Alcommandos_strip.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	}
	class HC_Commando_Strap_Light_V: JMSLLTE_CommandosStripL_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Strap (Light)";
		class ItemInfo: ItemInfo
		{	
			uniformModel="\JMSLLTE_scum\vests\Alcommandos_strip.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	};
	class HC_Commando_Alt_V: JMSLLTE_CommandosVest2_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Alt Commando Vest";
		class ItemInfo: ItemInfo
		{	
			uniformModel="\JMSLLTE_scum\vests\Alcommandos_vest2.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	};
	class HC_Commando_Light_V: JMSLLTE_CommandosVestL_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Vest (Light)";
		class ItemInfo: ItemInfo
		{	
			uniformModel="\JMSLLTE_scum\vests\Alcommandos_vestL.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	};
	class HC_Pilot_XWing_V: JMSLLTE_PilotBreather_xwing
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] X-Wing Pilot Vest";
		class ItemInfo: ItemInfo
		{	
			uniformModel="\JMSLLTE_scum\vests\Pilot_breather.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	};
	class HC_Navy_Strap_V: JMSLLTE_NavytrooperStrip_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Navy Trooper Strap";
		class ItemInfo: ItemInfo
		{	
			uniformModel="\JMSLLTE_scum\vests\Navytrooper_vest.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	};
	class HC_Navy_Holster_V: JMSLLTE_NavytrooperHolster_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Navy Troooper Holster";
		class ItemInfo: ItemInfo
		{	
			uniformModel="\JMSLLTE_scum\vests\Navytrooper_holster.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	};
	class HC_Commando_V: JMSLLTE_CommandosVest_armor
	{
		author = "Queen";
		scope = 2;
		displayName = "[HC] Commando Vest";
		class ItemInfo: ItemInfo
		{	
			uniformModel="\JMSLLTE_scum\vests\Alcommandos_vest.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	};
	
};
class CfgVehicles
{
    class WM_Stormtrooper_E11;
    class HC_Unit_Imperial_ST_Base: WM_Stormtrooper_E11
    {
        author="greg";
        scope = 0;
        side = 1;
        faction="HC_Imperials"
        editorSubcategory="HC_EdSubcat_Personnel_Stormtroopers";
        displayName="[HC] Stormtrooper (Dev)";
        uniformClass="HC_Imperial_ST_Base_U";
    };
    class HC_Unit_Imperial_ST_Trooper: HC_Unit_Imperial_ST_Base
    {
        author = "Queen";
        scope = 2;
        side = 1;
        displayName = "[HC] Stormtrooper"
        linkeditems[] = 
        {
            "HC_Imperial_ST_Vest_hidden",
            "HC_Imperial_ST_Base_H",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "HC_Imperial_ST_Vest_hidden",
            "HC_Imperial_ST_Base_H",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "WM_E11",
            "WM_E11_Optic",
            "WM_E11_Pack"
        };
        respawnWeapons[] =
        {
            "WM_E11",
            "WM_E11_Optic",
            "WM_E11_Pack"
        };
        magazines[] = 
        {
            MACRO_MAG_x5(WM_E11_Mag)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(WM_E11_Mag)
        };
    };
    class HC_Unit_Imperial_ST_AT: HC_Unit_Imperial_ST_Base
    {
        author = "Queen";
        scope = 2;
        displayName = "[HC] Stormtrooper (AT)";
        backpack = "WM_Stormtrooper_Backpack";
        linkeditems[] = 
        {
            "HC_Imperial_ST_Vest_hidden",
            "HC_Imperial_ST_Base_H",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "HC_Imperial_ST_Vest_hidden",
            "HC_Imperial_ST_Base_H",
            "WM_Stormtrooper_Backpack",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "WM_E11",
            "WM_E11_Optic",
            "WM_E11_Pack",
            "WM_Launch_PTL"
        };
        respawnWeapons[] =
        {
            "WM_E11",
            "WM_E11_Optic",
            "WM_E11_Pack",
            "WM_Launch_PTL"
        };
        magazines[] = 
        {
            MACRO_MAG_x5(WM_E11_Mag),
            MACRO_MAG_x3(WM_ProtonTorpedo)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(WM_E11_Mag),
            MACRO_MAG_x3(WM_ProtonTorpedo)
        };
    };
    class HC_Unit_Imperial_ST_AutoRifleman: HC_Unit_Imperial_ST_Base
    {
        author = "Queen";
        scope = 2;
        displayName = "[HC] Stormtrooper (MG)";
        backpack = "WM_Stormtrooper_Backpack";        
        linkedItems[] = 
        {
            "HC_Imperial_ST_Vest_hidden",
            "HC_Imperial_ST_Base_H",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "HC_Imperial_ST_Vest_hidden",
            "HC_Imperial_ST_Base_H",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "WM_DLT19"
        };
        respawnWeapons[] =
        {
            "WM_DLT19"
        };
        magazines[] = 
        {
            MACRO_MAG_x5(WM_DLT19_mag)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(WM_DLT19_mag)
        };
    };
    class HC_Unit_Imperial_ST_Medic: HC_Unit_Imperial_ST_Base
    {
        author = "Queen";
        scope = 2;
        displayName = "[HC] Stormtrooper (Medic)";
        backpack = "WM_Stormtrooper_Backpack"; 
        linkeditems[] = 
        {
            "HC_Imperial_ST_Vest_hidden",
            "HC_Imperial_ST_Base_H",
            "FirstAidKit",
            "Medikit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "HC_Imperial_ST_Vest_hidden",
            "HC_Imperial_ST_Base_H",
            "FirstAidKit",
            "Medikit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "WM_E11",
            "WM_E11_Optic",
            "WM_E11_Pack"
        };
        respawnWeapons[] =
        {
            "WM_E11",
            "WM_E11_Optic",
            "WM_E11_Pack"
        };
        magazines[] = 
        {
            MACRO_MAG_x5(WM_E11_Mag)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(WM_E11_Mag)
        };
    };
    class HC_Unit_Imperial_ST_CPL: HC_Unit_Imperial_ST_Base
    {
        author = "Queen";
        scope = 2;
        displayName = "[HC] Stormtrooper (CPL)"
        linkeditems[] = 
        {
            "HC_Imperial_ST_Base_H",
            "WM_SGT_Pauldron",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "HC_Imperial_ST_Base_H",
            "WM_SGT_Pauldron",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "WM_E11",
            "WM_E11_Optic",
            "WM_E11_Pack"
        };
        respawnWeapons[] =
        {
            "WM_E11",
            "WM_E11_Optic",
            "WM_E11_Pack"
        };
        magazines[] = 
        {
            MACRO_MAG_x5(WM_E11_Mag)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(WM_E11_Mag)
        };
    };
    class HC_Unit_Imperial_ST_SGT: HC_Unit_Imperial_ST_Base
    {
        author = "Queen";
        scope = 2;
        displayName = "[HC] Stormtrooper (SGT)"
        linkeditems[] = 
        {
            "HC_Imperial_ST_Base_H",
            "WM_UTL_Pauldron",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "HC_Imperial_ST_Base_H",
            "WM_UTL_Pauldron",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "WM_E11",
            "WM_E11_Optic",
            "WM_E11_Pack"
        };
        respawnWeapons[] =
        {
            "WM_E11",
            "WM_E11_Optic",
            "WM_E11_Pack"
        };
        magazines[] = 
        {
            MACRO_MAG_x5(WM_E11_Mag)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(WM_E11_Mag)
        };
    };
    class HC_Unit_Imperial_ST_SGM: HC_Unit_Imperial_ST_Base
    {
        author = "Queen";
        scope = 2;
        displayName = "[HC] Stormtrooper (SGM)"
        linkeditems[] = 
        {
            "HC_Imperial_ST_Base_H",
            "WM_SL_Pauldron",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "HC_Imperial_ST_Base_H",
            "WM_SL_Pauldron",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "WM_E11",
            "WM_E11_Optic",
            "WM_E11_Pack"
        };
        respawnWeapons[] =
        {
            "WM_E11",
            "WM_E11_Optic",
            "WM_E11_Pack"
        };
        magazines[] = 
        {
            MACRO_MAG_x5(WM_E11_Mag)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(WM_E11_Mag)
        };
    };
    class WM_Storm_marksman;
    class HC_Unit_Imperial_SCT_Base: WM_Storm_marksman
    {
        author = "Queen";
        scope = 0;
        side = 1;
        faction="HC_Imperials"
        editorSubcategory="EdSubcat_Personnel_SpecialForces";
        displayName="[HC] Scouttrooper (Dev)";
        uniformClass="WM_ScoutArmor";
    };
    class HC_Unit_Imperial_SCT_Trooper: HC_Unit_Imperial_SCT_Base
    {
        author = "Queen";
        scope = 2;
        displayName = "[HC] Scouttrooper"
        linkeditems[] = 
        {
            "WM_ScoutVest",
            "WM_ScoutHelmet",
            "JMSLLTE_W_TD23_white_F",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "WM_ScoutVest",
            "WM_ScoutHelmet",
            "JMSLLTE_W_TD23_white_F",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "WM_DLT19X",
            "JMSLLTE_se14pistol"        
        };
        respawnWeapons[] =
        {
            "WM_DLT19X",
            "JMSLLTE_se14pistol"
        };
        magazines[] = 
        {
            MACRO_MAG_x5(WM_DLT19X_Magazine),
            MACRO_MAG_x3(JMSLLTE_SE14_30rnd_Mag)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(WM_DLT19X_Magazine),
            MACRO_MAG_x3(JMSLLTE_SE14_30rnd_Mag)
        };
    };

    class WM_ImperialOfficer;
    class HC_Unit_Imperial_Officer_Base: WM_ImperialOfficer
    {
        author="Queen";
        scope = 0;
        side = 1;
        faction="HC_Imperials"
        editorSubcategory="EdSubcat_Personnel";
        displayName="[HC] Officer (Dev)";
        uniformClass="WM_OfficerUniform";
    };
    class HC_Unit_Imperial_Officer: HC_Unit_Imperial_Officer_Base
    {
        scope = 2;
        displayName = "[HC] Imperial Officer";
        linkeditems[] = 
        {,
            "WM_OfficerCap",
            "JMSLLTE_W_TD23_white_F",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "WM_OfficerCap",
            "JMSLLTE_W_TD23_white_F",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "JMSLLTE_se14pistol"        
        };
        respawnWeapons[] =
        {
            "JMSLLTE_se14pistol"
        };
        magazines[] = 
        {
            MACRO_MAG_x5(JMSLLTE_SE14_30rnd_Mag)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(JMSLLTE_SE14_30rnd_Mag)
        };
    };
    class HC_Unit_Imperial_Officer_Armored: HC_Unit_Imperial_Officer_Base
    {
        scope = 2;
        displayName = "[HC] Imperial Officer Armored";
        linkeditems[] = 
        {,
            "WM_OfficerHelmet",
            "WM_Officer_armor",
            "JMSLLTE_W_TD23_white_F",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "WM_OfficerHelmet",
            "WM_Officer_armor",
            "JMSLLTE_W_TD23_white_F",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "JMSLLTE_se14pistol"        
        };
        respawnWeapons[] =
        {
            "JMSLLTE_se14pistol"
        };
        magazines[] = 
        {
            MACRO_MAG_x5(JMSLLTE_SE14_30rnd_Mag)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(JMSLLTE_SE14_30rnd_Mag)
        };
    };

};


class CfgGroups
{
    class West
    {
        class HC_Imperials
        {   
            scope = 2;
            name = "[HC] Imperial Faction";
            class Infantry
            {
                name = "Infantry";
                class HC_Group_ST_Infantry_Squad
                {
                    name = "Infantry Squad (Stormtroopers)";
                    faction = "HC_Imperials";
                    side = 1; 
                    class Object0	{side = 1; vehicle = "HC_Unit_Imperial_ST_SGT"; rank = "SERGEANT"; position[] = {0,0,0.00143909}; dir = 0;};
                    class Object1	{side = 1; vehicle = "HC_Unit_Imperial_ST_CPL"; rank = "CORPORAL"; position[] = {0.0839844,-1.63403,0.00143909}; dir = 0;};
                    class Object2	{side = 1; vehicle = "HC_Unit_Imperial_ST_CPL"; rank = "CORPORAL"; position[] = {1.52698,-1.58594,0.00143909}; dir = 0;};
                    class Object3	{side = 1; vehicle = "HC_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {1.59515,-3.14722,0.00143909}; dir = 0;};
                    class Object4	{side = 1; vehicle = "HC_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {1.59906,-4.44946,0.00143909}; dir = 0;};
                    class Object5	{side = 1; vehicle = "HC_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {-0.0507813,-4.30884,0.00143909}; dir = 0;};
                    class Object6	{side = 1; vehicle = "HC_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {0.104004,-2.92188,0.00143909}; dir = 0;};
                    class Object7	{side = 1; vehicle = "HC_Unit_Imperial_ST_Medic"; rank = "PRIVATE"; position[] = {1.61475,-5.79761,0.00143909}; dir = 0;};
                    class Object8	{side = 1; vehicle = "HC_Unit_Imperial_ST_AutoRifleman"; rank = "PRIVATE"; position[] = {0.0296021,-5.85596,0.00143909}; dir = 0;};
                };
                class HC_Group_ST_Infantry_Weapons_Squad
                {
                    name = "Weapons Squad (Stormtroopers)";
                    faction = "HC_Imperials";
                    side = 1; 
                    class Object0	{side = 1; vehicle = "HC_Unit_Imperial_ST_SGT"; rank = "SERGEANT"; position[] = {0,0,0.00143909}; dir = 0;};
                    class Object1	{side = 1; vehicle = "HC_Unit_Imperial_ST_CPL"; rank = "CORPORAL"; position[] = {0.0839844,-1.63403,0.00143909}; dir = 0;};
                    class Object2	{side = 1; vehicle = "HC_Unit_Imperial_ST_CPL"; rank = "CORPORAL"; position[] = {1.52698,-1.58594,0.00143909}; dir = 0;};
                    class Object3	{side = 1; vehicle = "HC_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {1.59515,-3.14722,0.00143909}; dir = 0;};
                    class Object4	{side = 1; vehicle = "HC_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {0.104004,-2.92188,0.00143909}; dir = 0;};
                    class Object5	{side = 1; vehicle = "HC_Unit_Imperial_ST_Medic"; rank = "PRIVATE"; position[] = {1.61475,-5.79761,0.00143909}; dir = 0;};
                    class Object6	{side = 1; vehicle = "HC_Unit_Imperial_ST_AutoRifleman"; rank = "PRIVATE"; position[] = {0.0296021,-5.85596,0.00143909}; dir = 0;};
                    class Object7	{side = 1; vehicle = "HC_Unit_Imperial_ST_AutoRifleman"; rank = "PRIVATE"; position[] = {-0.0510254,-4.30884,0.00143909}; dir = 0;};
                    class Object8	{side = 1; vehicle = "HC_Unit_Imperial_ST_AT"; rank = "PRIVATE"; position[] = {1.599,-4.44995,0.00143909}; dir = 0;};

                };
                class HC_Group_ST_Infantry_AT_Team
                {
                    name = "Anti-Armor Team (Stormtroopers)";
                    faction = "HC_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "HC_Unit_Imperial_ST_SGT"; rank = "SERGEANT"; position[] = {0,0,0.00143909}; dir = 0;};
                    class Object1	{side = 1; vehicle = "HC_Unit_Imperial_ST_AT"; rank = "PRIVATE"; position[] = {-0.076416,-1.71631,0.00143909}; dir = 0;};
                    class Object2	{side = 1; vehicle = "HC_Unit_Imperial_ST_AT"; rank = "PRIVATE"; position[] = {1.8736,-1.79541,0.00143909}; dir = 0;};
                    class Object3	{side = 1; vehicle = "HC_Unit_Imperial_ST_AT"; rank = "PRIVATE"; position[] = {0.0645752,-3.87744,0.00143909}; dir = 0;};
                };
                class HC_Group_ST_Infantry_Platoon_Command
                {
                    name = "Platoon Command (Stormtroopers)";
                    faction = "HC_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "HC_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {0,0,0.00143909}; dir = 0;};
                    class Object1	{side = 1; vehicle = "HC_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {-2.56036,0.010498,0.00143909}; dir = 0;};
                    class Object2	{side = 1; vehicle = "HC_Unit_Imperial_ST_SGM"; rank = "LIEUTENANT"; position[] = {1.99109,0.0681152,0.00143909}; dir = 0;};
                    class Object3	{side = 1; vehicle = "HC_Unit_Imperial_ST_Medic"; rank = "PRIVATE"; position[] = {3.99707,0.0649414,0.00143909}; dir = 0;};
                    class Object4	{side = 1; vehicle = "HC_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {5.90369,0.0869141,0.00143909}; dir = 0;};
                    class Object5	{side = 1; vehicle = "HC_Unit_Imperial_ST_SGT"; rank = "SERGEANT"; position[] = {-4.45477,0.0517578,0.00143909}; dir = 0;};
                };
                class HC_Group_ST_Infantry_High_Command
                {
                    name = "Command Team (Stormtroopers)";
                    faction = "HC_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "HC_Unit_Imperial_Officer"; rank = "MAJOR"; position[] = {0,0,0.00143909}; dir = 0;};
                    class Object1	{side = 1; vehicle = "HC_Unit_Imperial_Officer_Armored"; rank = "CAPTAIN"; position[] = {-0.237732,-1.83203,0.00143909}; dir = 0;};
                    class Object2	{side = 1; vehicle = "HC_Unit_Imperial_Officer_Armored"; rank = "CAPTAIN"; position[] = {1.26782,-1.40112,0.00143909}; dir = 0;};
                    class Object3	{side = 1; vehicle = "HC_Unit_Imperial_ST_SGT"; rank = "SERGEANT"; position[] = {-0.20575,-3.14429,0.00143909}; dir = 0;};
                    class Object4	{side = 1; vehicle = "HC_Unit_Imperial_ST_SGT"; rank = "SERGEANT"; position[] = {1.25513,-2.97656,0.00143909}; dir = 0;};
                    class Object5	{side = 1; vehicle = "HC_Unit_Imperial_ST_CPL"; rank = "CORPORAL"; position[] = {-0.274414,-4.48584,0.00143909}; dir = 0;};
                    class Object6	{side = 1; vehicle = "HC_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {-0.298584,-6.33594,0.00143909}; dir = 0;};
                    class Object7	{side = 1; vehicle = "HC_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {-0.320007,-8.18677,0.00143909}; dir = 0;};
                    class Object8	{side = 1; vehicle = "HC_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {1.22095,-8.30566,0.00143909}; dir = 0;};
                    class Object9	{side = 1; vehicle = "HC_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {1.29651,-6.41895,0.00143909}; dir = 0;};
                    class Object10	{side = 1; vehicle = "HC_Unit_Imperial_ST_CPL"; rank = "CORPORAL"; position[] = {1.24353,-4.39697,0.00143909}; dir = 0;};
                    class Object11	{side = 1; vehicle = "HC_Unit_Imperial_ST_SGM"; rank = "LIEUTENANT"; position[] = {1.42993,-0.0512695,0.00143909}; dir = 0;};
                };
            };
            class Armor
            {
                name = "Armor";
                class HC_Group_Imperial_ATST
                {
                    name = "AT-ST Platoon";
                    faction = "HC_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "WM_ATST"; rank = "PRIVATE"; position[] = {0,0,0}; dir = 0;};
                    class Object1	{side = 1; vehicle = "WM_ATST"; rank = "PRIVATE"; position[] = {-6.9151,-6.71533,0}; dir = 0;};
                    class Object2	{side = 1; vehicle = "WM_ATST"; rank = "PRIVATE"; position[] = {6.37946,-6.99316,0}; dir = 0;};
                };
                class HC_Group_Imperial_ATAT
                {
                    name = "AT-AT Platoon";
                    faction = "HC_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "3AS_ATAT"; rank = "PRIVATE"; position[] = {0,0,0.00108957}; dir = 0;};
                    class Object1	{side = 1; vehicle = "3AS_ATAT"; rank = "PRIVATE"; position[] = {22.4993,-1.06885,0.00108957}; dir = 0;};
                };
            };
            class Mechanized
            {
                name = "Mechanized";
                class HC_Group_Imperial_ITT
                {
                    name = "ITT Squad (Stormtroopers)";
                    faction = "HC_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "HC_Unit_Imperial_ST_SGT"; rank = "PRIVATE"; position[] = {0,0,0.00143909}; dir = 0;};
                    class Object1	{side = 1; vehicle = "HC_Unit_Imperial_ST_CPL"; rank = "PRIVATE"; position[] = {0.0839844,-1.63403,0.00143909}; dir = 0;};
                    class Object2	{side = 1; vehicle = "HC_Unit_Imperial_ST_CPL"; rank = "PRIVATE"; position[] = {1.52698,-1.58594,0.00143909}; dir = 0;};
                    class Object3	{side = 1; vehicle = "HC_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {1.59509,-3.14722,0.00143909}; dir = 0;};
                    class Object4	{side = 1; vehicle = "HC_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {0.104004,-2.92188,0.00143909}; dir = 0;};
                    class Object5	{side = 1; vehicle = "HC_Unit_Imperial_ST_Medic"; rank = "PRIVATE"; position[] = {1.61475,-5.79761,0.00143909}; dir = 0;};
                    class Object6	{side = 1; vehicle = "HC_Unit_Imperial_ST_AutoRifleman"; rank = "PRIVATE"; position[] = {0.0296631,-5.85596,0.00143909}; dir = 0;};
                    class Object7	{side = 1; vehicle = "HC_Unit_Imperial_ST_AutoRifleman"; rank = "PRIVATE"; position[] = {-0.0510254,-4.30884,0.00143909}; dir = 0;};
                    class Object8	{side = 1; vehicle = "HC_Unit_Imperial_ST_AT"; rank = "PRIVATE"; position[] = {1.599,-4.44995,0.00143909}; dir = 0;};
                    class Object9	{side = 1; vehicle = "WM_ITT_Imperial"; rank = "PRIVATE"; position[] = {-0.0065918,5.34277,0}; dir = 0;};
                };
            };

            class Motorized
            {
                name = "Motorized";
                class HC_Group_Imperial_Scouts 
                {
                    name = "Bike Team";
                    faction = "HC_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "WM_74Z_Imperial_Brown"; rank = "PRIVATE"; position[] = {0,0,0}; dir = 0;};
                    class Object2	{side = 1; vehicle = "WM_74Z_Imperial_Brown"; rank = "PRIVATE"; position[] = {1.81665,-1.94263,0}; dir = 0;};
                };
            };

            class SpecOps
            {
                name = "Special Forces";
                class HC_Group_Imperial_Recon_Team
                {
                    name = "Recon Team";
                    faction = "HC_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "HC_Unit_Imperial_SCT_Trooper"; rank = "PRIVATE"; position[] = {0,0,0.00143909}; dir = 0;};
                    class Object1	{side = 1; vehicle = "HC_Unit_Imperial_SCT_Trooper"; rank = "PRIVATE"; position[] = {1.23206,-1.02832,0.00143909}; dir = 0;};
                };
            };
        };
    };
};