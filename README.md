# Etch A Sketch for Arduino

## Description

Draw pixels on a LCD like an Etch A Sketch, using potentiometers as knobs.

#### Controls

| Input | Function |
| :--- | :--- |
| Potentiometer 0 | Change LCD contrast |
| Potentiometer 1 | Move cursor vertically |
| Potentiometer 2 | Move cursor horizontally |
| Button | Clear screen |

## Hardware

- [Arduino Uno](http://arduino.cc/en/Main/arduinoBoardUno)
- [Nokia 5110 LCD](https://www.sparkfun.com/products/10168)
  - [Datasheet](http://www.sparkfun.com/datasheets/LCD/Monochrome/Nokia5110.pdf)
  - [Sample Code](http://playground.arduino.cc/Code/PCD8544)
- 3 Potentiometers
- 1 Pushbutton

## Pinout

| Arduino Uno | Nokia 5110 LCD Breakout |
| ---: | :--- |
| Digital 6 | 1 (RST) |
| Digital 7 | 2 (CE) |
| Digital 5 | 3 (DC) |
| Digital 4 | 4 (DIN) |
| Digital 8 | 5 (CLK) |
| 5V | 6 (VCC) |
| Digital 9 | 7 (LIGHT) |
| GND | 8 (GND) |

| Arduino Uno | Button (pull-down) |
| ---: | :--- |
| Digital 2 | Button |

| Arduino Uno | Potentiometer |
| ---: | :--- |
| Analog 0 | Potentiometer 0 |
| Analog 1 | Potentiometer 1 |
| Analog 2 | Potentiometer 2 |