class CfgPatches {
    class phoenix_legion_acre_patch {
        addonRootClass = "phoenix_legion";
        
        requiredAddons[] = {
            "phoenix_legion",
            "acre_main"
        };
        units[] = {
            "PHOENIX_Unsorted_Unarmed"
        };
        
        skipWhenMissingDependencies = 1;
    };
};

#include "\z\phoenix_legion_modpack\addons\core\macros.hpp"

class CfgVehicles {
    class B_Survivor_F;

    class PHOENIX_Unsorted_Unarmed: B_Survivor_F {
        items[] += {
            "ACRE_PRC343"
        };
    };
};