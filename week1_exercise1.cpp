#include "mbed.h"

DigitalOut output(LED1);
DigitalIn input(BUTTON1);

int main() {
    while (1) {
        int x = input.read();   //Read input

        if (x == 1) {
            output = 1; //On
        } else {
            output = 0;  //Off 
        }

        wait_ms(500); //Delay
    }

}
