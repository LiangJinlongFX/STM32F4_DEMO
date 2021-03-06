/**
  ******************************************************************************
  * @file    STM32F407DEMO/main.c 
  * @author  Liang
  * @version V1.0.0
  * @date    2017-4-26
  * @brief   Main program body
  ******************************************************************************
  * @attention
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx.h"
#include "sys.h"
#include "led.h"
#include "delay.h"
#include "usart1.h"
#include "sdio_sdcard.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/


/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main()
{
	u8 a;
	delay_init(168);
	uart_init(115200);
	LED_Init();
	LED0=0;
	a=SD_Init();
	printf("res=%d",a);
	while(1)
	{
//		delay_ms(100);
//		LED1=1;
//		delay_ms(100);
//		//printf("2");
//		LED1=0;
	}
}


