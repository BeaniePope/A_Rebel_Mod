class CfgPatches
{
    class HCA_Imperials_ST
    {
        name="HCA_Imperial";
        author="Greg";
        requiredAddons[]=
        {
            "JMSLLTE_Faction_name"
        };
        weapons[]=
        {
            "HCA_Imps_ST_Base_U"
        };
        units[]=
        {
            "HCA_Imps_ST_Base",
            "HCA_Unit_Imperial_ST_Trooper",
            "HCA_Unit_Imperial_ST_AT",
            "HCA_Unit_Imperial_ST_AutoRifleman",
            "HCA_Unit_Imperial_ST_Medic",
            "HCA_Unit_Imperial_ST_CPL",
            "HCA_Unit_Imperial_ST_SGT",
            "HCA_Unit_Imperial_ST_SGM",
            "HCA_Unit_Imperial_SCT_Trooper",
            "HCA_Unit_Imperial_Officer",
            "HCA_Unit_Imperial_Officer_Armored"
        };
    };
};

#include "includes.hpp"
class CfgFactionClasses
{
    class HCA_Imperials
    {
		displayName="[HCA] Imperial Faction";
		author="Queen";
		flag="\a3\Data_f\Flags\flag_nato_co.paa";
		icon="";
		priority=1;
	};
};

