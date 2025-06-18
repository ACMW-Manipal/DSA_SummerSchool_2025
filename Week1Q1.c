#include <stdio.h>
#include <string.h> 

struct Employee {
    int id;
    char name[100]; 
    float salary;
};

int main() {
    struct Employee employees[5];
    struct Employee *ptr_employees = employees;

    printf("Enter details for 5 employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &(*(ptr_employees + i)).id); 
        printf("Name: ");
        scanf("%s", (*(ptr_employees + i)).name); 
        printf("Salary: ");
        scanf("%f", &(*(ptr_employees + i)).salary); 
    }

    struct Employee *highest_salary_employee = ptr_employees;
    for (int i = 1; i < 5; i++) {
        if ((*(ptr_employees + i)).salary > (*highest_salary_employee).salary) {
            highest_salary_employee = (ptr_employees + i);
        }
    }
    printf("Employee with the Highest Salary:\n");
    printf("ID: %d\n", (*highest_salary_employee).id);
    printf("Name: %s\n", (*highest_salary_employee).name);
    printf("Salary: %.2f\n", (*highest_salary_employee).salary);
    return 0;
}