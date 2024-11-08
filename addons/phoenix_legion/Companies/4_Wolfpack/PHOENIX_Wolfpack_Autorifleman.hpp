class CfgVehicles {
    class PHOENIX_Infantry_Base;

    class PHOENIX_Wolfpack_Autorifleman: PHOENIX_Infantry_Base {
        scope = public;
        displayName = "Autorifleman";
        faction = "PHOENIX_Wolfpack";
        linkedItems[] += {
            "PHOENIX_Combat_Helmet_Heavy",
            "PHOENIX_Plate_Carrier_Heavy"
        };
        backpack = "B_ViperHarness_blk_F";
        magazines[] = {
            x5("200Rnd_556x45_Box_Tracer_Red_F"),
            x2("HandGrenade"),
            x2("SmokeShell")
        };
        weapons[] += {"PHOENIX_LIM_MRCO"};
    };
};