class CfgPatches {
    class phoenix_legion_ctab_patch {
        addonRootClass = "phoenix_legion";
        
        requiredAddons[] = {
            "phoenix_legion",
            "ctab_main"
        };
        units[] = {
            "PHOENIX_Wolfpack_Rifleman"
        };
        
        skipWhenMissingDependencies = 1;
    };
};

#include "\z\phoenix_legion_modpack\addons\core\macros.hpp"

class CfgVehicles {
    class B_Survivor_F;

    class PHOENIX_Reserves_Unarmed: B_Survivor_F {
        items[] += {
            "ItemcTabHCam",
            "ItemAndroidMisc"
        };
    };
};