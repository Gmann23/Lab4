/*	Author: lab
 *  Partner(s) Name: Gurvinder Mann
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {

    DDRA = 0x00; PORTA = 0xFF;
    DDRB = 0xFF; PORTB = 0x01;
    
    unsigned char tempA = 0x00;
    unsigned char tempB = 0x00;
    unsigned char tempC = 0x00;

    while (1) {
	
	tmpA = PINA;

	if (tmpA) {
	    tmpB += 0x01;
	}
	else {
	    tmpB = 0x00;
	}

	if (tmpB == 0x01) {
	    if (!tmpC) {
		PORTB = 0x02;
		stmpC = 0x01;
	    }
	    else {
		PORTB = 0x01;
		tmpC = 0x00;
	    }
	}
	
    }
    return 1;
}
