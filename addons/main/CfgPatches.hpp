/*  CfgPatches

    This is what tells the game that this is a mod. One very important note is that the requiredAddons[] property
    essentially acts as a load order. You want your mod to load AFTER the mods it depends on. This is so that the
    dependency doesn't overwrite the mod that depends on it.

    More Info: https://community.bistudio.com/wiki/CfgPatches
*/

class CfgPatches {
    class MyAddon {
        name = "My Addon";
        author = "My Name";
        url = "websiteURLTypicallyGithub.com"

        requiredVersion = 2.16; // whatever current version of arma you are using
        requiredAddons[] = {    // look to what I said above
            "A3_Functions_F"
        };

        units[] = {
            // Any new CfgVehicles classnames here
        };
        weapons[] = {
            // Any new CfgWeapons classnames here
        };
    };
};
