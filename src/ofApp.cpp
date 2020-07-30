#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    std::srand(std::time(nullptr)); // use current time as seed for random generator
    ofBackground(0, 0, 0);
    B.setup();

    Pipes[0].setup(ofGetWidth(), ofGetHeight());
    Pipes[1].setup(1.5*ofGetWidth(), 0.0);
}

//--------------------------------------------------------------
void ofApp::update()
{
    B.update();
    Pipes[0].move();
    Pipes[1].move();
}

//--------------------------------------------------------------
void ofApp::draw()
{
    B.draw();
    if( B.y <= Pipes[1].height && 
        Pipes[1].x < B.x && 
        B.x < Pipes[1].x + Pipes[1].width) {
        B.is_flying = false;
    }

    if( B.y > Pipes[0].y + Pipes[0].height && 
        Pipes[0].x < B.x && 
        B.x < Pipes[0].x + Pipes[0].width){
        B.is_flying = false;
    }

    if(B.is_flying == false){
        Pipes[0].collision = true;
        Pipes[1].collision = true;
    }
    
    Pipes[0].draw();
    Pipes[1].draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
#define OF_KEY_SPACE 32
    if (key == OF_KEY_SPACE)
    {
        B.jump();
    }
    if(key == 'r'){
        B.setup();
        Pipes[0].setup(ofGetWidth(), ofGetHeight());
        Pipes[1].setup(1.5*ofGetWidth(), 0.0);
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{
}
