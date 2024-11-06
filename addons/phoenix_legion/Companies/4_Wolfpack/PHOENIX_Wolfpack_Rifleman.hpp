class CfgVehicles {
    class PHOENIX_Unsorted_Unarmed;

    class PHOENIX_Wolfpack_Rifleman: PHOENIX_Unsorted_Unarmed {
        displayName = "Rifleman";
        faction = "PHOENIX_Wolfpack";
        linkedItems[] += {
            "PHOENIX_Combat_Helmet_Medium",
            "PHOENIX_Plate_Carrier_Medium"
        };
        backpack = "B_ViperHarness_blk_F";
        magazines[] = {
            x10("30Rnd_556x45_Stanag_Tracer_Red"),
            x2("HandGrenade"),
            x2("SmokeShell")
        };
        weapons[] += {"PHOENIX_SPAR_MRCO"};
    };
};