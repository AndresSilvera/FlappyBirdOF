#pragma once

#include "ofMain.h"

class Bird {

	public:
        float y;
        float x;
        float radius;
        const float gravity = 1;
        const float lift = -20;
        float y_vel;
        bool is_flying;
        void setup();
        void jump();
        void update();
        void draw();
};
