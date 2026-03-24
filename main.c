// simple hello world program in C

#include <stdio.h>

int main() {
    int switch_on = 1;  // 1 = on, 0 = off
    int led = 0;        // 1 = on, 0 = off
    int buzzer = 0;     // 1 = on, 0 = off
    
    if (switch_on) {
        // Turn LED on
        led = 1;
        printf("LED is ON\n");
        
        // Turn buzzer on
        buzzer = 1;
        printf("Buzzer is ON\n");
        
        // Print Hello World 3 times
        for (int i = 0; i < 3; i++) {
            printf("Hello, World!\n");
        }
    } else {
        // Everything is off
        led = 0;
        buzzer = 0;
        printf("LED is OFF\n");
        printf("Buzzer is OFF\n");
        printf("LED is OFF\n");
    }
    
    return 0;
}