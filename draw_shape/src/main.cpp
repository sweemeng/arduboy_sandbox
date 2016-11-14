// platformio probably will able to compile without this line, the IDE autocorrect won't work
#include "Arduino.h"
#include <Arduboy.h>

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

  // arduboy.drawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint8_t color)
  arduboy.drawLine(20, 10, 20, 20, 1);
  arduboy.drawLine(40, 10, 30, 10, 1);

  // arduboy.drawCircle(int16_t x0, int16_t y0, uint8_t r, uint8_t color)
  arduboy.drawCircle(20, 40, 10, 1);

  // arduboy.drawRect(int16_t x, int16_t y, uint8_t w, uint8_t h, uint8_t color)
  arduboy.drawRect(50, 40, 10, 10, 1);

  // arduboy.drawRoundRect(int16_t x, int16_t y, uint8_t w, uint8_t h, uint8_t r, uint8_t color)
  arduboy.drawRoundRect(70, 40, 20, 20, 5, 1);
  arduboy.display();
}
