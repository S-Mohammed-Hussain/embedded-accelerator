#include <stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);
    printf("What p holds = %p\n", p);
    printf("Values at *p = %d\n", *p);
    *p = 20;
    printf("a after *p = 20 = %d\n", a);

    return 0;

}