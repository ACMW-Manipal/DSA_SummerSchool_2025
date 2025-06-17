#include <stdio.h>

int removeDuplicates(int* nums, int Size) {
    if (Size == 0) return 0;

    int k = 1;  

    for (int i = 1; i < Size; i++) {
        if (nums[i] != nums[k - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}


int main() {
    int nums[] = {0,2,3,4,5,5,5,6,7,9,9};
    int size = sizeof(nums) / sizeof(nums[0]);

    int k = removeDuplicates(nums, size);

    printf("k = %d\n", k);
    printf("Unique elements: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
