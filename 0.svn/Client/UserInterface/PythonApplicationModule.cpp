#find

#ifdef ENABLE_COSTUME_SYSTEM
	PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SYSTEM",	1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SYSTEM",	0);
#endif

#add

#ifdef ENABLE_S_B_SYSTEM
	PyModule_AddIntConstant(poModule, "ENABLE_S_B_SYSTEM",    true);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_S_B_SYSTEM",    false);
#endif
