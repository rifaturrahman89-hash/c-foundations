#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10;              
    int *b = (int*)malloc(sizeof(int)); 

    *b = 20;                    

    printf("Stack int: %d\n", a);
    printf("Heap int: %d\n", *b);

    free(b);                    
    return 0;
}
