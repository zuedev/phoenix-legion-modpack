class CfgVehicles {
    class PHOENIX_Infantry_Unarmed;

    class PHOENIX_Infantry_Marksman: PHOENIX_Infantry_Unarmed {
        displayName = "Marksman";
        linkedItems[] += {
            "PHOENIX_Combat_Helmet_Medium",
            "PHOENIX_Plate_Carrier_Medium"
        };
        magazines[] = {
            x10("10Rnd_338_Mag"),
            x2("HandGrenade"),
            x2("SmokeShell")
        };
        weapons[] += {"PHOENIX_MAR_DMS"};
    };
};