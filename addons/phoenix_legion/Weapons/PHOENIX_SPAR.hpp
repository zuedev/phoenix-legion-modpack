class CfgWeapons {
    class arifle_SPAR_01_blk_F;

    class PHOENIX_SPAR: arifle_SPAR_01_blk_F {
        displayName = "Phoenix Legion SPAR";
        baseWeapon = "PHOENIX_SPAR";
    };
    
    class PHOENIX_SPAR_MRCO: PHOENIX_SPAR {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_MRCO";
            };
        };
    };
};