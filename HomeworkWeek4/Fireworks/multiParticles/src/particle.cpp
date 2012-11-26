#include "particle.h"
#include "ofMain.h"


//------------------------------------------------------------
particle::particle(){
	setInitialCondition(0,0,0,0,0);
	damping = 0;
	alpha = 250;
	state = 1;
	myColor.r = ofRandom(0, 255);
	myColor.g = ofRandom(0, 255);
	myColor.b = ofRandom(0, 255);
}

//------------------------------------------------------------
void particle::resetForce(){
    // we reset the forces every frame
    frc.set(0,0);
}

//------------------------------------------------------------
void particle::addForce(float x, float y){
    // add in a force in X and Y for this frame.
    frc.x = frc.x + x;
    frc.y = frc.y + y;
}

//------------------------------------------------------------
void particle::addDampingForce(){
	
	// the usual way to write this is  vel *= 0.99
	// basically, subtract some part of the velocity 
	// damping is a force operating in the oposite direction of the 
	// velocity vector
	
    frc.x = frc.x - vel.x * damping;
    frc.y = frc.y - vel.y * damping;
}

//------------------------------------------------------------
void particle::setInitialCondition(float px, float py, float vx, float vy, int eh){
    pos.set(px,py);
	vel.set(vx,vy);
	originalX = (int)px;
	originalY = (int)py;
	explodeHeight = eh;
}

//------------------------------------------------------------
void particle::update(){
	if(state == 1){
		pos.y -= 10;
		if (pos.y < explodeHeight){
			state = 2;
		}
	}
	if (state == 2){
		vel = vel + frc;
		pos = pos + vel;
		alpha -= 2;
		myColor = ofColor(myColor, alpha);
		if (alpha < 10){
			state = 1;
			alpha = 250;
			pos.x = originalX;
			pos.y = originalY;
		}
	}
}

//------------------------------------------------------------
void particle::draw(){
	ofSetColor(myColor);
    ofCircle(pos.x, pos.y, 1);
}

