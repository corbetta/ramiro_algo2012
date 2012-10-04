#include "rectangle.h"


rectangle::rectangle(void)
{
	pos.x = ofRandom(-50, 900);
	pos.y = ofRandom(-50, 700); 
	size.x = ofRandom(30, 40);
	size.y = ofRandom(30, 40);
}

void rectangle::setup(){
	pos.x = ofRandom(-50, 900);
	pos.y = ofRandom(-50, 700); 
	size.x = ofRandom(15, 20);
	size.y = size.x;
	r = 150;
	g = 150;
	b = 150;
}

void rectangle::update(){
	pos.x += ofRandom(-2, 2);
	pos.y += ofRandom(-2, 2);
	size.x += sin(ofGetElapsedTimef() * 2)/100;
	size.y += sin(ofGetElapsedTimef() * 2)/100;
	r = ofRandom(50, 150);
	g = ofRandom(30, 50);
	b = ofRandom(50, 150);
}

void rectangle::draw() {
	ofSetColor(r, 40, b);
	int ran = ofRandom(0, 100);
	if(ran < 5){
		ofEllipse(pos.x, pos.y, size.x, size.y);
	}
	else{
	ofRect(pos.x, pos.y, size.x, size.y);
	}

}