// https://github.com/FastLED/FastLED/wiki/Basic-usage

#include <FastLED.h>
#define NUM_LEDS 12
#define DATA_PIN 8

CRGB leds[NUM_LEDS]; 


void setup() {
 FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS); // ansprechen  Neopixel basierter strip
 }

// schreiben der daten "auf den stripe"
// FastLED.show(); 


void loop() { 
        for(int dot = 0; dot < NUM_LEDS; dot++) { 
            leds[dot] = CRGB::Blue;
            FastLED.show();
            // clear this led for the next time around the loop
            leds[dot] = CRGB::Black;
            delay(150);
        }
}