class CfgEditorSubcategories
{
    class HCA_EdSubcat_Personnel_Stormtroopers
    {
        displayName = "Men (Stormtroopers)";
    };
};
class CfgWeapons
{
    class ItemInfo;
    ///helmets
    class QSS_Helmet_Stormtrooper;
    class HCA_Imperial_ST_Base_H: QSS_Helmet_Stormtrooper
    {
        author="Greg";
		scope=2;
        displayName="[HCA] Stormtrooper Helmet";
    };
    ///vests
    /* class WM_Basic_armor;
    class HCA_Imperial_ST_Vest_hidden: WM_Basic_armor
    {
        author="Greg";
		scope=2;
        displayName="[HCA] Stormtrooper Vest (invisible)";
    }; */
    ///uniforms
    class UniformItem;
    class QSS_StormArmor;
    class HCA_Imperial_ST_Base_U: QSS_StormArmor
    {
        author="Greg";
		scope=0;
        displayName="[HCA] Stormtrooper Uniform";
        class ItemInfo: UniformItem
		{
			//uniformModel="-";
			uniformClass="HCA_Imps_ST_Base";
			containerClass="Supply150";
			mass=100;
		};
    };
};
class CfgVehicles
{
    class JMSLLTE_emp_storm_trooper;
    class HCA_Unit_Imperial_ST_Base: JMSLLTE_emp_storm_trooper
    {
        author="greg";
        scope = 0;
        side = 1;
        faction="HCA_Imperials";
        editorSubcategory="HCA_EdSubcat_Personnel_Stormtroopers";
        displayName="[HCA] Stormtrooper (Dev)";
        uniformClass="HCA_Imperial_ST_Base_U";
    };
    class HCA_Unit_Imperial_ST_Trooper: HCA_Unit_Imperial_ST_Base
    {
        author = "Queen";
        scope = 2;
        side = 1;
        displayName = "[HCA] Stormtrooper";
        linkeditems[] = 
        {
            "",
            "HCA_Imperial_ST_Base_H",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "",
            "HCA_Imperial_ST_Base_H",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "IDA_E11",
            "IDA_E11_scope",
            ""
        };
        respawnWeapons[] =
        {
            "IDA_E11",
            "IDA_E11_scope",
            ""
        };
        magazines[] = 
        {
            MACRO_MAG_x5(IDA_Blaster_Cell_Power3_40Rnd_Red)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(IDA_Blaster_Cell_Power3_40Rnd_Red)
        };
    };
    class HCA_Unit_Imperial_ST_AT: HCA_Unit_Imperial_ST_Base
    {
        author = "Queen";
        scope = 2;
        displayName = "[HCA] Stormtrooper (AT)";
        backpack = "3AS_B_Imperial_Stormtrooper_Backpack_F";
        linkeditems[] = 
        {
            "",
            "HCA_Imperial_ST_Base_H",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "",
            "HCA_Imperial_ST_Base_H",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "IDA_E11",
            "IDA_E11_scope",
            "",
            "ls_weapon_plx1_at"
        };
        respawnWeapons[] =
        {
            "IDA_E11",
            "IDA_E11_scope",
            "",
            "ls_weapon_plx1_at"
        };
        magazines[] = 
        {
            MACRO_MAG_x5(IDA_Blaster_Cell_Power3_40Rnd_Red),
            MACRO_MAG_x3(ls_magazine_plx1_at)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(IDA_Blaster_Cell_Power3_40Rnd_Red),
            MACRO_MAG_x3(ls_magazine_plx1_at)
        };
    };
    class HCA_Unit_Imperial_ST_AutoRifleman: HCA_Unit_Imperial_ST_Base
    {
        author = "Queen";
        scope = 2;
        displayName = "[HCA] Stormtrooper (MG)";
        backpack = "3AS_B_Imperial_Stormtrooper_Backpack_F";        
        linkedItems[] = 
        {
            "",
            "HCA_Imperial_ST_Base_H",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "",
            "HCA_Imperial_ST_Base_H",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "IDA_DLT19"
        };
        respawnWeapons[] =
        {
            "IDA_DLT19"
        };
        magazines[] = 
        {
            MACRO_MAG_x5(IDA_Blaster_Cell_Power3_60Rnd_Red)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(IDA_Blaster_Cell_Power3_60Rnd_Red)
        };
    };
    class HCA_Unit_Imperial_ST_Medic: HCA_Unit_Imperial_ST_Base
    {
        author = "Queen";
        scope = 2;
        displayName = "[HCA] Stormtrooper (Medic)";
        backpack = "3AS_B_Imperial_Stormtrooper_Backpack_F";
        uniformClass = "QSS_StormArmor_Crown2_Medic";
        linkeditems[] = 
        {
            "",
            "QSS_Helmet_StormSurgeon_Crown2",
            "FirstAidKit",
            "Medikit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "",
            "QSS_Helmet_StormSurgeon_Crown2",
            "FirstAidKit",
            "Medikit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "IDA_E11",
            "IDA_E11_scope",
            ""
        };
        respawnWeapons[] =
        {
            "IDA_E11",
            "IDA_E11_scope",
            ""
        };
        magazines[] = 
        {
            MACRO_MAG_x5(IDA_Blaster_Cell_Power3_40Rnd_Red)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(IDA_Blaster_Cell_Power3_40Rnd_Red)
        };
    };
    class HCA_Unit_Imperial_ST_CPL: HCA_Unit_Imperial_ST_Base
    {
        author = "Queen";
        scope = 2;
        displayName = "[HCA] Stormtrooper (CPL)";
        linkeditems[] = 
        {
            "HCA_Imperial_ST_Base_H",
            "JMSLLTE_StormtrooperPauldron_Black_Armor",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "HCA_Imperial_ST_Base_H",
            "JMSLLTE_StormtrooperPauldron_Black_Armor",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "IDA_E11",
            "IDA_E11_scope",
            ""
        };
        respawnWeapons[] =
        {
            "IDA_E11",
            "IDA_E11_scope",
            ""
        };
        magazines[] = 
        {
            MACRO_MAG_x5(IDA_Blaster_Cell_Power3_40Rnd_Red)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(IDA_Blaster_Cell_Power3_40Rnd_Red)
        };
    };
    class HCA_Unit_Imperial_ST_SGT: HCA_Unit_Imperial_ST_Base
    {
        author = "Queen";
        scope = 2;
        displayName = "[HCA] Stormtrooper (SGT)";
        linkeditems[] = 
        {
            "HCA_Imperial_ST_Base_H",
            "JMSLLTE_StormtrooperPauldron_Orange_Armor",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "HCA_Imperial_ST_Base_H",
            "JMSLLTE_StormtrooperPauldron_Orange_Armor",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "IDA_E11",
            "IDA_E11_scope",
            ""
        };
        respawnWeapons[] =
        {
            "IDA_E11",
            "IDA_E11_scope",
            ""
        };
        magazines[] = 
        {
            MACRO_MAG_x5(IDA_Blaster_Cell_Power3_40Rnd_Red)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(IDA_Blaster_Cell_Power3_40Rnd_Red)
        };
    };
    class HCA_Unit_Imperial_ST_SGM: HCA_Unit_Imperial_ST_Base
    {
        author = "Queen";
        scope = 2;
        displayName = "[HCA] Stormtrooper (SGM)";
        linkeditems[] = 
        {
            "HCA_Imperial_ST_Base_H",
            "JMSLLTE_StormtrooperPauldron_Red_Armor",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "HCA_Imperial_ST_Base_H",
            "JMSLLTE_StormtrooperPauldron_Red_Armor",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "IDA_E11",
            "IDA_E11_scope",
            ""
        };
        respawnWeapons[] =
        {
            "IDA_E11",
            "IDA_E11_scope",
            ""
        };
        magazines[] = 
        {
            MACRO_MAG_x5(IDA_Blaster_Cell_Power3_40Rnd_Red)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(IDA_Blaster_Cell_Power3_40Rnd_Red)
        };
    };
    class 3AS_Imperial_Scout_F;
    class HCA_Unit_Imperial_SCT_Base: 3AS_Imperial_Scout_F
    {
        author = "Queen";
        scope = 0;
        side = 1;
        faction="HCA_Imperials";
        editorSubcategory="EdSubcat_Personnel_SpecialForces";
        displayName="[HCA] Scouttrooper (Dev)";
        uniformClass="K_Scout_Uniform";
    };
    class HCA_Unit_Imperial_SCT_Trooper: HCA_Unit_Imperial_SCT_Base
    {
        author = "Queen";
        scope = 2;
        displayName = "[HCA] Scouttrooper";
        uniformClass = "K_Scout_Uniform";
        linkeditems[] = 
        {
            "",
            "IDA_ScoutTrooper_Helmet",
            "JMSLLTE_W_TD23_white_F",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "",
            "IDA_ScoutTrooper_Helmet",
            "JMSLLTE_W_TD23_white_F",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "IDA_DLT19D",
            "JMSLLTE_se14pistol"        
        };
        respawnWeapons[] =
        {
            "IDA_DLT19D",
            "JMSLLTE_se14pistol"
        };
        magazines[] = 
        {
            MACRO_MAG_x5(IDA_Blaster_Cell_Power3_40Rnd_Red),
            MACRO_MAG_x3(JMSLLTE_SE14_30rnd_Mag)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(IDA_Blaster_Cell_Power3_40Rnd_Red),
            MACRO_MAG_x3(JMSLLTE_SE14_30rnd_Mag)
        };
    };

