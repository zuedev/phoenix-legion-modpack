class CfgVehicles {
    class PHOENIX_Infantry_Unarmed;

    class PHOENIX_Infantry_Rifleman: PHOENIX_Infantry_Unarmed {
        displayName = "Rifleman";
        magazines[] = {
            x10("30Rnd_556x45_Stanag_Tracer_Red"),
            x2("HandGrenade"),
            x2("SmokeShell")
        };
        weapons[] += {"PHOENIX_SPAR_MRCO"};
    };
};