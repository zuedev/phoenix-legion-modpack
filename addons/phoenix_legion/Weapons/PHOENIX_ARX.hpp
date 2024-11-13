class CfgWeapons {
    class arifle_ARX_blk_F;

    class PHOENIX_ARX: arifle_ARX_blk_F {
        displayName = "Phoenix Legion ARX";
        baseWeapon = "PHOENIX_ARX";
    };
    
    class PHOENIX_ARX_DMS: PHOENIX_ARX {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_DMS";
            };
        };
    };
};