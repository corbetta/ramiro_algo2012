#pragma once

#include "ofMain.h"

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

		ofPoint pos;
		ofPoint pos2;
		ofPoint pos3;
		ofPoint pos4;
		float catchUpSpeed;
		float tailCatchUpSpeed;
		float colorMultiplier;
		float bodySize;
		float tail2Size;
		float tail3Size;
		float tail4Size;
		float eyeHeightPre;
		float eyeHeight;
		float totalHeight;
		bool blinking;
		bool blinkClosing;
		int blinkTimer;
		float sinOfTime;
};
