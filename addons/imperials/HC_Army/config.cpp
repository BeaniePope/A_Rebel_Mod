class CfgPatches
{
    class HCA_Imperials_Army
    {
        name = "HCA_Imperials_Army";
        author = "Queen";
        requiredAddons[] = 
        {
            
        };
        weapons[] =
        {

        };
        units[] = 
        {
            "HCA_Unit_Imperial_Army_Trooper_Light",
            "HCA_Unit_Imperial_Army_Trooper",
            "HCA_Unit_Imperial_Army_Autorifleman",
            "HCA_Unit_Imperial_Army_AT",
            "HCA_Unit_Imperial_Army_Medic",
            "HCA_Unit_Imperial_Army_Shock",
            "HCA_Unit_Imperial_Mudtrooper",
            "HCA_Unit_Imperial_Mudtrooper_Medic",
            "HCA_Unit_Imperial_Mudtrooper_AT",
            "HCA_Unit_Imperial_Mudtrooper_Autorifleman"
        };
    };
};

#include "includes.hpp"

class CfgVehicles
{
    class B_MTF_Uniform1;
    class HCA_Unit_Imperial_Army_Base: B_MTF_Uniform1
    {
        author = "Queen";
        scope = 0;
        side = 1;
        displayName = "[HCA] Army Trooper (Dev)";
        faction = "HCA_Imperials";
        editorSubcategory = "EdSubcat_Personnel";
        uniformClass = "U_MTF_Uniform1";
    };
    class HCA_Unit_Imperial_Army_Trooper_Light: HCA_Unit_Imperial_Army_Base
    {
        author = "Queen";
        scope = 2;
        displayName = "[HCA] Army Trooper (Light)";
        uniformClass = "U_MTF_Uniform1";
        linkeditems[] = 
        {
            "ls_imperialVest_army",
            "G_Bandanna_blk",
            "ls_imperialHelmet_army",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "ls_imperialVest_army",
            "G_Bandanna_blk",
            "ls_imperialHelmet_army",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "IDA_E10"
        };
        respawnWeapons[] =
        {
            "IDA_E10"
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
    class HCA_Unit_Imperial_Army_Trooper: HCA_Unit_Imperial_Army_Base
    {
        scope = 2;
        displayName = "[HCA] Army Trooper";
        uniformClass = "U_MTF_Uniform1";
        linkeditems[] = 
        {
            "ls_imperialVest_army",
            "G_Bandanna_blk",
            "ls_imperialHelmet_army",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "ls_imperialVest_army",
            "G_Bandanna_blk",
            "ls_imperialHelmet_army",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "IDA_E10"
        };
        respawnWeapons[] =
        {
            "IDA_E10"
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
    class HCA_Unit_Imperial_Army_Autorifleman: HCA_Unit_Imperial_Army_Base
    {
        scope = 2;
        displayName = "[HCA] Army Trooper (MG)";
        uniformClass = "U_MTF_Uniform1";
        backpack = "JMSLLTE_back_crystal_v1";
        linkeditems[] = 
        {
            "ls_imperialVest_army",
            "G_Bandanna_blk",
            "ls_imperialHelmet_army",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "ls_imperialVest_army",
            "G_Bandanna_blk",
            "ls_imperialHelmet_army",
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
    class HCA_Unit_Imperial_Army_AT: HCA_Unit_Imperial_Army_Base
    {
        scope = 2;
        displayName = "[HCA] Imperial Army (AT)";
        uniformClass = "U_MTF_Uniform1";
        backpack = "JMSLLTE_back_crystal_v1";
        linkeditems[] = 
        {
            "ls_imperialVest_army",
            "G_Bandanna_blk",
            "ls_imperialHelmet_army",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "ls_imperialVest_army",
            "G_Bandanna_blk",
            "ls_imperialHelmet_army",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "IDA_E10",
            "ls_weapon_plx1_at"
        };
        respawnWeapons[] =
        {
            "IDA_E10",
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
    class HCA_Unit_Imperial_Army_Medic: HCA_Unit_Imperial_Army_Base
    {
        scope = 2;
        displayName = "[HCA] Imperial Army (Medic)";
        backpack = "JMSLLTE_back_crystal_v1";
        uniformClass = "U_MTF_Uniform1";
        linkeditems[] = 
        {
            "ls_imperialVest_army",
            "G_Bandanna_blk",
            "ls_imperialHelmet_army",
            "FirstAidKit",
            "Medikit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "ls_imperialVest_army",
            "G_Bandanna_blk",
            "ls_imperialHelmet_army",
            "FirstAidKit",
            "Medikit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "IDA_E10"
        };
        respawnWeapons[] =
        {
            "IDA_E10"
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
    class HCA_Unit_Imperial_Army_Shock: HCA_Unit_Imperial_Army_Base
    {
        scope = 2; 
        displayName = "[HCA] Imperial Army (Shock)";
        editorSubcategory = "EdSubcat_Personnel_SpecialForces";
        uniformClass = "JMSLLTE_EmpTrooperArmor_black_F_CombatUniform";
        linkeditems[] = 
        {
            "ls_imperialVest_army",
            "G_Bandanna_blk",
            "",
            "JMSLLTE_EmpTrooper_black_helmet",
            "FirstAidKit",
            "Medikit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        respawnLinkeditems[] = 
        {
            "ls_imperialVest_army",
            "G_Bandanna_blk",
            "",
            "JMSLLTE_EmpTrooper_black_helmet",
            "FirstAidKit",
            "Medikit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "IDA_E11"
        };
        respawnWeapons[] =
        {
            "IDA_E11"
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
    class HCA_Unit_Imperial_Mudtrooper_Base: HCA_Unit_Imperial_Army_Base
    {
        author = "Queen";
        scope = 0;
        side = 1;
        displayName = "[HCA] Mudtrooper (Dev)";
        faction = "HCA_Imperials";
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

    class HCA_Unit_Imperial_Mudtrooper: HCA_Unit_Imperial_Mudtrooper_Base
    {
        scope = 2;
        displayName = "[HCA] Mudtrooper";
        weapons[] = 
        {
            "IDA_E10"
        };
        respawnWeapons[] =
        {
            "IDA_E10"
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
    class HCA_Unit_Imperial_Mudtrooper_Medic: HCA_Unit_Imperial_Mudtrooper_Base
    {
        scope = 2;
        displayName = "[HCA] Mudtrooper (Medic)";
        uniformClass = "JMSLLTE_EmpTrooperArmor_Med_F_CombatUniform";
        backpack = "JMSLLTE_back_crystal_v1";
        linkeditems[] = 
        {
            "JMSLLTE_TrooperCapeBelt_armor",
            "ls_imperialHelmet_army",
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
            "ls_imperialHelmet_army",
            "G_JMSLLTE_TrooperMask_1",
            "FirstAidKit",
            "Medikit",
            "ItemMap",
            "ItemCompass",
            "ItemRadio"
        };
        weapons[] = 
        {
            "IDA_E10"
        };
        respawnWeapons[] =
        {
            "IDA_E10"
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
    class HCA_Unit_Imperial_Mudtrooper_AT: HCA_Unit_Imperial_Mudtrooper_Base
    {
        scope = 2;
        displayName = "[HCA] Mudtrooper (AT)";
        backpack = "JMSLLTE_back_crystal_v1";
        weapons[] = 
        {
            "IDA_E10",
            "ls_weapon_plx1_at"
        };
        respawnWeapons[] =
        {
            "IDA_E10",
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
    class HCA_Unit_Imperial_Mudtrooper_Autorifleman: HCA_Unit_Imperial_Mudtrooper_Base
    {
        scope = 2;
        displayName = "[HCA] Mudtrooper (MG)";
        backpack = "JMSLLTE_back_crystal_v1";
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
                class HCA_Group_Army_Infantry_Squad
                {
                    name = "Infantry Squad";
                    faction = "HCA_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0,0,0.00143909}; dir = 180.063;};
                    class Object1	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.0668945,1.87476,0.00143909}; dir = 180.063;};
                    class Object2	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.0537109,4.25049,0.00143909}; dir = 180.063;};
                    class Object3	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.179688,6.11987,0.00143909}; dir = 180.063;};
                    class Object4	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {2.26563,1.36597,0.00143909}; dir = 180.063;};
                    class Object5	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {2.23926,3.97974,0.00143909}; dir = 180.063;};
                    class Object6	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {2.22852,6.58105,0.00143909}; dir = 180.063;};
                    class Object7	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.0483398,8.18188,0.00143909}; dir = 180.063;};
                    class Object8	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Autorifleman"; rank = "PRIVATE"; position[] = {-0.0688477,10.853,0.00143909}; dir = 180.173;};
                    class Object9	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Medic"; rank = "PRIVATE"; position[] = {2.05811,11.0974,0.00143909}; dir = 180.484;};
                    class Object10	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {2.10742,8.78516,0.00143909}; dir = 180.063;};
                };
                class HCA_Group_Army_Weapons_Squad
                {
                    name = "Weapons Squad";
                    faction = "HCA_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0,0,0.00143909}; dir = 180.063;};
                    class Object1	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.0668945,1.87476,0.00143909}; dir = 180.063;};
                    class Object2	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.0537109,4.25049,0.00143909}; dir = 180.063;};
                    class Object3	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.179688,6.11987,0.00143909}; dir = 180.063;};
                    class Object4	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {2.26563,1.36597,0.00143909}; dir = 180.063;};
                    class Object5	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {2.23926,3.97974,0.00143909}; dir = 180.063;};
                    class Object6	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Autorifleman"; rank = "PRIVATE"; position[] = {-0.0688477,10.853,0.00143909}; dir = 180.173;};
                    class Object7	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Medic"; rank = "PRIVATE"; position[] = {2.05811,11.0974,0.00143909}; dir = 180.484;};
                    class Object8	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Autorifleman"; rank = "PRIVATE"; position[] = {2.10742,8.78467,0.00143909}; dir = 180.063;};
                    class Object9	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Autorifleman"; rank = "PRIVATE"; position[] = {0.0483398,8.18164,0.00143909}; dir = 180.063;};
                    class Object10	{side = 1; vehicle = "HCA_Unit_Imperial_Army_AT"; rank = "PRIVATE"; position[] = {2.22803,6.58081,0.00143909}; dir = 180.063;};
                };
                class HCA_Group_Army_AT_Team
                {
                    name = "Anti-Tank Team";
                    faction = "HCA_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0,0,0.00143909}; dir = 180.572;};
                    class Object1	{side = 1; vehicle = "HCA_Unit_Imperial_Army_AT"; rank = "PRIVATE"; position[] = {1.49414,1.43091,0.00143909}; dir = 181.656;};
                    class Object2	{side = 1; vehicle = "HCA_Unit_Imperial_Army_AT"; rank = "PRIVATE"; position[] = {-1.25586,1.45117,0.00143909}; dir = 181.656;};
                };
                class HCA_Group_Army_Patrol
                {
                    name = "4x Patrol Team";
                    faction = "HCA_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0,0,0.00143909}; dir = 180.063;};
                    class Object1	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.0668945,1.87476,0.00143909}; dir = 180.063;};
                    class Object2	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.0537109,4.25049,0.00143909}; dir = 180.063;};
                    class Object3	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.179688,6.11987,0.00143909}; dir = 180.063;};
                };
            };
            class Mechanized
            {
                name = "Mechanized";
                class HCA_Group_Imperial_ITT_Army
                {
                    name = "ITT Squad";
                    faction = "HCA_Imperials";
                    side = 1;
                    class Object0	{side = 1; vehicle = "JMSLLTE_B_veh_ITT_imp_F"; rank = "PRIVATE"; position[] = {-1,-1,0}; dir = 180;};
                    class Object1	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0,0,0.00143909}; dir = 180.063;};
                    class Object2	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.0668945,1.87476,0.00143909}; dir = 180.063;};
                    class Object3	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.0537109,4.25049,0.00143909}; dir = 180.063;};
                    class Object4	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.179688,6.11987,0.00143909}; dir = 180.063;};
                    class Object5	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {2.26563,1.36597,0.00143909}; dir = 180.063;};
                    class Object6	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {2.23926,3.97974,0.00143909}; dir = 180.063;};
                    class Object7	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {2.22852,6.58105,0.00143909}; dir = 180.063;};
                    class Object8	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {0.0483398,8.18188,0.00143909}; dir = 180.063;};
                    class Object9	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Autorifleman"; rank = "PRIVATE"; position[] = {-0.0688477,10.853,0.00143909}; dir = 180.173;};
                    class Object10	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Medic"; rank = "PRIVATE"; position[] = {2.05811,11.0974,0.00143909}; dir = 180.484;};
                    class Object11	{side = 1; vehicle = "HCA_Unit_Imperial_Army_Trooper"; rank = "PRIVATE"; position[] = {2.10742,8.78516,0.00143909}; dir = 180.063;};
                };
            };
        };
    };
};
