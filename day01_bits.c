#include <stdio.h>
#include <stdint.h>

void printBinary(uint8_t val) {
    for (int i = 7; i >= 0; i--)
        printf("%d", (val >> i) & 1);
    printf("\n");
}

int main() {
    uint8_t reg = 0x45;
    printf("Original  : ");
    printBinary(reg);

    reg = reg | (1 << 3);     // SET bit 3
    printf("SET  bit3 : ");
    printBinary(reg);

    reg = reg & ~(1 << 6);    // CLEAR bit 6
    printf("CLR  bit6 : ");
    printBinary(reg);

    reg = reg ^ (1 << 0);     // TOGGLE bit 0
    printf("TOG  bit0 : ");
    printBinary(reg);

    return 0;
}