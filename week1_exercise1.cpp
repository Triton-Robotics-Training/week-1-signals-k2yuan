//STARTER 
//THIS EXERCISE IS TO BE DONE IN THE ARM MBED SIMULATOR
//http://195.130.59.221/
//IF YOU HAVE ISSUES WITH THE SIMULATOR, CONTACT EMBEDDED LEAD
#include "mbed.h"

DigitalOut output(LED1);
DigitalIn input(BUTTON1);

int main() {
    while (1) {
        int x = input.read();

        if (x == 1) {
            output = 1; //On
        } else {
            output = 0;  //Off 
        }

        wait_ms(500); //Delay
    }
}
