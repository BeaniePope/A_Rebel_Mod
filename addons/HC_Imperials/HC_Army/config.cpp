class CfgPatches
{
    class HC_Imperials_Army
    {
        name = "HC_Imperials_Army";
        author = "Queen";
        requiredAddons[] = 
        {

        };
        weapons[] =
        {

        };
        units[] = 
        {
            "HC_Unit_Imperial_Army_Trooper_Light",
            "HC_Unit_Imperial_Army_Trooper",
            "HC_Unit_Imperial_Army_Autorifleman",
            "HC_Unit_Imperial_Army_AT",
            "HC_Unit_Imperial_Army_Medic",
            "HC_Unit_Imperial_Army_Shock",
            "HC_Unit_Imperial_Mudtrooper",
            "HC_Unit_Imperial_Mudtrooper_Medic",
            "HC_Unit_Imperial_Mudtrooper_AT",
            "HC_Unit_Imperial_Mudtrooper_Autorifleman"
        };
    };
};

#include "includes.hpp"

class cfgWeapons
{

};

class CfgVehicles
{
    class JMSLLTE_Emp_Army_Trooper;
    class HC_Unit_Imperial_Army_Base: JMSLLTE_Emp_Army_Trooper
    {
        author = "Queen";
        scope = 0;
        side = 1;
        displayName = "[HC] Army Trooper (Dev)";
        faction = "HC_Imperials";
        editorSubcategory = "EdSubcat_Personnel";
        uniformClass = "JMSLLTE_EmpTrooperArmor_army_F_CombatUniform";
    };
    class HC_Unit_Imperial_Army_Trooper_Light: HC_Unit_Imperial_Army_Base
    {
        author = "Queen";
        scope = 2;
        displayName = "[HC] Army Trooper (Light)";
        uniformClass = "JMSLLTE_EmpTrooperSuit_army_F_CombatUniform"
         linkeditems[] = 
        {
            "G_Bandanna_blk",
            "JMSLLTE_EmpTrooper_army_helmet",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "G_Bandanna_blk",
            "JMSLLTE_EmpTrooper_army_helmet",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "JMSLLTE_e10"
        };
        respawnWeapons[] =
        {
            "JMSLLTE_e10"
        };
        magazines[] = 
        {
            MACRO_MAG_x5(JMSLLTE_E11_60Rnd_Mag)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(JMSLLTE_E11_60Rnd_Mag)
        };
    };
    class HC_Unit_Imperial_Army_Trooper: HC_Unit_Imperial_Army_Base
    {
        scope = 2;
        displayName = "[HC] Army Trooper";
        linkeditems[] = 
        {
            "G_Bandanna_blk",
            "JMSLLTE_EmpTrooper_army_helmet",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "G_Bandanna_blk",
            "JMSLLTE_EmpTrooper_army_helmet",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "JMSLLTE_e10"
        };
        respawnWeapons[] =
        {
            "JMSLLTE_e10"
        };
        magazines[] = 
        {
            MACRO_MAG_x5(JMSLLTE_E11_60Rnd_Mag)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(JMSLLTE_E11_60Rnd_Mag)
        };
    };
    class HC_Unit_Imperial_Army_Autorifleman: HC_Unit_Imperial_Army_Base
    {
        scope = 2;
        displayName = "[HC] Army Trooper (MG)";
        backpack = "JMSLLTE_back_crystal_v1";
        linkeditems[] = 
        {
            "G_Bandanna_blk",
            "JMSLLTE_EmpTrooper_army_helmet",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "G_Bandanna_blk",
            "JMSLLTE_EmpTrooper_army_helmet",
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
    class HC_Unit_Imperial_Army_AT: HC_Unit_Imperial_Army_Base
    {
        scope = 2;
        displayName = "[HC] Imperial Army (AT)";
        backpack = "JMSLLTE_back_crystal_v1";
        linkeditems[] = 
        {
            "G_Bandanna_blk",
            "JMSLLTE_EmpTrooper_army_helmet",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "G_Bandanna_blk",
            "JMSLLTE_EmpTrooper_army_helmet",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "JMSLLTE_e10",
            "WM_Launch_PTL"
        };
        respawnWeapons[] =
        {
            "JMSLLTE_e10",
            "WM_Launch_PTL"
        };
        magazines[] = 
        {
            MACRO_MAG_x5(JMSLLTE_E11_60Rnd_Mag),
            MACRO_MAG_x3(WM_ProtonTorpedo)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(JMSLLTE_E11_60Rnd_Mag),
            MACRO_MAG_x3(WM_ProtonTorpedo)
        };
    };
    class HC_Unit_Imperial_Army_Medic: HC_Unit_Imperial_Army_Base
    {
        scope = 2;
        displayName = "[HC] Imperial Army (Medic)";
        backpack = "JMSLLTE_back_crystal_v1";
        uniformClass = "JMSLLTE_EmpTrooperArmor_armyMed_F_CombatUniform";
        linkeditems[] = 
        {
            "G_Bandanna_blk",
            "JMSLLTE_EmpTrooper_army_helmet",
            "FirstAidKit",
            "Medikit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "G_Bandanna_blk",
            "JMSLLTE_EmpTrooper_army_helmet",
            "FirstAidKit",
            "Medikit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "JMSLLTE_e10"
        };
        respawnWeapons[] =
        {
            "JMSLLTE_e10"
        };
        magazines[] = 
        {
            MACRO_MAG_x5(JMSLLTE_E11_60Rnd_Mag)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(JMSLLTE_E11_60Rnd_Mag)
        };
    };
    class HC_Unit_Imperial_Army_Shock: HC_Unit_Imperial_Army_Base
    {
        scope = 2; 
        displayName = "[HC] Imperial Army (Shock)";
        editorSubcategory = "EdSubcat_Personnel_SpecialForces";
        uniformClass = "JMSLLTE_EmpTrooperArmor_black_F_CombatUniform";
        linkeditems[] = 
        {
            "G_Bandanna_blk",
            "WM_Basic_armor",
            "JMSLLTE_EmpTrooper_black_helmet",
            "FirstAidKit",
            "Medikit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "G_Bandanna_blk",
            "WM_Basic_armor",
            "JMSLLTE_EmpTrooper_black_helmet",
            "FirstAidKit",
            "Medikit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "WM_E11"
        };
        respawnWeapons[] =
        {
            "WM_E11"
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
    class HC_Unit_Imperial_Mudtrooper_Base: HC_Unit_Imperial_Army_Base
    {
        author = "Queen";
        scope = 0;
        side = 1;
        displayName = "[HC] Mudtrooper (Dev)";
        faction = "HC_Imperials";
        editorSubcategory = "EdSubcat_Personnel_SpecialForces";
        uniformClass = "JMSLLTE_EmpTrooperArmor_green_F_CombatUniform";
        linkeditems[] = 
        {
            "JMSLLTE_TrooperCapeBelt_armor",
            "JMSLLTE_EmpTrooper_helmet",
            "G_JMSLLTE_TrooperMask_1",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "JMSLLTE_TrooperCapeBelt_armor",
            "JMSLLTE_EmpTrooper_helmet",
            "G_JMSLLTE_TrooperMask_1",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
    };

    class HC_Unit_Imperial_Mudtrooper: HC_Unit_Imperial_Mudtrooper_Base
    {
        scope = 2;
        displayName = "[HC] Mudtrooper";
        weapons[] = 
        {
            "JMSLLTE_e10"
        };
        respawnWeapons[] =
        {
            "JMSLLTE_e10"
        };
        magazines[] = 
        {
            MACRO_MAG_x5(JMSLLTE_E11_60Rnd_Mag)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(JMSLLTE_E11_60Rnd_Mag)
        };
    };
    class HC_Unit_Imperial_Mudtrooper_Medic: HC_Unit_Imperial_Mudtrooper_Base
    {
        scope = 2;
        displayName = "[HC] Mudtrooper (Medic)";
        uniformClass = "JMSLLTE_EmpTrooperArmor_Med_F_CombatUniform";
        backpack = "JMSLLTE_back_crystal_v1";
        linkeditems[] = 
        {
            "JMSLLTE_TrooperCapeBelt_armor",
            "JMSLLTE_EmpTrooper_army_helmet",
            "G_JMSLLTE_TrooperMask_1",
            "FirstAidKit",
            "Medikit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "JMSLLTE_TrooperCapeBelt_armor",
            "JMSLLTE_EmpTrooper_army_helmet",
            "G_JMSLLTE_TrooperMask_1",
            "FirstAidKit",
            "Medikit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "JMSLLTE_e10"
        };
        respawnWeapons[] =
        {
            "JMSLLTE_e10"
        };
        magazines[] = 
        {
            MACRO_MAG_x5(JMSLLTE_E11_60Rnd_Mag)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(JMSLLTE_E11_60Rnd_Mag)
        };
    };
    class HC_Unit_Imperial_Mudtrooper_AT: HC_Unit_Imperial_Mudtrooper_Base
    {
        scope = 2;
        displayName = "[HC] Mudtrooper (AT)";
        backpack = "JMSLLTE_back_crystal_v1";
        weapons[] = 
        {
            "JMSLLTE_e10",
            "WM_Launch_PTL"
        };
        respawnWeapons[] =
        {
            "JMSLLTE_e10",
            "WM_Launch_PTL"
        };
        magazines[] = 
        {
            MACRO_MAG_x5(JMSLLTE_E11_60Rnd_Mag),
            MACRO_MAG_x3(WM_ProtonTorpedo)
        };
        respawnMagazines[] = 
        {
            MACRO_MAG_x5(JMSLLTE_E11_60Rnd_Mag),
            MACRO_MAG_x3(WM_ProtonTorpedo)
        };
    };
    class HC_Unit_Imperial_Mudtrooper_Autorifleman: HC_Unit_Imperial_Mudtrooper_Base
    {
        scope = 2;
        displayName = "[HC] Mudtrooper (MG)";
        backpack = "JMSLLTE_back_crystal_v1";
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
                class HC_Group_Army_Infantry_Squad
                {
                    name = "Infantry Squad";
                    faction = "HC_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0,0,0.00143909}; dir = 180.063;};
                    class Object1	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.0668945,1.87476,0.00143909}; dir = 180.063;};
                    class Object2	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.0537109,4.25049,0.00143909}; dir = 180.063;};
                    class Object3	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.179688,6.11987,0.00143909}; dir = 180.063;};
                    class Object4	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {2.26563,1.36597,0.00143909}; dir = 180.063;};
                    class Object5	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {2.23926,3.97974,0.00143909}; dir = 180.063;};
                    class Object6	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {2.22852,6.58105,0.00143909}; dir = 180.063;};
                    class Object7	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.0483398,8.18188,0.00143909}; dir = 180.063;};
                    class Object8	{side = 1; vehicle = "HC_Unit_Imperial_Army_Autorifleman"; rank = "PRIVATE"; position[] = {-0.0688477,10.853,0.00143909}; dir = 180.173;};
                    class Object9	{side = 1; vehicle = "HC_Unit_Imperial_Army_Medic"; rank = "PRIVATE"; position[] = {2.05811,11.0974,0.00143909}; dir = 180.484;};
                    class Object10	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {2.10742,8.78516,0.00143909}; dir = 180.063;};
                };
                class HC_Group_Army_Weapons_Squad
                {
                    name = "Weapons Squad";
                    faction = "HC_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0,0,0.00143909}; dir = 180.063;};
                    class Object1	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.0668945,1.87476,0.00143909}; dir = 180.063;};
                    class Object2	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.0537109,4.25049,0.00143909}; dir = 180.063;};
                    class Object3	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.179688,6.11987,0.00143909}; dir = 180.063;};
                    class Object4	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {2.26563,1.36597,0.00143909}; dir = 180.063;};
                    class Object5	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {2.23926,3.97974,0.00143909}; dir = 180.063;};
                    class Object6	{side = 1; vehicle = "HC_Unit_Imperial_Army_Autorifleman"; rank = "PRIVATE"; position[] = {-0.0688477,10.853,0.00143909}; dir = 180.173;};
                    class Object7	{side = 1; vehicle = "HC_Unit_Imperial_Army_Medic"; rank = "PRIVATE"; position[] = {2.05811,11.0974,0.00143909}; dir = 180.484;};
                    class Object8	{side = 1; vehicle = "HC_Unit_Imperial_Army_Autorifleman"; rank = "PRIVATE"; position[] = {2.10742,8.78467,0.00143909}; dir = 180.063;};
                    class Object9	{side = 1; vehicle = "HC_Unit_Imperial_Army_Autorifleman"; rank = "PRIVATE"; position[] = {0.0483398,8.18164,0.00143909}; dir = 180.063;};
                    class Object10	{side = 1; vehicle = "HC_Unit_Imperial_Army_AT"; rank = "PRIVATE"; position[] = {2.22803,6.58081,0.00143909}; dir = 180.063;};
                };
                class HC_Group_Army_AT_Team
                {
                    name = "Anti-Tank Team";
                    faction = "HC_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0,0,0.00143909}; dir = 180.572;};
                    class Object1	{side = 1; vehicle = "HC_Unit_Imperial_Army_AT"; rank = "PRIVATE"; position[] = {1.49414,1.43091,0.00143909}; dir = 181.656;};
                    class Object2	{side = 1; vehicle = "HC_Unit_Imperial_Army_AT"; rank = "PRIVATE"; position[] = {-1.25586,1.45117,0.00143909}; dir = 181.656;};
                };
                class HC_Group_Army_Patrol
                {
                    name = "4x Patrol Team";
                    faction = "HC_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0,0,0.00143909}; dir = 180.063;};
                    class Object1	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.0668945,1.87476,0.00143909}; dir = 180.063;};
                    class Object2	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.0537109,4.25049,0.00143909}; dir = 180.063;};
                    class Object3	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.179688,6.11987,0.00143909}; dir = 180.063;};
                };
            };
            class Mechanized
            {
                name = "Mechanized";
                class HC_Group_Imperial_ITT_Army
                {
                    name = "ITT Squad";
                    faction = "HC_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "JMSLLTE_B_veh_ITT_imp_F"; rank = "PRIVATE"; position[] = {-1,-1,0}; dir = 180;};
                    class Object0	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0,0,0.00143909}; dir = 180.063;};
                    class Object1	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.0668945,1.87476,0.00143909}; dir = 180.063;};
                    class Object2	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.0537109,4.25049,0.00143909}; dir = 180.063;};
                    class Object3	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.179688,6.11987,0.00143909}; dir = 180.063;};
                    class Object4	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {2.26563,1.36597,0.00143909}; dir = 180.063;};
                    class Object5	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {2.23926,3.97974,0.00143909}; dir = 180.063;};
                    class Object6	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {2.22852,6.58105,0.00143909}; dir = 180.063;};
                    class Object7	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.0483398,8.18188,0.00143909}; dir = 180.063;};
                    class Object8	{side = 1; vehicle = "HC_Unit_Imperial_Army_Autorifleman"; rank = "PRIVATE"; position[] = {-0.0688477,10.853,0.00143909}; dir = 180.173;};
                    class Object9	{side = 1; vehicle = "HC_Unit_Imperial_Army_Medic"; rank = "PRIVATE"; position[] = {2.05811,11.0974,0.00143909}; dir = 180.484;};
                    class Object10	{side = 1; vehicle = "HC_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {2.10742,8.78516,0.00143909}; dir = 180.063;};
                };
            };
        };
    };
};