class CfgPatches {
    class phoenix_legion {
        authors[] = {"Phoenix Legion", "zuedev"};
        authorUrl = "https://phoenix-legion.unnamed.group";
        name = "phoenix_legion";
        requiredAddons[] = {
            "A3_Characters_F",
            "A3_Characters_F_Exp",
            "A3_Characters_F_Exp_Headgear",
            "A3_Characters_F_Orange_Headgear",
            "A3_Characters_F_Enoch",
            "A3_Soft_F_Offroad_01",
            "A3_Soft_F_Enoch_Offroad_01"
        };
        requiredVersion = 2.16;
        units[] = {
            "PHOENIX_Wolfpack_Unarmed",
            "PHOENIX_Wolfpack_Rifleman",
            "PHOENIX_Wolfpack_Grenadier",
            "PHOENIX_Wolfpack_Autorifleman",

            "PHOENIX_Offroad_Black",
            "PHOENIX_Offroad_Black_Splinter",
            "PHOENIX_Offroad_Comms_Black",
            "PHOENIX_Wiesel_AA_Black",
            "PHOENIX_Wiesel_AT_Black",
            "PHOENIX_Wiesel_Cannon_Black"
        };
        weapons[] = {};
    };
};

#include "\z\phoenix_legion_modpack\addons\core\macros.hpp"
#include "CfgFactionClasses.hpp"
#include "Gear/_index.hpp"
#include "Companies/_index.hpp"
#include "Weapons/_index.hpp"
#include "Vehicles/_index.hpp"