#include "ofApp.h"
using namespace std;

void ofApp::setup(){
    ofBackground(0,0,0);
    
    inputTextFont.load(OF_TTF_SERIF, 20);

    
    one.load("1.png");
    three.load("3.png");
    four.load("4.png");
    five.load("5.png");
    six.load("6.png");
    goodbye1.load("goodbye.png");
   
    
    hello.load("1.mp4");
    good.load("7.mp4");
    good2.load("13.mp4");
    frien.load("6.mp4");
    me.load("5.mp4");
    lonely.load("12.mp4");
    goodbye.load("23.mp4");
    egg.load("24.mp4");
    
    
    randomNumber = ofRandom(3);
    string moviePath = "movies/" + ofToString(randomNumber + 1) + ".mp4";
    bikeMovies.load( moviePath );
    
    randomNumber2 = ofRandom(4);
    string moviePath2 = "question/" + ofToString(randomNumber2 + 1) + ".mp4";
    question.load( moviePath2 );
    
    randomNumber3 = ofRandom(4);
    string moviePath3 = "prompts/" + ofToString(randomNumber3 + 1) + ".mp4";
    prompt.load( moviePath3 );
    
    randomNumber4 = ofRandom(2);
    string moviePath4 = "idk/" + ofToString(randomNumber4 + 1) + ".mp4";
    idk.load( moviePath4 );
    
    randomNumber5 = ofRandom(3);
       string moviePath5 = "bad/" + ofToString(randomNumber5 + 1) + ".mp4";
       bad.load( moviePath5 );
    
    randomNumber6 = ofRandom(2);
       string moviePath6 = "you/" + ofToString(randomNumber6 + 1) + ".mp4";
       you.load( moviePath6 );
    

}


void ofApp::update(){

    hello.update();
    good.update();
    good2.update();
    bad.update();
    lonely.update();
    idk.update();
    me.update();
    goodbye.update();
    bikeMovies.update();
    question.update();
    you.update();
    prompt.update();
    egg.update();

}

//--------------------------------------------------------------
void ofApp::draw(){

    inputTextFont.drawString(inputText, 500, 400);
    
    if (hello.isPlaying() == true){
    hello.draw(0,0,972,522);
        one.draw(50,50);
    }
    
    if (good.isPlaying() == true){
    good.draw(0,0,972,522);
        three.draw(50,50);
    }
    
    if (good2.isPlaying() == true){
    good2.draw(0,0,972,522);
        five.draw(50,50);
    }
    
    if (bad.isPlaying() == true){
    bad.draw(0,0,972,522);
    }
    
    if (frien.isPlaying() == true){
    frien.draw(0,0,972,522);
        six.draw(50,50);
    }
    
    if (idk.isPlaying() == true){
    idk.draw(0,0,972,522);
    }
    
    if (me.isPlaying() == true){
    me.draw(0,0,972,522);
    }
    
    if (question.isPlaying() == true){
    question.draw(0,0,972,522);
    }
    
    if ( bikeMovies.isPlaying() == true){
    bikeMovies.draw(0,0,972,522);
    }
    
    if (goodbye.isPlaying() == true){
    goodbye.draw(0,0,972,522);
        goodbye1.draw(50,50);
    }
    
    if (lonely.isPlaying() == true){
    lonely.draw(0,0,972,522);
        four.draw(50,50);
    }
    
    if (you.isPlaying() == true){
    you.draw(0,0,972,522);
    }
    
    if (prompt.isPlaying() == true){
    prompt.draw(0,0,972,522);
    }
    
    if (egg.isPlaying() == true){
       egg.draw(0,0,972,522);
       }
    
}


