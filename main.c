/*
 * File:   main.c
 * Author: emad95
 *
 * Created on April 7, 2020, 11:28 PM
 */


#include <avr/io.h>
# define led2 3
# define led0 2
# define led1 7
int main(void) {
    DDRD |= (1<<led2);
    DDRC |= (1<<led0);
    DDRC |= (1<<led1);
    
    PORTD |= (1<<led2);
    PORTC |= (1<<led0);
    PORTC |= (1<<led1);
    while (1) {
    }
}
