class CfgPatches
{
    class HC_Imps_ST
    {
        name="HC_Imperial"
        author="Greg"
        requiredAddons[]=
        {
            "JMSLLTE_empire",
            "JMSLLTE_factions"
        };
        weapons[]=
        {
            "HC_Imps_ST_Base_U"
        };
        units[]=
        {
            "HC_Imps_ST_Base"
        };
    };
};
class CfgFactionClasses
{
    class HC_Imperials
    {
		displayName="[HC] Imperial Faction";
		author="SW 1st KG";
		flag="\a3\Data_f\Flags\flag_nato_co.paa";
		icon="";
		priority=1;
		side=1;
	};
};
class CfgEditorSubcategories
{
    class HC_STcore
    {
        displayname="[Imps] Stormtroopers";
    };
};
class CfgWeapons
{
    ///helmets
    class JMSLLTE_Stormtrooper_dirty_H_helmet;
    class HC_imps_ST_Base_H: JMSLLTE_Stormtrooper_dirty_H_helmet
    {
        author="Greg";
		scope=2;
        displayName="[HC] Stormtrooper Helmet";
    };
    ///vests
    class JMSLLTE_StormtrooperHidden_armor;
    class HC_Imps_ST_Vest_hidden: JMSLLTE_StormtrooperHidden_armor
    {
        author="Greg";
		scope=2;
        displayName="[HC] Stormtrooper Vest (invisible)";
    }
    ///uniforms
    class UniformItem;
    class JMSLLTE_StormTrooper_dirty_F_CombatUniform;
    class HC_Imps_ST_Base_U: JMSLLTE_StormTrooper_dirty_F_CombatUniform
    {
        author="Greg";
		scope=2;
        displayName="[HC] Stormtrooper Uniform";
        class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="HC_Imps_ST_Base";
			containerClass="Supply150";
			mass=100;
		};
    };
};
class CfgVehicles
{
    class JMSLLTE_StormTrooper_dirty_F;
    class HC_Imps_ST_Base: JMSLLTE_StormTrooper_dirty_F
    {
        author="greg";
        scope=2;
        side = 1;
        faction="HC_Imperials"
        editorSubcategory="HC_STcore";
        displayName="[HC] Stormtrooper";
        uniformClass="HC_Imps_ST_Base_U";
    };

};