#pragma once

#include "ofMain.h"
#include "ofxBox2d.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofPolyline groundLine;
    
    ofxBox2d box2d;                             // Box2Dの世界
    vector <ofPtr<ofxBox2dCircle> >	circles;    // 円の配列
    vector <ofPtr<ofxBox2dRect> > boxes;        // 四角の配列
};