#define COMPONENT diagnostic
#include "\x\cba\addons\main\script_macros.hpp"

#ifdef DEBUG_DIAGNOSTIC
	#define DEBUG_MODE_FULL
#endif

#ifdef DEBUGSETTINGS_DIAGNOSTIC
	#define DEBUGSETTINGS DEBUGSETTINGS_DIAGNOSTIC
#else
	#define DEBUGSETTINGS DEFAULT_DEBUGSETTINGS
#endif
