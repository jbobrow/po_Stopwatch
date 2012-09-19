/*	Created by Jonathan Bobrow on 9/19/12.
 *	Copyright 2012 __MyCompanyName__. All rights reserved.
 */

#include "StopwatchApp.h"
#include "poApplication.h"
#include "poCamera.h"


// APP CONSTRUCTOR. Create all objects here.
StopwatchApp::StopwatchApp() {
	addModifier(new poCamera2D(poColor::black));
}

// APP DESTRUCTOR. Delete all objects here.
StopwatchApp::~StopwatchApp() {
}

// UPDATE. Called once per frame. Animate objects here.
void StopwatchApp::update() {
	
}

// DRAW. Called once per frame. Draw objects here.
void StopwatchApp::draw() {
	
}

// EVENT HANDLER. Called when events happen. Respond to events here.
void StopwatchApp::eventHandler(poEvent *event) {
	
}

// MESSAGE HANDLER. Called from within the app. Use for message passing.
void StopwatchApp::messageHandler(const std::string &msg, const poDictionary& dict) {
	
}
