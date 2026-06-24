#include <stdio.h>
 int main(){
    int arr[] = {10, 20, 30, 40};
    printf("Using array notation:\n");
    for (int i = 0; i<4; i++) {
        printf("arr[%d]  = %d\n", i, arr[i]);
    }
    printf("\nUsing pointer noation:\n");
    for (int i = 0; i < 4; i++){
        printf("*(arr+%d) = %d\n", i, *(arr + i));
            

    }
    return 0;
    }
    
 