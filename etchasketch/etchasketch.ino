#include "hal.h"
#include "PCD8544.h"
#include "etch.h"

#define pot1	(analogRead(POT1_PIN))
#define pot2	(analogRead(POT2_PIN))
#define but1	(digitalRead(BUTTON1_PIN))
#define but2	(digitalRead(BUTTON2_PIN))

struct lcd_pins lcd;

/* Control the brightness of the backlight (0: off, 255: full brightness) */
void lcd_light(uint8_t b) {
	analogWrite(LCD_PIN_LIGHT, ~b);
}

void setup_pins(void) {
	lcd.res = LCD_PIN_RESET;
	lcd.sce = LCD_PIN_SCE;
	lcd.dc = LCD_PIN_DC;
	lcd.sdin = LCD_PIN_SDIN;
	lcd.sclk = LCD_PIN_SCLK;
	
	pinMode(LCD_PIN_LIGHT, OUTPUT);
}

void setup(void) {
	setup_pins();

	lcd_init(&lcd);
   	lcd_light(5);

	lcd_contrast((uint8_t) (analogRead(POT_CONTRAST_PIN) * (255.0 / 1023.0)));

	etch_start();
	
	/* etch_stop(); */
}

void loop(void) {
	lcd_contrast((uint8_t) (analogRead(POT_CONTRAST_PIN) * (255.0 / 1023.0)));
	uint16_t x = map(pot2, 1023, 0, 0, LCD_MAX_X);
	uint16_t y = map(pot1, 0, 1023, 0, (LCD_MAX_Y * 8));
	etch_pixel(x, y);
	if (but1 || but2) {
		etch_stop();
		etch_start();
	}
}
