/*
https://www.reddit.com/r/ergodox/comments/80hgxj/infinity_lcd_configuration_in_qmk/
*/
#include "simple_visualizer.h"

/**
 * This function should be implemented by the keymap visualizer
 *
 * We should only alter:
 * - state->target_lcd_color
 * - state->layer_text
 * as those are the only thing that the simple_visualizer assumes that we're
 * touching.
 * Also make sure that the buffer passed to state->layer_text remains valid
 * until the previous animation is stopped.
 * This can be done by either double buffering it or by using constant strings
**/
static void get_visualizer_layer_and_color(visualizer_state_t* state)
{
    uint8_t saturation = 255;
    uint8_t brightness = 0;

    if (state->status.leds & (1u << USB_LED_CAPS_LOCK)) {
        // What is this? CAPS_LOCK on?
        saturation = 60;
        brightness = 255;
    }
    if (state->status.layer & 0x4) {
        // On layer 3
        state->target_lcd_color = LCD_COLOR(0, saturation, 0xFF);
        state->layer_text = "Media & Mouse";
    } else if (state->status.layer & 0x2) {
        // On layer 2?
        state->target_lcd_color = LCD_COLOR(168, saturation, 0xFF);
        state->layer_text = "Symbol";
    } else {
        // On layer 1?
        state->target_lcd_color = LCD_COLOR(84, saturation, brightness);
        state->layer_text = "Default";
    }
}
