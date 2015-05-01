#include "etch.h"
#include "PCD8544.h"

static uint8_t *lcdbuf;

void etch_start(void) {
	lcdbuf = calloc(LCD_MAX_X * LCD_MAX_Y, sizeof(uint8_t));
	lcd_clear();
}

void etch_stop(void) {
	free(lcdbuf);
}

void etch_update(void) {
	lcd_setpos(0, 0);
	int16_t x, y;
	for (y = 0; y < LCD_MAX_Y; y++) {
		for (x = 0; x < LCD_MAX_X; x++) {
			lcd_send_data(lcdbuf[(y * LCD_MAX_X) + x]);
		}
	}
}

void etch_pixel(int16_t x, int16_t y) {
	lcdbuf[((y / 8) * LCD_MAX_X) + x] |= (1 << (y % 8));
	etch_update();
}

void get_pixel(int16_t x, int16_t y) {
	return (lcdbuf[((y / 8) * LCD_MAX_X) + x] & (1 << (y % 8)));
}

void set_pixel(int16_t x, int16_t y) {
	lcdbuf[((y / 8) * LCD_MAX_X) + x] |= (1 << (y % 8));
}

void clear_pixel(int16_t x, int16_t y) {
	lcdbuf[((y / 8) * LCD_MAX_X) + x] &= ~(1 << (y % 8));
}
