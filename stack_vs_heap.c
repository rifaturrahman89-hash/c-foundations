#include <stdio.h>
#include <stdlib.h>

// Function with a local array (stack allocation)
void local_array_example() {
    int arr[5];   // local array on stack

    // 👉 Memory on the stack is freed automatically
    // when the function returns. No manual free() needed.

    printf("Local array (stack) addresses:\n");
    for (int i = 0; i < 5; i++) {
        printf("  &arr[%d] = %p\n", i, (void*)&arr[i]);
    }

    // ⚠️ If you return &arr[0] (a pointer to stack memory),
    // it BREAKS because the stack frame is destroyed after return.
    // The pointer will point to invalid memory → undefined behavior.
}

// Function with malloc (heap allocation)
void malloc_array_example() {
    int *arr = (int*)malloc(5 * sizeof(int));  // array on heap

    // 👉 Memory on the heap is NOT freed automatically.
    // You must call free() manually to release it.

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Malloc array (heap) addresses:\n");
    for (int i = 0; i < 5; i++) {
        printf("  &arr[%d] = %p\n", i, (void*)&arr[i]);
    }

    free(arr);  // ✅ Always free heap memory when done
}

int main() {
    printf("=== Stack vs Heap Memory Demo ===\n\n");

    local_array_example();
    printf("\n");
    malloc_array_example();

    return 0;
}


