#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    // double radiusEq, double radiusPolar, double rotationPeriod, double axialTilt
    double sunRadius = 696342.0;
    double rotationPeriod = 601.2; // Sun rotation period in days is 25.05
    double axialTilt = 0;
    MSAstronomicalObject sun(sunRadius, sunRadius, rotationPeriod, axialTilt);

    planetarySystem = MSPlanetarySystem(sun);
}

//--------------------------------------------------------------
void ofApp::update(){
    planetarySystem.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    planetarySystem.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
