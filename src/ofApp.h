#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup()override;
		void update()override;
		void draw()override;
        void keyPressed(int key)override;
    
    
		ofVideoPlayer bikeMovies;
        ofVideoPlayer hello;
        ofVideoPlayer me;
        ofVideoPlayer frien;
        ofVideoPlayer idk;
        ofVideoPlayer good;
        ofVideoPlayer good2;
        ofVideoPlayer bad;
        ofVideoPlayer lonely;
        ofVideoPlayer goodbye;
        ofVideoPlayer question;
        ofVideoPlayer you;
        ofVideoPlayer prompt;
        ofVideoPlayer egg;
    
        ofImage one;
        ofImage two;
        ofImage three;
        ofImage four;
        ofImage five;
        ofImage six;
        ofImage goodbye1;
    
    
        int randomNumber;
        int randomNumber2;
        int randomNumber3;
        int randomNumber4;
        int randomNumber5;
        int randomNumber6;
    
        int inputNumber = 0;
    
        std::string inputText;
        ofTrueTypeFont inputTextFont;
               
		
};
