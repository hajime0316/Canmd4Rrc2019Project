#include "cppmain.hpp"

#include "main.h"
#include "can.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"

#include "stm32_printf/stm32_printf.h"

void setup(void) {

}

void loop(void) {
    stm32_printf("Hello world!");
}
