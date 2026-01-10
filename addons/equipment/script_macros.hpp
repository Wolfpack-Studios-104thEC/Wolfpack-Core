//Config macro's go here

#define P2_HELMET_RANK_MACRO(scope,name)\
	class GHELMET(phase2_##name##): WPS_Phase_2_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 2 Helmet (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\rank\Phase2##name##_co.paa),QPATHTOF(helmets\data\visor\visor_co.paa)};\
	}

#define P2_HELMET_CUSTOM_MACRO(scope,name)\
	class GHELMET(phase2_##name##): WPS_Phase_2_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 2 Helmet (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\custom\Phase2##name##_co.paa),QPATHTOF(helmets\data\visor\visor_co.paa)};\
	}

	#define P2_HELMET_CUSTOM_GLOW_MACRO(scope,name,color)\
	class GHELMET(phase2_##name##): WPS_Phase_2_Helmet_Base {\
	scope = scope;\
	displayName = QUOTE([104th] Phase 2 Helmet (name));\
	hiddenSelectionsTextures[] = {QPATHTOF(helmets\data\custom\Phase2##name##_co.paa),QPATHTOF(helmets\data\visor\##color#\visor##color##_co.paa)};\
	hiddenSelectionsMaterials[] = {"\WPS\WPS_Helmets\data\Phase2.rvmat", QPATHTOF(helmets\data\visor\##color##\Visor##color##.rvmat)};\
	}