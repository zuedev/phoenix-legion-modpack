class CfgWeapons {
    class srifle_DMR_02_ACO_F;

    class PHOENIX_MAR: srifle_DMR_02_ACO_F {
        displayName = "Phoenix Legion MAR";
        baseWeapon = "PHOENIX_MAR";
    };
    
    class PHOENIX_MAR_DMS: PHOENIX_MAR {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_DMS";
            };
        };
    };
};