/*  Mod Name Macros

    Should be the same as what you put in project.toml
*/
#define MAINPREFIX  x
#define PREFIX      myAddon

// Import your cba macros (these have to exist in the includes folder in the root of the mod for HEMTT to pack correctly)
#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

/*  Function Caching System

    Allows you to use the function cache system. If disabled, then functions can be updated on every load of a new mission start.
    Useful for debugging and editing

    The PREP system is also changed from default CBA to look for files named with fn_myFunction.sqf like default arma instead of fnc_myFunction.sqf
*/

// #define DISABLE_COMPILE_CACHE
#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif
