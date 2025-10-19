#include "mbed.h"

AnalogIn pot(p15); 
DigitalOut led(LED1); 

double period = 2.0;    //Total period of 2s

int main() {

    while (true) {
        double x = pot.read(); //Read from 0-1
        
        double on = period * x;    //LED on for % of period
        double off = period - on;   // LED off for the remainder of period

        led = 1;    //LED on for milliseconds duration
        wait_ms(on * 1000);

        led = 0;    //LED OFF
        wait_ms(off * 1000);
    }
}
