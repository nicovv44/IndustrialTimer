
#include "LCD\lcd_drv.h"
#include "LCD/mydefs.h"
#include <atmel_start.h>
#include <util\delay.h>

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) {
		_delay_ms(1000);
		lcd_init();
		lcd_xy( 0, 0);
		char setence[] = "SWATI + NICK";
		lcd_puts( (void*)setence );
	}
}
