#include "Arduino.h"
#include <Arduboy.h>

// A carbon copy of the text example in arduboy, exccept for header
// The header is so that this work with platformio ide 

Arduboy arduboy;

void setup(){
  arduboy.begin();
  arduboy.setFrameRate(15);

}

void loop(){
  if(!(arduboy.nextFrame())){
    return;
  }

  arduboy.clear();
  arduboy.setCursor(4, 9);
  arduboy.print(F("Hello world!"));
  arduboy.display();

}
