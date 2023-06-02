#include <FastLED.h>

#define NUM_LEDS 256
#define LED_TYPE WS2812B
#define LED_PIN 2
#define COLOR_ORDER GRB

uint8_t max_bright = 2;

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(max_bright);

  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Green;
  }
}

void loop() {

  for (int i = 0; i <= NUM_LEDS; i++) {
    leds[i] = CRGB(0, 0, 255);
    FastLED.show();
    delay(40);
  }
  for (int i = NUM_LEDS; i >= 0; i--) {
    leds[i] = CRGB(0, 255, 0);
    FastLED.show();
    delay(40);
  }
  for (int i = NUM_LEDS; i >= 0; i--) {
    leds[i] = CRGB(255, 0, 0);
    FastLED.show();
    delay(40);
  }
}
