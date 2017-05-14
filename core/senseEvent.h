/*
 * senseEvent.h
 * 
 * Event handler for a 'SENSE_EVENT' event.
 */

#ifndef SENSE_EH_H_
#define SENSE_EH_H_

#include "simulator.h"

class SenseEvent : public Event {
public:
	int atNode_; // ID of node where the event was sensed
};

class SenseEventHandler : public Handler {
public:
	virtual void handle(Event*);
	
	
	
};

#endif
