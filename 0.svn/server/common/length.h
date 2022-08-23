#find in (enum ERaceFlags)

	RACE_FLAG_ATT_DARK	= (1 << 16),

#add after

#ifdef ENABLE_S_B_SYSTEM
	RACE_FLAG_STONE		= (1 << 17),
	RACE_FLAG_BOSS			= (1 << 18),
#endif

#find

	APPLY_RESIST_CLAW				= 96,

#add after

#ifdef ENABLE_S_B_SYSTEM
	APPLY_ATTBONUS_STONE				= 97,
	APPLY_ATTBONUS_BOSS				= 98,
#endif


#or 
# if you use martysama!

#find 
	APPLY_RESIST_MAGIC_REDUCTION	= 97,	//97

#add after

#ifdef ENABLE_S_B_SYSTEM
	APPLY_ATTBONUS_STONE				= 98,
	APPLY_ATTBONUS_BOSS				= 99,
#endif
	