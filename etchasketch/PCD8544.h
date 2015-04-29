#ifndef PCD8544_H
#define PCD8544_H

#include <Arduino.h>

#ifdef __cplusplus
extern "C" {
#endif

	enum info {
		LCD_MAX_X = 84,
		LCD_MAX_Y = 6,
	};

	struct lcd_pins {
		uint8_t res;
		uint8_t sce;
		uint8_t dc;
		uint8_t sdin;
		uint8_t sclk;
	};

	void lcd_send_data(uint8_t);
	void lcd_contrast(uint8_t);
	void lcd_setpos(uint8_t, uint8_t);
	void lcd_clear(void);
	void lcd_init(struct lcd_pins *);

#ifdef __cplusplus
}
#endif

#endif
