#include <stdio.h>
#include <stdint.h>

void swapNumber(int *a, int *b)

{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main(){
    int a = 15, b = 40 ;
    printf("Before swap:\n");
    printf("a = %d, b = %d\n", a, b);
    swapNumber(&a, &b);
    printf("After swap:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}