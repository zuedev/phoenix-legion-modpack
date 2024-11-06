class CfgVehicles {
    class B_Survivor_F;

    class PHOENIX_Unsorted_Unarmed: B_Survivor_F {
        displayName = "Unarmed";
        faction = "PHOENIX_Unsorted";
        items[] = {
            "FirstAidKit"
        };
        linkedItems[] = {
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
            "ItemGPS",
            "PHOENIX_Balaclava_With_Combat_Goggles"
        };
        uniformClass = "PHOENIX_Combat_Fatigues_Black_Splinter";

        engineer = 1;
        canDeactivateMines = 1;
        attendant = 1;
        uavHacker = 1;
    };
};