#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[5];
    struct Employee *ptr = emp;
    int i, maxIndex = 0;

    printf("Enter details of 5 employees:\n");
    for(i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &ptr[i].id);
        printf("Name: ");
        scanf("%s", ptr[i].name);
        printf("Salary: ");
        scanf("%f", &ptr[i].salary);
    }

    for(i = 1; i < 5; i++) {
        if(ptr[i].salary > ptr[maxIndex].salary)
            maxIndex = i;
    }

    printf("\nEmployee with the highest salary:\n");
    printf("ID: %d\n", ptr[maxIndex].id);
    printf("Name: %s\n", ptr[maxIndex].name);
    printf("Salary: %.2f\n", ptr[maxIndex].salary);

    return 0;
}

