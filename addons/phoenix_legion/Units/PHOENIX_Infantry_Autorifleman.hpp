class CfgVehicles {
    class PHOENIX_Infantry_Unarmed;

    class PHOENIX_Infantry_Autorifleman: PHOENIX_Infantry_Unarmed {
        displayName = "Autorifleman";
        magazines[] = {
            x5("200Rnd_556x45_Box_Tracer_Red_F"),
            x2("HandGrenade"),
            x2("SmokeShell")
        };
        weapons[] += {"PHOENIX_LIM_MRCO"};
    };
};