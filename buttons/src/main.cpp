#include "Arduino.h"
#include <Arduboy.h>

// A carbon copy of the text example in arduboy, exccept for header
// The header is so that this work with platformio ide

Arduboy arduboy;
int x;
int y;
bool f;

void setup(){
  arduboy.begin();
  arduboy.setFrameRate(15);
  x = WIDTH / 2;
  y = HEIGHT / 2;
  f = false;

}

void loop(){
  if(!(arduboy.nextFrame())){
    return;
  }
  arduboy.clear();

  // Left is 0
  if(arduboy.pressed(RIGHT_BUTTON)){
    x+=5;
  }

  if(arduboy.pressed(LEFT_BUTTON)){
    x-=5;
  }
  // Top is 0
  if(arduboy.pressed(UP_BUTTON)){
    y-=5;
  }

  if(arduboy.pressed(DOWN_BUTTON)){
    y+=5;
  }

  // so what this do
  if(arduboy.pressed(A_BUTTON)){
      f = true;
  }

  if(arduboy.pressed(B_BUTTON)){
    f = false;
  }

  if(f){
    // arduboy.fillRect(int16_t x, int16_t y, uint8_t w, uint8_t h, uint8_t color)
    arduboy.fillRect(x, y, 10, 10, 1);
  }
  else{
    // arduboy.drawRect(int16_t x, int16_t y, uint8_t w, uint8_t h, uint8_t color)
    arduboy.drawRect(x, y, 10, 10, 1);
  }

  arduboy.display();
}
