class CfgPatches 
{
    class HC_AceXArsenal
    {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {};
        author = "Queen";
    };
};

class XtdGearModels
{
    class CamoBase
    {
        class GRN
        {
            label = "Green";
        };
        class BLK
        {
            label = "Black";
        };
        class BLU
        {
            label = "Blue";
        };
        class RED
        {
            label = "Red";
        };
        class BRN 
        {
            label = "Brown"; 
        };
        class CLD
        {
            label = "Cloud";
        };
        class WHTE
        {
            label = "White";
        };
        class DSRT
        {
            label = "Desert";
        };
        class PRPL
        {
            label = "Purple";
        };
        class ENDR 
        {
            label = "Endor";
        };
        class WOD
        {
            label = "Wood";
        };
    };

    class CfgVehicles
    {
        class HC_Rebel_Backpack
        {
            options[] = 
            {
                "camo"
            };
            label = "[HC] Rebel Backpack";
            class camo 
            {
                values[]=
                {
                    "GRN",
                    "BLK"
                };
            };
            alwaysSelectable = 1;
        };
    };

    class CfgWeapons
    {
        class HC_Commando_Helmet
        {
            options[] = 
            {
                "camo"
            };
            label = "[HC] Commando Helmet"
            class camo 
            {
                values[] = 
                {
                    "WOD",
                    "BLK",
                    "CLD",
                    "DSRT",
                    "ENDR"
                };
            };
        };
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        class HC_Commando_Helmet_Endor
        {
            model = "HC_Commando_Helmet_Endor";
            camo = "ENDR";
        };
        class HC_Commando_Helmet_Black
        {
            model = "HC_Commando_Helmet_Endor";
            camo = "BLK";
        };
        class HC_Commando_Helmet_Cloud
        {
            model = "HC_Commando_Helmet_Endor";
            camo = "CLD";
        };
        class HC_Commando_Helmet_Desert
        {
            model = "HC_Commando_Helmet_Endor";
            camo = "DSRT";
        };
        class HC_Commando_Helmet_Wood
        {
            model = "HC_Commando_Helmet_Endor";
            camo = "ENDR";
        };
    };

    class CfgVehicles
    {
        class HC_Rebel_Backpack_Wood
        {
            model = "HC_Rebel_Backpack_Wood";
            camo = "GRN";
        };

        class HC_Rebel_Backpack_Black
        {
            model = "HC_Rebel_Backpack_Wood";
            camo = "BLK";
        };  
    };
};