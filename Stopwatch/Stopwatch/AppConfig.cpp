/////////////////////////////////////////
//
// pocode application configuration
//
/////////////////////////////////////////


#include "poApplication.h"
#include "StopwatchApp.h"

poObject *createObjectForID(uint uid) {
	return new StopwatchApp();
}

void setupApplication() {
	applicationCreateWindow(0, WINDOW_TYPE_NORMAL, "Stopwatch", 100, 100, 1024, 768);
}

void cleanupApplication() {
}