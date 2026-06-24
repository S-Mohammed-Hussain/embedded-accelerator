#include <stdio.h>
#include <stdint.h>

int main() {
    // Basic types
    int age = 21;
    float cgpa = 7.5;
    uint8_t reg = 0x45;    // 1 byte, value 69 in decimal

    // Print them
    printf("Age  = %d\n", age);
    printf("CGPA = %.1f\n", cgpa);
    printf("Reg  = %d in decimal\n", reg);
    printf("Reg  = 0x%X in hex\n", reg);

    // Simple if
    if (age >= 21) {
        printf("Eligible\n");
    } else {
        printf("Not eligible\n");
    }

    // Loop
    for (int i = 0; i < 5; i++) {
        printf("Count: %d\n", i);
    }

    return 0;
}