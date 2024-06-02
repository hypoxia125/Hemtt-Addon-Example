#include "script_component.hpp"

/*  XEH_postInit

    This file is run AFTER init is completed. For a mission, its right before the mission starts, after all the vehicles are loaded.
    This is equivalent to running a function with the postInit = 1 tag within CfgFunctions.

    Note about XEH_PREP.hpp:
        It is good to load your XEH_PREP.hpp in both the XEH_preInit and the XEH_postInit. This closes a security vulnerability with
        uiNamespace function caching.
*/

#include "XEH_PREP.hpp"
