#include "stdbool.h"
#include "stdint.h"
#include "stm32h7xx_hal.h"

#define LED_PIN        GPIO_PIN_7
#define LED_GPIO_PORT  GPIOG

bool init_led(void);
void set_led(bool state);
void toggle_led(void);