void ofApp::keyPressed(int key){

    if (key == OF_KEY_RETURN)
    {
        
        std::cout << " the user input ... " << inputText << std::endl;
        
        
        if (inputText.find("hi ") != std::string::npos || inputText.find("hello") != std::string::npos || inputText.find("hey") != std::string::npos || inputText.find("sup") != std::string::npos) {
            inputNumber += 1;
            hello.play();
            hello.setLoopState(OF_LOOP_NONE);
            
        }

        else if ( inputText.find("nice") != std::string::npos
            || inputText.find("fine") != std::string::npos
                 || inputText.find("great") != std::string::npos || inputText.find("okay") != std::string::npos)
        {
            inputNumber += 1;
            good2.play();
            good2.setLoopState(OF_LOOP_NONE);
            
        }
        
        else if (inputText.find("good") != std::string::npos)
        {
            inputNumber += 1;
            good.play();
            good.setLoopState(OF_LOOP_NONE);
            
        }
        
        
        else if (inputText.find("sad") != std::string::npos
                 || inputText.find("tired") != std::string::npos
                 || inputText.find("depressed") != std::string::npos || inputText.find("bad") != std::string::npos || inputText.find("terrible") != std::string::npos || inputText.find("shit") != std::string::npos)
        {
            inputNumber += 1;
            bad.play();
            bad.setLoopState(OF_LOOP_NONE);
        }
        
        else if (inputText.find("you're") != std::string::npos)
             {
                 inputNumber += 1;
                 you.play();
                 you.setLoopState(OF_LOOP_NONE);
                 
             }
        
        else if (inputText.find("idk") != std::string::npos || inputText.find("i dont know") != std::string::npos)
                {
                    inputNumber += 1;
                    idk.play();
                    idk.setLoopState(OF_LOOP_NONE);
        
                }
        else if (inputText.find("who are you") != std::string::npos || inputText.find("what are you") != std::string::npos)
                {
                    inputNumber += 1;
                    frien.play();
                    frien.setLoopState(OF_LOOP_NONE);
                    
                }
        else if (inputText.find("?") != std::string::npos || inputText.find("why") != std::string::npos || inputText.find("what") != std::string::npos || inputText.find("how") != std::string::npos)
                {
                    inputNumber += 1;
                    question.play();
                    question.setLoopState(OF_LOOP_NONE);
                    
                }
        else if (inputText.find("no") != std::string::npos)
                {
                    
                    inputNumber += 1;
                    bikeMovies.play();
                    bikeMovies.setLoopState(OF_LOOP_NONE);
                    
                }
        else if (inputText.find("...") != std::string::npos || inputText.find("um") != std::string::npos || inputText.find("ok") != std::string::npos)
                {
                    inputNumber += 1;
                    prompt.play();
                    prompt.setLoopState(OF_LOOP_NONE);

                }
        else if (inputText.find("bored") != std::string::npos)
                {
                    inputNumber += 1;
                    lonely.play();
                    lonely.setLoopState(OF_LOOP_NONE);

            }
        else if (inputText.find("yes") != std::string::npos)
                {
                    inputNumber += 1;
                    lonely.play();
                    lonely.setLoopState(OF_LOOP_NONE);

                   }
        
        else if (inputText.find("fuck you") != std::string::npos || inputText.find("you suck") != std::string::npos || inputText.find("creepy") != std::string::npos || inputText.find("thats") != std::string::npos || inputText.find("bitch") != std::string::npos)
                {
                    inputNumber += 1;
                    egg.play();
                    egg.setLoopState(OF_LOOP_NONE);

                }
        
        else if (inputText.find("im") != std::string::npos || inputText.find("i am") != std::string::npos || inputText.find("i'm") != std::string::npos || inputText.find("i ") != std::string::npos || inputText.find("me too") != std::string::npos)
        {
            inputNumber += 1;
            me.play();
            me.setLoopState(OF_LOOP_NONE);

           }
        
        else {
            hello.stop();
            frien.stop();
            good2.stop();
            bad.stop();
            good.stop();
            me.stop();
            idk.stop();
            lonely.stop();
            goodbye.stop();
            question.stop();
            bikeMovies.stop();
            you.stop();
            prompt.stop();
            egg.stop();
            
        }
            

            
        
        if (inputNumber > 15){
            goodbye.play();
            goodbye.setLoopState(OF_LOOP_NONE);
        }

        inputText.clear();
        
    }
    
    else if (key == OF_KEY_BACKSPACE)
    {
        if (inputText.size() > 0)
        {
            inputText.erase(inputText.end() - 1);
        }
    }
    else
    {
        inputText += ofToString((char)key);
    }
}

