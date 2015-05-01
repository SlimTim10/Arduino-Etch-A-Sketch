#ifndef ETCH_H
#define ETCH_H

#ifdef __cplusplus
extern "C" {
#endif

void etch_start(void);
void etch_stop(void);
void etch_update(void);
void etch_pixel(uint16_t, uint16_t);
void get_pixel(uint16_t, uint16_t);
void set_pixel(uint16_t, uint16_t);
void clear_pixel(uint16_t, uint16_t);

#ifdef __cplusplus
}
#endif

#endif
