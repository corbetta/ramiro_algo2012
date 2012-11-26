#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){	
	
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
	ofBackground(0,0,0);
	
	
	for (int i = 0; i < 1000; i++){
		particle myParticle;
		float angle = ofRandom(0, 6.28);
		float speed = ofRandom(0, 3);
		float vx = speed * cos(angle);
		float vy = speed * sin(angle);
		int eh = (int)ofRandom(200, 300);
		myParticle.setInitialCondition(300,800,vx, vy, eh);
		// more interesting with diversity :)
		// uncomment this: 
		//myParticle.damping = ofRandom(0.01, 0.05);
		particles.push_back(myParticle);

		angle = ofRandom(0, 6.28);
		speed = ofRandom(0, 3);
		vx = speed * cos(angle);
		vy = speed * sin(angle);
		eh = (int)ofRandom(200, 300);
		myParticle.setInitialCondition(478,1082,vx, vy, eh);
		// more interesting with diversity :)
		// uncomment this: 
		//myParticle.damping = ofRandom(0.01, 0.05);
		particles2.push_back(myParticle);

		angle = ofRandom(0, 6.28);
		speed = ofRandom(0, 3);
		vx = speed * cos(angle);
		vy = speed * sin(angle);
		eh = (int)ofRandom(200, 300);
		myParticle.setInitialCondition(597,913,vx, vy, eh);
		// more interesting with diversity :)
		// uncomment this: 
		//myParticle.damping = ofRandom(0.01, 0.05);
		particles3.push_back(myParticle);
	}
	
}

//--------------------------------------------------------------
void testApp::update(){

	// on every frame 
	// we reset the forces
	// add in any forces on the particle
	// perfom damping and
	// then update
	
	
	for (int i = 0; i < particles.size(); i++){
		particles[i].resetForce();
		//particles[i].addForce(0,0.04);  // gravity
		particles[i].addDampingForce();
		particles[i].update();
		particles2[i].resetForce();
		//particles[i].addForce(0,0.04);  // gravity
		particles2[i].addDampingForce();
		particles2[i].update();
		particles3[i].resetForce();
		//particles[i].addForce(0,0.04);  // gravity
		particles3[i].addDampingForce();
		particles3[i].update();
	}

}

//--------------------------------------------------------------
void testApp::draw(){

	ofSetColor(0x000000);
	
	for (int i = 0; i < particles.size(); i++){
		particles[i].draw();
		particles2[i].draw();
		particles3[i].draw();
	}

}

//--------------------------------------------------------------
void testApp::keyPressed  (int key){ 
}

//--------------------------------------------------------------
void testApp::keyReleased  (int key){ 
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
	/*
	for (int i = 0; i < particles.size(); i++){
		float vx = ofRandom(-4,4);
		float vy = ofRandom(-4,4);
		particles[i].setInitialCondition(mouseX,mouseY,vx, vy);	
	
	}
	*/
}

//--------------------------------------------------------------
void testApp::mouseReleased(){
}
