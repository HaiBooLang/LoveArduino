#include <FastLED.h>

#define NUM_LEDS 256
#define LED_TYPE WS2812B
#define LED_PIN 2
#define COLOR_ORDER GRB

uint8_t max_bright = 5;

CRGB leds[NUM_LEDS];

uint8_t beginHue = 0;
uint8_t deltaHue = 1;

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(max_bright);

  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Green;
  }
  FastLED.show();
  delay(1000);
}

void loop() {
  fill_rainbow(leds, NUM_LEDS, beginHue, random8(10));
  FastLED.show();
}
