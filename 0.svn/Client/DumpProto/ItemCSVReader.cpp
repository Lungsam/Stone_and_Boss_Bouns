#find

#include <math.h>

#add after

#define ENABLE_S_B_SYSTEM

#find

"APPLY_BLEEDING_REDUCE", "APPLY_BLEEDING_PCT", "APPLY_ATTBONUS_WOLFMAN", "APPLY_RESIST_WOLFMAN", "APPLY_RESIST_CLAW",

#after add

#ifdef ENABLE_S_B_SYSTEM
			,"APPLY_ATTBONUS_STONE", "APPLY_ATTBONUS_BOSS"
#endif

#find

string arMRFVRaceFlag[] = {"ANIMAL","UNDEAD","DEVIL","HUMAN","ORC","MILGYO","INSECT","FIRE","ICE","DESERT","TREE",
	"ATT_ELEC","ATT_FIRE","ATT_ICE","ATT_WIND","ATT_EARTH","ATT_DARK"

#add after

#ifdef ENABLE_S_B_SYSTEM
	,"STONE","BOSS"
#endif