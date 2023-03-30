#include <stdio.h>

void reverseArray(int *arr, int size) {
    int *p = arr; 
    int *q = arr + size - 1;
    while (p < q) {
        int temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q--;
    }
}

int main() {
    int arr[100], size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Before reversing the array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    reverseArray(arr, size);
    printf("After reversing the array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
