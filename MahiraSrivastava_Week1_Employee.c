include <stdio.h>
#include <string.h>

#define size 5  

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[size];
    struct Employee* ptr = emp;

    printf("Enter details for %d employees:\n", size);
    for (int i = 0; i < size; i++) {
        printf("\nEmployee %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &ptr[i].id);

        printf("Name: ");
        scanf(" %[^\n]", ptr[i].name);  

        printf("Salary: ");
        scanf("%f", &ptr[i].salary);
    }

    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (ptr[i].salary > ptr[maxIndex].salary) {
            maxIndex = i;
        }
    }

    printf("\nEmployee with the highest salary:\n");
    printf("ID: %d\n", ptr[maxIndex].id);
    printf("Name: %s\n", ptr[maxIndex].name);
    printf("Salary: %.2f\n", ptr[maxIndex].salary);

    return 0;
}
