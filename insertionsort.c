#include <stdio.h>
#include <stdlib.h> 
void printArray(int arr_size, int arr[]) {
    for (int i = 0; i < arr_size; i++) {
        printf("%d", arr[i]);
        if (i < arr_size - 1) {
            printf(" ");
        }
    }
    printf("\n");
}


void insertionSort1(int n, int arr[]) {
    if (n <= 1) { 
        printArray(n, arr);
        return;
    }

    int key = arr[n - 1]; 
    int j = n - 2;       


    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        printArray(n, arr); 
        j--;
    }

    arr[j + 1] = key; 
    printArray(n, arr); 
}


int main() {
    int n;
    scanf("%d", &n); 

    int* arr = (int*)malloc(n * sizeof(int)); 

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort1(n, arr); 
    free(arr); 
    return 0;
}