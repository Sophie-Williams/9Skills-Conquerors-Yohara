#Search the last } and add before

#ifdef ENABLE_CONQUEROR_LEVEL
	PyModule_AddIntConstant(poModule, "ENABLE_CONQUEROR_LEVEL", 1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_CONQUEROR_LEVEL", 0);
#endif