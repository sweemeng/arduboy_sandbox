#include <Arduino.h>
#include <Arduboy.h>

/*
1) The image is created with piskel and can be seen as https://www.piskelapp.com/p/agxzfnBpc2tlbC1hcHByEwsSBlBpc2tlbBiAgMDfhMCrCww/view
2) Image is converted in http://www.crait.net/tochars/index.php
3) Other tool might work, I use http://www.andrewlowndes.co.uk/blog/graphics/arduboy-image-converter
*/

const unsigned char flower[] PROGMEM = {
	//width = 14, height = 15
	0x00, 0x00, 0x40, 0xe0, 0xe0, 0x40, 0x8c, 0x92, 0xf2, 0x92, 0x8c, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x38, 0x3f, 0x38, 0x18, 0x1, 0x1, 0x00, 0x00, 0x00, 
};


Arduboy arduboy;

void setup(){
  arduboy.begin();
  arduboy.clear();

}

void loop(){
  arduboy.clear();
  arduboy.drawBitmap(5, 10, flower, 16, 16, WHITE);
  arduboy.display();
}