#ifndef ETCH_H
#define ETCH_H

#ifdef __cplusplus
extern "C" {
#endif

#include <Arduino.h>

void etch_start(void);
void etch_stop(void);
void etch_update(void);
void etch_pixel(int16_t, int16_t);
uint8_t get_pixel(int16_t, int16_t);
void set_pixel(int16_t, int16_t);
void clear_pixel(int16_t, int16_t);

#ifdef __cplusplus
}
#endif

#endif
