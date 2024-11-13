class CfgVehicles {
    class PHOENIX_Infantry_Unarmed;

    class PHOENIX_Infantry_Rifleman: PHOENIX_Infantry_Unarmed {
        displayName = "Rifleman";
        linkedItems[] += {
            "PHOENIX_Combat_Helmet_Medium",
            "PHOENIX_Plate_Carrier_Medium"
        };
        magazines[] = {
            "30Rnd_556x45_Stanag_Tracer_Red"
        };
        weapons[] += {"PHOENIX_SPAR_MRCO"};
        backpack = "PHOENIX_Infantry_Rifleman_Backpack";
    };

    class B_ViperHarness_blk_F;

    class PHOENIX_Infantry_Rifleman_Backpack: B_ViperHarness_blk_F {
        scope = protected;

        class TransportMagazines {
            class _xx_30Rnd_556x45_Stanag_Tracer_Red {
                magazine = "30Rnd_556x45_Stanag_Tracer_Red";
                count = 10;
            };
            class _xx_HandGrenade {
                magazine = "HandGrenade";
                count = 2;
            };
            class _xx_SmokeShell {
                magazine = "SmokeShell";
                count = 2;
            };
        };
    };
};