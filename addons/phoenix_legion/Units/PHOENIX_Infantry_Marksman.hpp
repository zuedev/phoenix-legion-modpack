class CfgVehicles {
    class PHOENIX_Infantry_Unarmed;

    class PHOENIX_Infantry_Marksman: PHOENIX_Infantry_Unarmed {
        displayName = "Marksman";
        magazines[] = {
            "10Rnd_338_Mag"
        };
        weapons[] += {"PHOENIX_MAR_DMS"};
        backpack = "PHOENIX_Infantry_Marksman_Backpack";
    };

    class B_ViperHarness_blk_F;

    class PHOENIX_Infantry_Marksman_Backpack: B_ViperHarness_blk_F {
        scope = protected;

        class TransportMagazines {
            class _xx_10Rnd_338_Mag {
                magazine = "10Rnd_338_Mag";
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