/*
 * mydefs.h
 *
 * Created: 13/02/2021 2:28:04 PM
 *  Author: Nicolas VERHELST
 */ 


#ifndef MYDEFS_H_
#define MYDEFS_H_


#include<avr/io.h>

#define	LCD_D4		SBIT( PORTB, 2 ) // PB2, Pin D10
#define	LCD_DDR_D4	SBIT( DDRB, 2 )

#define	LCD_D5		SBIT( PORTD, 4 ) // PD4, Pin D4
#define	LCD_DDR_D5	SBIT( DDRD, 4 )

#define	LCD_D6		SBIT( PORTD, 3 ) // PD3, Pin D3
#define	LCD_DDR_D6	SBIT( DDRD, 3 )

#define	LCD_D7		SBIT( PORTD, 2 ) // PD2, Pin D2
#define	LCD_DDR_D7	SBIT( DDRD, 2 )

#define	LCD_RS		SBIT( PORTB, 4 ) // PB4, Pin D12
#define	LCD_DDR_RS	SBIT( DDRB, 4 )

#define	LCD_E0		SBIT( PORTB, 3 ) // PB3, Pin D11
#define	LCD_DDR_E0	SBIT( DDRB, 3 )


// Access bits like variables
struct bits {
	uint8_t b0:1, b1:1, b2:1, b3:1, b4:1, b5:1, b6:1, b7:1;
} __attribute__((__packed__));
#define SBIT_(port,pin) ((*(volatile struct bits*)&port).b##pin)
#define	SBIT(x,y)       SBIT_(x,y)


// avoid push in main
int main( void )        __attribute__((OS_main));


// force access of interrupt variables
#define IVAR(x)         (*(volatile typeof(x)*)&(x))


// always inline function x
#define AIL(x)          static x __attribute__ ((always_inline)); static x


// NOP
#define nop()           __asm__ volatile("nop"::)


#endif /* MYDEFS_H_ */