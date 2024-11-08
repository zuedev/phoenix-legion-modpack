class CfgVehicles {
    class PHOENIX_Infantry_Base;

    class PHOENIX_Wolfpack_Grenadier: PHOENIX_Infantry_Base {
        scope = public;
        displayName = "Grenadier";
        faction = "PHOENIX_Wolfpack";
        linkedItems[] += {
            "PHOENIX_Combat_Helmet_Medium",
            "PHOENIX_Plate_Carrier_Medium"
        };
        backpack = "B_ViperHarness_blk_F";
        magazines[] = {
            x10("30Rnd_556x45_Stanag_Tracer_Red"),
            x6("1Rnd_HE_Grenade_shell"),
            x2("HandGrenade"),
            x2("SmokeShell")
        };
        weapons[] += {"PHOENIX_SPAR_GL_MRCO"};
    };
};