#include <stdio.h>

void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 0) {
        return;
    }

    towerOfHanoi(n - 1, source, auxiliary, destination);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int num_disks;

    printf("Enter the number of disks: ");
    scanf("%d", &num_disks);

    if (num_disks < 1) {
        printf("Number of disks must be at least 1.\n");
        return 1;
    }

    printf("\nSteps to solve Tower of Hanoi with %d disks:\n", num_disks);
    towerOfHanoi(num_disks, 'A', 'C', 'B');

    return 0;
}