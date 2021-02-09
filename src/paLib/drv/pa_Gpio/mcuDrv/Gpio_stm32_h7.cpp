#include "../pa_Gpio.h"

#if mcu_stm32_h7
void Gpio_write(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, uint8_t state)
{

    /* Check the parameters */
    // assert_param(IS_GPIO_PIN(GPIO_Pin));
    // assert_param(IS_GPIO_PIN_ACTION(PinState));
    switch (state)
    {
    case 0:
        GPIOx->BSRR = 0;
        break;

    default:
        GPIOx->BSRR = GPIO_Pin;
        break;
    }
}
char Gpio_read(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
{
    /* Check the parameters */
    assert_param(IS_GPIO_PIN(GPIO_Pin));

    if ((GPIOx->IDR & GPIO_Pin) != 0x00U)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
#endif