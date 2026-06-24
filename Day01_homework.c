#include <stdio.h>
#include <stdint.h>
void printBinary(uint8_t val){
    for(int i = 7; i >=0; i--)
    {
    printf("%d",(val>>i) & 1);
    }
    printf("\n");

    }

int main(){
    uint8_t reg = 0xB4;
    printf("Initial value:");
    printBinary(reg);
    reg = reg | (1 << 1);
    printf("set bit 1:");
    printBinary(reg);

    reg = reg & ~(1 << 5);
    printf("clear bit 5:");
    printBinary(reg);

    reg = reg ^ (1 << 7);
    printf("toggle bit 7:");
    printBinary(reg);

    if (reg & (1 <<3)) {
        printf("bit 3 is set\n");
    } else {
        printf("bit 3 is not set\n");       
    
    }
}