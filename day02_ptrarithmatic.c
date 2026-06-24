#include <stdio.h>
#include <stdint.h>

int main(){
    int arr[] = {10, 20,30, 40};
    int *p = arr;
    printf("Address p = %p, Value = %d\n", p, *p);
    p++;
    printf("Address p+1 = %p, Values = %d\n",p, *p);
    p++;
    printf("Address p+2 = %p, Vlaues = %d\n", p, *p);

    return 0;

}

