#ifndef PARTICLE_H
#define PARTICLE_H

#include "ofMain.h"

class particle
{
    public:
        ofVec2f pos;
        ofVec2f vel;
        ofVec2f frc;   // frc is also know as acceleration (newton says "f=ma")
			
        particle();
		virtual ~particle(){};

        void resetForce();
        void addForce(float x, float y);
        void addDampingForce();
        void setInitialCondition(float px, float py, float vx, float vy, int eh);
        void update();
        void draw();
	
		float damping;
		int state;
		int alpha;
		ofColor myColor;
		int originalX;
		int originalY;
		int explodeHeight;

    protected:
    private:
};

#endif // PARTICLE_H
