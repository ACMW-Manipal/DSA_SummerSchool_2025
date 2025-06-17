#include <stdio.h>
#include <string.h>
#define SIZE 5


struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[SIZE];
    struct Employee *ptr = emp;
    int i, maxIndex = 0;

    for (i = 0; i < SIZE; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &(ptr + i)->id);

        printf("Name: ");
        scanf(" %[^\n]", (ptr + i)->name);  // space before % to consume newline

        printf("Salary: ");
        scanf("%f", &(ptr + i)->salary);
    }


    for (i = 1; i < SIZE; i++) {
        if ((ptr + i)->salary > (ptr + maxIndex)->salary) {
            maxIndex = i;
        }
    }


    printf("Employee with the highest salary:\n");
    printf("ID: %d\n", (ptr + maxIndex)->id);
    printf("Name: %s\n", (ptr + maxIndex)->name);
    printf("Salary: %.2f\n", (ptr + maxIndex)->salary);

    return 0;
}
