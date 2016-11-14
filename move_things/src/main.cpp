#include "Arduino.h"
#include <Arduboy.h>

Arduboy arduboy;

int x = 30;
int y = 40;
int dx = 5;

void setup(){
  arduboy.begin();
  arduboy.setFrameRate(15);
}

void loop(){
  if(!(arduboy.nextFrame())){
    return ;
  }

  arduboy.clear();
  // arduboy.drawRect(int16_t x, int16_t y, uint8_t w, uint8_t h, uint8_t color)
  arduboy.drawRect(x, y, 10, 10, 1);
  if(x > 100){
    dx = dx * -1;
  }
  else if(x < 10){
    dx = dx * -1;

  }
  x += dx;

  arduboy.display();
}
