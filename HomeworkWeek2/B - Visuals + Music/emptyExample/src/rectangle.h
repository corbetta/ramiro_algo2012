#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "ofMain.h"

class rectangle
{
public:
	rectangle();
	void setup();
	void update();
	void draw();

	ofPoint pos;
	ofPoint size;
	int r;
	int g;
	int b;

};

#endif // RECTANGLE_H