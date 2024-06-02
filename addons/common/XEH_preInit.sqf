#include "script_component.hpp"

/*  XEH_preInit

    This file is run BEFORE init is completed. For a mission, its before all object init fields and expressions of EDEN Editor attributes are called.
    This is equivalent to running a function with the preInit = 1 tag within CfgFunctions.

    This is a useful place to put your CBA events (CBA_fnc_addEventHandler)

    Note about XEH_PREP.hpp:
        It is good to load your XEH_PREP.hpp in both the XEH_preInit and the XEH_postInit. This closes a security vulnerability with
        uiNamespace function caching.
*/

#include "XEH_PREP.hpp"
