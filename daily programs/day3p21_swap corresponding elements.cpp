#include <stdio.h>

void swapArrays(int *arr1, int *arr2, int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Before swapping:\n");
    printf("arr1: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\narr2: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    int size = (size1 < size2) ? size1 : size2; 
    swapArrays(arr1, arr2, size);  
    printf("After swapping:\n");
    printf("arr1: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\narr2: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}
