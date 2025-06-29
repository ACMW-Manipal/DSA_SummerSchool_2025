#include <stdio.h>  
#include <stdlib.h> 
void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void bubbleSortRecursive(int arr[], int n) {
    if (n == 0 || n == 1) {
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(&arr[i], &arr[i + 1]);
        }
    }

    bubbleSortRecursive(arr, n - 1);
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(" ");
        }
    }
    printf("\n");
}
int main() {
    int n; 
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Number of elements must be positive.\n");
        return 1;
    }
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]); 
    }
   printf("\nOriginal array: \n");
    printArray(arr, n);

    bubbleSortRecursive(arr, n); 

    printf("Sorted array (using recursive Bubble Sort): \n");
    printArray(arr, n); 
    return 0;
}