    class JMSLLTE_emp_army_fieldOf;
    class HCA_Unit_Imperial_Officer_Base: JMSLLTE_emp_army_fieldOf
    {
        author="Queen";
        scope = 0;
        side = 1;
        faction="HCA_Imperials";
        editorSubcategory="EdSubcat_Personnel";
        displayName="[HCA] Officer (Dev)";
        uniformClass="JMSLLTE_EmpOfficer_grey_F_CombatUniform";
    };

    class HCA_Unit_Imperial_Officer: HCA_Unit_Imperial_Officer_Base
    {
        scope = 2;
        displayName = "[HCA] Imperial Officer";
        linkeditems[] = 
        {
            "JMSLLTE_EmpOfficerCap_black_cap",
            "JMSLLTE_W_TD23_white_F",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "JMSLLTE_EmpOfficerCap_black_cap",
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
    class HCA_Unit_Imperial_Officer_Armored: HCA_Unit_Imperial_Officer_Base
    {
        scope = 2;
        displayName = "[HCA] Imperial Officer Armored";
        linkeditems[] = 
        {
            "JMSLLTE_EmpOfficerCap_black_cap",
            "ls_imperialVest_army_light_h",
            "JMSLLTE_W_TD23_white_F",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "JMSLLTE_EmpOfficerCap_black_cap",
            "ls_imperialVest_army_light_h",
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
        class HCA_Imperials
        {   
            scope = 2;
            name = "[HCA] Imperial Faction";
            class Infantry
            {
                name = "Infantry";
                class HCA_Group_ST_Infantry_Squad
                {
                    name = "Infantry Squad (Stormtroopers)";
                    faction = "HCA_Imperials";
                    side = 1; 
                    class Object0	{side = 1; vehicle = "HCA_Unit_Imperial_ST_SGT"; rank = "SERGEANT"; position[] = {0,0,0.00143909}; dir = 0;};
                    class Object1	{side = 1; vehicle = "HCA_Unit_Imperial_ST_CPL"; rank = "CORPORAL"; position[] = {0.0839844,-1.63403,0.00143909}; dir = 0;};
                    class Object2	{side = 1; vehicle = "HCA_Unit_Imperial_ST_CPL"; rank = "CORPORAL"; position[] = {1.52698,-1.58594,0.00143909}; dir = 0;};
                    class Object3	{side = 1; vehicle = "HCA_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {1.59515,-3.14722,0.00143909}; dir = 0;};
                    class Object4	{side = 1; vehicle = "HCA_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {1.59906,-4.44946,0.00143909}; dir = 0;};
                    class Object5	{side = 1; vehicle = "HCA_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {-0.0507813,-4.30884,0.00143909}; dir = 0;};
                    class Object6	{side = 1; vehicle = "HCA_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {0.104004,-2.92188,0.00143909}; dir = 0;};
                    class Object7	{side = 1; vehicle = "HCA_Unit_Imperial_ST_Medic"; rank = "PRIVATE"; position[] = {1.61475,-5.79761,0.00143909}; dir = 0;};
                    class Object8	{side = 1; vehicle = "HCA_Unit_Imperial_ST_AutoRifleman"; rank = "PRIVATE"; position[] = {0.0296021,-5.85596,0.00143909}; dir = 0;};
                };
                class HCA_Group_ST_Infantry_Weapons_Squad
                {
                    name = "Weapons Squad (Stormtroopers)";
                    faction = "HCA_Imperials";
                    side = 1; 
                    class Object0	{side = 1; vehicle = "HCA_Unit_Imperial_ST_SGT"; rank = "SERGEANT"; position[] = {0,0,0.00143909}; dir = 0;};
                    class Object1	{side = 1; vehicle = "HCA_Unit_Imperial_ST_CPL"; rank = "CORPORAL"; position[] = {0.0839844,-1.63403,0.00143909}; dir = 0;};
                    class Object2	{side = 1; vehicle = "HCA_Unit_Imperial_ST_CPL"; rank = "CORPORAL"; position[] = {1.52698,-1.58594,0.00143909}; dir = 0;};
                    class Object3	{side = 1; vehicle = "HCA_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {1.59515,-3.14722,0.00143909}; dir = 0;};
                    class Object4	{side = 1; vehicle = "HCA_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {0.104004,-2.92188,0.00143909}; dir = 0;};
                    class Object5	{side = 1; vehicle = "HCA_Unit_Imperial_ST_Medic"; rank = "PRIVATE"; position[] = {1.61475,-5.79761,0.00143909}; dir = 0;};
                    class Object6	{side = 1; vehicle = "HCA_Unit_Imperial_ST_AutoRifleman"; rank = "PRIVATE"; position[] = {0.0296021,-5.85596,0.00143909}; dir = 0;};
                    class Object7	{side = 1; vehicle = "HCA_Unit_Imperial_ST_AutoRifleman"; rank = "PRIVATE"; position[] = {-0.0510254,-4.30884,0.00143909}; dir = 0;};
                    class Object8	{side = 1; vehicle = "HCA_Unit_Imperial_ST_AT"; rank = "PRIVATE"; position[] = {1.599,-4.44995,0.00143909}; dir = 0;};

                };
                class HCA_Group_ST_Infantry_AT_Team
                {
                    name = "Anti-Armor Team (Stormtroopers)";
                    faction = "HCA_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "HCA_Unit_Imperial_ST_SGT"; rank = "SERGEANT"; position[] = {0,0,0.00143909}; dir = 0;};
                    class Object1	{side = 1; vehicle = "HCA_Unit_Imperial_ST_AT"; rank = "PRIVATE"; position[] = {-0.076416,-1.71631,0.00143909}; dir = 0;};
                    class Object2	{side = 1; vehicle = "HCA_Unit_Imperial_ST_AT"; rank = "PRIVATE"; position[] = {1.8736,-1.79541,0.00143909}; dir = 0;};
                    class Object3	{side = 1; vehicle = "HCA_Unit_Imperial_ST_AT"; rank = "PRIVATE"; position[] = {0.0645752,-3.87744,0.00143909}; dir = 0;};
                };
                class HCA_Group_ST_Infantry_Platoon_Command
                {
                    name = "Platoon Command (Stormtroopers)";
                    faction = "HCA_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "HCA_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {0,0,0.00143909}; dir = 0;};
                    class Object1	{side = 1; vehicle = "HCA_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {-2.56036,0.010498,0.00143909}; dir = 0;};
                    class Object2	{side = 1; vehicle = "HCA_Unit_Imperial_ST_SGM"; rank = "LIEUTENANT"; position[] = {1.99109,0.0681152,0.00143909}; dir = 0;};
                    class Object3	{side = 1; vehicle = "HCA_Unit_Imperial_ST_Medic"; rank = "PRIVATE"; position[] = {3.99707,0.0649414,0.00143909}; dir = 0;};
                    class Object4	{side = 1; vehicle = "HCA_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {5.90369,0.0869141,0.00143909}; dir = 0;};
                    class Object5	{side = 1; vehicle = "HCA_Unit_Imperial_ST_SGT"; rank = "SERGEANT"; position[] = {-4.45477,0.0517578,0.00143909}; dir = 0;};
                };
                class HCA_Group_ST_Infantry_High_Command
                {
                    name = "Command Team (Stormtroopers)";
                    faction = "HCA_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "HCA_Unit_Imperial_Officer"; rank = "MAJOR"; position[] = {0,0,0.00143909}; dir = 0;};
                    class Object1	{side = 1; vehicle = "HCA_Unit_Imperial_Officer_Armored"; rank = "CAPTAIN"; position[] = {-0.237732,-1.83203,0.00143909}; dir = 0;};
                    class Object2	{side = 1; vehicle = "HCA_Unit_Imperial_Officer_Armored"; rank = "CAPTAIN"; position[] = {1.26782,-1.40112,0.00143909}; dir = 0;};
                    class Object3	{side = 1; vehicle = "HCA_Unit_Imperial_ST_SGT"; rank = "SERGEANT"; position[] = {-0.20575,-3.14429,0.00143909}; dir = 0;};
                    class Object4	{side = 1; vehicle = "HCA_Unit_Imperial_ST_SGT"; rank = "SERGEANT"; position[] = {1.25513,-2.97656,0.00143909}; dir = 0;};
                    class Object5	{side = 1; vehicle = "HCA_Unit_Imperial_ST_CPL"; rank = "CORPORAL"; position[] = {-0.274414,-4.48584,0.00143909}; dir = 0;};
                    class Object6	{side = 1; vehicle = "HCA_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {-0.298584,-6.33594,0.00143909}; dir = 0;};
                    class Object7	{side = 1; vehicle = "HCA_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {-0.320007,-8.18677,0.00143909}; dir = 0;};
                    class Object8	{side = 1; vehicle = "HCA_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {1.22095,-8.30566,0.00143909}; dir = 0;};
                    class Object9	{side = 1; vehicle = "HCA_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {1.29651,-6.41895,0.00143909}; dir = 0;};
                    class Object10	{side = 1; vehicle = "HCA_Unit_Imperial_ST_CPL"; rank = "CORPORAL"; position[] = {1.24353,-4.39697,0.00143909}; dir = 0;};
                    class Object11	{side = 1; vehicle = "HCA_Unit_Imperial_ST_SGM"; rank = "LIEUTENANT"; position[] = {1.42993,-0.0512695,0.00143909}; dir = 0;};
                };
            };
            class Armor
            {
                name = "Armor";
                class HCA_Group_Imperial_ATST
                {
                    name = "AT-ST Platoon";
                    faction = "HCA_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "JMSLLTE_vehgr_ATST_F"; rank = "PRIVATE"; position[] = {0,0,0}; dir = 0;};
                    class Object1	{side = 1; vehicle = "JMSLLTE_vehgr_ATST_F"; rank = "PRIVATE"; position[] = {-6.9151,-6.71533,0}; dir = 0;};
                    class Object2	{side = 1; vehicle = "JMSLLTE_vehgr_ATST_F"; rank = "PRIVATE"; position[] = {6.37946,-6.99316,0}; dir = 0;};
                };
                class HCA_Group_Imperial_ATAT
                {
                    name = "AT-AT Platoon";
                    faction = "HCA_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "3AS_ATAT"; rank = "PRIVATE"; position[] = {0,0,0.00108957}; dir = 0;};
                    class Object1	{side = 1; vehicle = "3AS_ATAT"; rank = "PRIVATE"; position[] = {22.4993,-1.06885,0.00108957}; dir = 0;};
                };
            };
            class Mechanized
            {
                name = "Mechanized";
                class HCA_Group_Imperial_ITT
                {
                    name = "ITT Squad (Stormtroopers)";
                    faction = "HCA_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "HCA_Unit_Imperial_ST_SGT"; rank = "PRIVATE"; position[] = {0,0,0.00143909}; dir = 0;};
                    class Object1	{side = 1; vehicle = "HCA_Unit_Imperial_ST_CPL"; rank = "PRIVATE"; position[] = {0.0839844,-1.63403,0.00143909}; dir = 0;};
                    class Object2	{side = 1; vehicle = "HCA_Unit_Imperial_ST_CPL"; rank = "PRIVATE"; position[] = {1.52698,-1.58594,0.00143909}; dir = 0;};
                    class Object3	{side = 1; vehicle = "HCA_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {1.59509,-3.14722,0.00143909}; dir = 0;};
                    class Object4	{side = 1; vehicle = "HCA_Unit_Imperial_ST_Trooper"; rank = "PRIVATE"; position[] = {0.104004,-2.92188,0.00143909}; dir = 0;};
                    class Object5	{side = 1; vehicle = "HCA_Unit_Imperial_ST_Medic"; rank = "PRIVATE"; position[] = {1.61475,-5.79761,0.00143909}; dir = 0;};
                    class Object6	{side = 1; vehicle = "HCA_Unit_Imperial_ST_AutoRifleman"; rank = "PRIVATE"; position[] = {0.0296631,-5.85596,0.00143909}; dir = 0;};
                    class Object7	{side = 1; vehicle = "HCA_Unit_Imperial_ST_AutoRifleman"; rank = "PRIVATE"; position[] = {-0.0510254,-4.30884,0.00143909}; dir = 0;};
                    class Object8	{side = 1; vehicle = "HCA_Unit_Imperial_ST_AT"; rank = "PRIVATE"; position[] = {1.599,-4.44995,0.00143909}; dir = 0;};
                    class Object9	{side = 1; vehicle = "JMSLLTE_B_veh_ITT_imp_F"; rank = "PRIVATE"; position[] = {-0.0065918,5.34277,0}; dir = 0;};
                };
            };

            class Motorized
            {
                name = "Motorized";
                class HCA_Group_Imperial_Scouts 
                {
                    name = "Bike Team";
                    faction = "HCA_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "JMSLLTE_B_veh_74z_imp_F"; rank = "PRIVATE"; position[] = {0,0,0}; dir = 0;};
                    class Object2	{side = 1; vehicle = "JMSLLTE_B_veh_74z_imp_F"; rank = "PRIVATE"; position[] = {1.81665,-1.94263,0}; dir = 0;};
                };
            };

            class SpecOps
            {
                name = "Special Forces";
                class HCA_Group_Imperial_Recon_Team
                {
                    name = "Recon Team";
                    faction = "HCA_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "HCA_Unit_Imperial_SCT_Trooper"; rank = "PRIVATE"; position[] = {0,0,0.00143909}; dir = 0;};
                    class Object1	{side = 1; vehicle = "HCA_Unit_Imperial_SCT_Trooper"; rank = "PRIVATE"; position[] = {1.23206,-1.02832,0.00143909}; dir = 0;};
                };
            };
        };
    };
};
