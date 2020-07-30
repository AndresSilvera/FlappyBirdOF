#pragma once

#include "ofMain.h"

class Pipe {
	public:
        float x, y;
        float height;
        bool collision;
        const float width = 75;
        float speed;
        void setup(float x_in, float y_in);
        void move();
        void draw();
};
