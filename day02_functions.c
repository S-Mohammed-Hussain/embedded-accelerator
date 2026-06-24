#include <stdio.h>
#include <stdint.h>
void setByValue(uint8_t reg)
{
    reg = reg | (1<<3);
    printf("Inside setByValue : %d\n", reg);

}
void setByReference(uint8_t *reg){
    *reg = *reg | (1 <<3);
    printf("Inside setByRef : %d\n", *reg);

}
int main(){
    uint8_t reg1 = 0x45;
    int8_t reg2 = 0x45;
    printf("Before setByValye : %d\n", reg1);
    setByValue(reg1);
    printf("After setByValue : %d\n", reg1);
    printf("\n");
    printf("Before setByRef : %d\n", reg2);
    setByReference(&reg2);
    printf("After setByRef ; %d\n", reg2);
    return 0;


}