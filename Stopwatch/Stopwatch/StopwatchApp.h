/*	Created by Jonathan Bobrow on 9/19/12.
 *	Copyright 2012 __MyCompanyName__. All rights reserved.
 */

#include "poObject.h"

class StopwatchApp : public poObject {
public:
	StopwatchApp();
	virtual ~StopwatchApp();
	
    virtual void update();
    
    virtual void draw();
	
    virtual void eventHandler(poEvent *event);
	
    virtual void messageHandler(const std::string &msg, const poDictionary& dict=poDictionary());
};

