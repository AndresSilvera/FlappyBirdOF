#include "pipe.h"

//--------------------------------------------------------------
void Pipe::setup(float x_in, float y_in){
    x = x_in;
    y = y_in;
    collision = false;
    if (y != 0){
        height = ((std::rand() % 500) + 100) * -1;
    }
    else{
        height = ((std::rand() % 500) + 100);
    }
    speed = -1 * ((std::rand() % 10) + 5);
}

//--------------------------------------------------------------
void Pipe::draw(){
    ofSetColor(0, 127, 0);
    ofDrawRectangle(x, y, width, height);
}

//--------------------------------------------------------------
void Pipe::move(){  
    if (collision == false){
        x += speed;
    }
    if(x < -width){
        // x = ofGetWidth();
        setup(ofGetWidth(), y);
    }
}