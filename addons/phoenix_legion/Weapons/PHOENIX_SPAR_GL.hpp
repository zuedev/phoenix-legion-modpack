class CfgWeapons {
    class arifle_SPAR_01_GL_blk_F;

    class PHOENIX_SPAR_GL: arifle_SPAR_01_GL_blk_F {
        displayName = "Phoenix Legion SPAR (GL)";
        baseWeapon = "PHOENIX_SPAR_GL";
    };
    
    class PHOENIX_SPAR_GL_MRCO: PHOENIX_SPAR_GL {
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_MRCO";
            };
        };
    };
};