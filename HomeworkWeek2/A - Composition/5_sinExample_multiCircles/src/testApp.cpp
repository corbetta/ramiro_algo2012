#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
	ofSetVerticalSync(true);
	
	ofBackground(0,0,0);
	
	ofSetCircleResolution(100);

	timer = 0;

}

//--------------------------------------------------------------
void testApp::update(){
	
	
	

}

//--------------------------------------------------------------
void testApp::draw(){
	
	float xorig = ofGetWidth()/2;
	float yorig = ofGetHeight()/2;
	
	for (int i = 0; i < 20; i++){
	
		float radius = 50 + i * 20;
		float angle = ofGetElapsedTimef() * (1 + i / 10.0);
		float x = xorig + radius * cos(angle);
		float y = yorig + radius * -sin(angle);
		
		ofSetRectMode(OF_RECTMODE_CENTER);
		ofSetColor(255,200,255);
		ofEllipse(x,y,6,6);
	
	}	

	for (int i = 0; i < 10; i++){
	
		float radius = 50 + i * 20;
		float angle = ofGetElapsedTimef() * (1 + i / 5.0);
		float x = xorig + radius * cos(angle);
		float y = yorig + radius * -sin(angle);
		
		ofSetRectMode(OF_RECTMODE_CENTER);
		ofSetColor(255,200,255);
		ofEllipse(x,y,6,6);
	
	}	

	for (int i = 0; i < 10; i++){
	
		float radius = 50 + i * 20;
		float angle = ofGetElapsedTimef() * (1 + i / 2.5);
		float x = xorig + radius * cos(angle);
		float y = yorig + radius * -sin(angle);
		
		ofSetRectMode(OF_RECTMODE_CENTER);
		ofSetColor(255,200,255);
		ofEllipse(x,y,6,6);
	
	}	

	if(timer < 240){
		timer++;
	}
	else{

		for(int i = 0; i < 20; i++){
			float radius = 100 * sin(ofGetElapsedTimef());
			float angle = i*(3.14/20) * ofGetElapsedTimef();

			float x = xorig + radius * cos(angle);
			float y = yorig + radius * -sin(angle);

			ofSetRectMode(OF_RECTMODE_CENTER);
			ofSetColor(255,200,255);
			ofEllipse(x,y,5,5);
		}

		for(int i = 0; i < 20; i++){
			float radius = 200 * sin(ofGetElapsedTimef());
			float angle = i*(3.14/20) * ofGetElapsedTimef();

			float x = xorig + radius * -cos(angle);
			float y = yorig + radius * sin(angle);

			ofSetRectMode(OF_RECTMODE_CENTER);
			ofSetColor(255,200,255);
			ofEllipse(x,y,5,5);
		}

		for(int i = 0; i < 20; i++){
			float radius = 300 * sin(ofGetElapsedTimef());
			float angle = i*(3.14/20) * ofGetElapsedTimef();

			float x = xorig + radius * cos(angle);
			float y = yorig + radius * -sin(angle);

			ofSetRectMode(OF_RECTMODE_CENTER);
			ofSetColor(255,200,255);
			ofEllipse(x,y,5,5);
		}

		for(int i = 0; i < 20; i++){
			float radius = 400 * sin(ofGetElapsedTimef());
			float angle = i*(3.14/20) * ofGetElapsedTimef();

			float x = xorig + radius * -cos(angle);
			float y = yorig + radius * sin(angle);

			ofSetRectMode(OF_RECTMODE_CENTER);
			ofSetColor(255,200,255);
			ofEllipse(x,y,5,5);
		}
	}
		
	
	

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

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

