#include <stdio.h>
#include <string.h>
struct Employee{
int id;
char name[30];
float salary;
};
void find_highest_salary_emp(struct Employee *emplo){
    struct Employee *highest = emplo;
    for(int i = 0;i<5;i++){
       if(emplo[i].salary>highest->salary){
        highest = &emplo[i];
       }
    }
    printf("\nDetails of Employee with highest salary\n");
    printf("Employee ID: %d",highest->id);
    printf("\nEmployee Name: %s",highest->name);
    printf("\nEmployee salary: %f ",highest->salary);
}
int main(){
struct Employee emp[5];
for (int i =0;i<5;i++){
    printf("Employee %d\n",(i+1));
    printf("Enter id: ");
    scanf("%d",&emp[i].id);
    printf("Enter Name: ");
    scanf("%s",emp[i].name);
     printf("Enter salary: ");
    scanf("%f",&emp[i].salary);
 printf("\n");
}
find_highest_salary_emp(emp);
return 0;
}
