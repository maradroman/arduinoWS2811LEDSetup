
#include <FastLED.h>
#define LED_PIN 5
#define NUM_LEDS 10

CRGB leds[NUM_LEDS];

void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2811, LED_PIN, BRG>(leds, NUM_LEDS);
  FastLED.setMaxPowerInVoltsAndMilliamps(5,500);
  FastLED.clear();
  //fill_solid(leds, NUM_LEDS, CRGB(255, 0, 255));
  FastLED.show();
  delay(1000);
}

void loop() {
//   for(int i=0; i<NUM_LEDS; i++){
//    leds[i] = CRGB(255,0,255);
//    FastLED.setBrightness(255-10*i);
//    FastLED.show();
//    delay(50);
//    }
//   for(int i=NUM_LEDS; i>0; i--){
//    leds[i] = CRGB(255,0,255);
//    FastLED.setBrightness(255-10*i);
//    FastLED.show();
//    delay(50);
//    }
FastLED.setBrightness(255);
leds[0] = CRGB(255,0,255);
leds[2] = CRGB(230,0,255);
leds[3] = CRGB(210,0,255);
leds[4] = CRGB(180,0,255);
leds[5] = CRGB(150,0,255);
leds[6] = CRGB(150,0,255);
leds[7] = CRGB(180,0,255);
leds[8] = CRGB(210,0,255);
leds[9] = CRGB(230,0,255);
leds[10] = CRGB(255,0,255);
FastLED.show();

}
