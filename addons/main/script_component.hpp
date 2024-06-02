/*  Component Naming

    This allows the macros inside of this addon to point to itself. Things like GVAR(). This is so variables
    don't get mixed up between addons

    Example: GVAR(myVariable) returns MOD_COMPONENT_myVariable
*/
#define COMPONENT   main

//  Import your script_mod.hpp from this same addon. You will now use this script_component to reference your macros
//  for this addon
#include "\x\MyMod\addons\main\script_mod.hpp"
