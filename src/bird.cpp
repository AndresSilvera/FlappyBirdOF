#include "bird.h"

//--------------------------------------------------------------
void Bird::setup(){
    x = 150;
    y = 50;
    y_vel = 0;
    radius = 25;
    is_flying = true;
}

//--------------------------------------------------------------
void Bird::draw(){
    ofSetColor(255, 255, 0);
    ofDrawCircle(x, y, radius);
    if(is_flying == true){
        ofSetBackgroundColor(0,0,0);
    }else{
        ofSetBackgroundColor(127,0,0);
    }
}

//--------------------------------------------------------------
void Bird::update(){
    
    y_vel += gravity;
    y += y_vel;

    if(y + radius > ofGetHeight()){
        y = ofGetHeight() - radius;
        y_vel = 0;
        is_flying = false;
    }
}

//--------------------------------------------------------------
void Bird::jump(){
    if(is_flying == true){
        y_vel += lift;
    }
}

