// simple hello world program in C

#include <stdio.h>

int main() {
    int switch_on = 1;  // 1 = on, 0 = off
    
    if (switch_on) {
        for (int i = 0; i < 3; i++) {
            printf("Hello, World!\n");
        }
    }
    return 0;
}
