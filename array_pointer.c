#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    int *p = arr;  // pointer to first element

    printf("Array access:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("\nPointer access:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(p + %d) = %d\n", i, *(p + i));
    }

    printf("\nAddresses:\n");
    for (int i = 0; i < 5; i++) {
        printf("&arr[%d] = %p\n", i, &arr[i]);
    }

    return 0;
}
