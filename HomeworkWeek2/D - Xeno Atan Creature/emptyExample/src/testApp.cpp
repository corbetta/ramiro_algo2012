#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofSetVerticalSync(true);
	pos.x = 100;
	pos.y = 50;
	pos2.x = 100;
	pos2.y = 50;
	pos3.x = 100;
	pos3.y = 50;
	pos4.x = 100;
	pos4.y = 50;
	catchUpSpeed = 0.02F;
	tailCatchUpSpeed = 0.1F;
	bodySize = 50;
	colorMultiplier = 1;
	blinking = false;
	blinkClosing = false;
	blinkTimer = 60;
	totalHeight = 10;
	eyeHeight = totalHeight;
	eyeHeightPre = totalHeight;
}

//--------------------------------------------------------------
void testApp::update(){

	//make creature chase the mouse and tail chase the creature
	pos.x = catchUpSpeed * mouseX + (1-catchUpSpeed) * pos.x; 
	pos.y = catchUpSpeed * mouseY + (1-catchUpSpeed) * pos.y;
	pos2.x = tailCatchUpSpeed * pos.x + (1-tailCatchUpSpeed) * pos2.x; 
	pos2.y = tailCatchUpSpeed * pos.y + (1-tailCatchUpSpeed) * pos2.y;
	pos3.x = tailCatchUpSpeed * pos2.x + (1-tailCatchUpSpeed) * pos3.x; 
	pos3.y = tailCatchUpSpeed * pos2.y + (1-tailCatchUpSpeed) * pos3.y;
	pos4.x = tailCatchUpSpeed * pos3.x + (1-tailCatchUpSpeed) * pos4.x; 
	pos4.y = tailCatchUpSpeed * pos3.y + (1-tailCatchUpSpeed) * pos4.y;

	//make creature get a red tint when it's farther from the mouse
	colorMultiplier = 1 - (ofDist(mouseX, mouseY, pos.x, pos.y) / 800);
	if (colorMultiplier < .5) {colorMultiplier = .5F;}
	else if (colorMultiplier > 1) {colorMultiplier = 1;}

	//make creature and tail breathe
	sinOfTime = sin(ofGetElapsedTimef() * 1.5);
	bodySize = ofMap(sinOfTime, -1, 1, 50, 65);
	tail2Size = ofMap(sinOfTime, -1, 1, 15, 25);
	tail3Size = ofMap(sinOfTime, -1, 1, 12, 17);
	tail4Size = ofMap(sinOfTime, -1, 1, 8, 12);

	//makes eyes blink at a random rate
	if(blinking){
		if(blinkClosing){
			eyeHeightPre--;
			if(eyeHeightPre > -1){
				eyeHeight = eyeHeightPre;
			}
			else{
				eyeHeight = 0;
			}
			if(eyeHeightPre < -5){
				blinkClosing = false;
			}
		}
		else{ //if blinking but blinkClosing is false
			eyeHeight++;
			if(eyeHeight > totalHeight){
				eyeHeight = totalHeight;
				eyeHeightPre = totalHeight;
				blinkClosing = true;
				blinking = false;
				blinkTimer = (int)ofRandom(90, 140);
			}
		}
	}
	else{ //if not blinking
		blinkTimer--;
		if(blinkTimer < 1){
			blinking = true;
		}
	}
}

//--------------------------------------------------------------
void testApp::draw(){
	ofSetColor(200 - (200 * colorMultiplier), 0, 0);

	//draw creature
	ofEllipse(pos.x, pos.y, bodySize, bodySize);

	//draw tail
	ofEllipse(pos2.x, pos2.y, tail2Size, tail2Size);
	ofEllipse(pos3.x, pos3.y, tail3Size, tail3Size);
	ofEllipse(pos4.x, pos4.y, tail4Size, tail4Size);

	//draw eyes
	ofSetColor(255);
	ofEllipse(pos.x - 10, pos.y - 10, 10, eyeHeight);
	ofEllipse(pos.x + 10, pos.y - 10, 10, eyeHeight);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}