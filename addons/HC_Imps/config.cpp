class CfgPatches
{
    class HC_Imps
    {
        name="HC_Imperial"
        author="Greg"
        requiredAddons[]=
        {
            "JMSLLTE_empire"
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
    class UniformItem;
    class JMSLLTE_StormTrooper_dirty_F_CombatUniform;
    class HC_Imps_ST_Base: JMSLLTE_StormTrooper_dirty_F_CombatUniform
    {
        author="Greg";
		scope=2;
        displayName="[HC] Stormtrooper Uniform";
        class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SW1KG_CIS_Base_B1_Droid";
			containerClass="Supply150";
			mass=100;
		};
    }
};