class CfgVehicles {
    class PHOENIX_Infantry_Base;

    class PHOENIX_Reserves_Unarmed: PHOENIX_Infantry_Base {
        scope = public;
        displayName = "Unarmed";
        faction = "PHOENIX_Reserves";
        items[] += {
            "FirstAidKit"
        };
        linkedItems[] += {
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS"
        };
        uniformClass = "PHOENIX_Combat_Fatigues_Black_Splinter";
    };
};