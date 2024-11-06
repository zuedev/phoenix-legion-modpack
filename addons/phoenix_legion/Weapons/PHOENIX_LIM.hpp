class CfgWeapons {
    class LMG_03_F;

    class PHOENIX_LIM: LMG_03_F {
        displayName = "Phoenix Legion LIM";
        baseWeapon = "PHOENIX_LIM";
    };
    
    class PHOENIX_LIM_MRCO: PHOENIX_LIM {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_MRCO";
            };
        };
    };
};