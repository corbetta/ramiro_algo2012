#pragma once

#include "ofMain.h"
#include "rectangle.h"

class testApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		rectangle r1;
		rectangle r2;
		rectangle r3;
		rectangle r4;
		rectangle r5;
		rectangle r6;
		rectangle r7;
		rectangle r8;
		rectangle r9;
		rectangle r10;
		rectangle r11;
		rectangle r12;
		rectangle r13;
		rectangle r14;
		rectangle r15;
		rectangle r16;
		rectangle r17;
		rectangle r18;
		rectangle r19;
		rectangle r20;
		rectangle r21;
		rectangle r22;
		rectangle r23;
		rectangle r24;
		rectangle r25;
		rectangle r26;
		rectangle r27;
		rectangle r28;
		rectangle r29;

};
