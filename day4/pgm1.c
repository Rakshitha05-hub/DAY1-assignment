#include<stdio.h>
struct Employee_t{
    int id;
    char name[255];
    float salary;
    char department[50];
};
typedef struct Employee_t Employee;
void readEmployees(Employee emp[],int n);
void displayEmployees(Employee emp[],int n);
Employee findHighestSalary(Employee emp[],int n);

int main(){
    int empcount;
    printf("enter number of employee");
    scanf("%d",&empcount);
    Employee employees[1000];
    readEmployees(employees,empcount);
    displayEmployees(employees,empcount);
    Employee highestSalariedEmployee = findHighestSalary(employees,empcount);
    printf("employee with highest salary:%s,%.2f(%s)\n",highestSalariedEmployee.name, highestSalariedEmployee.salary, highestSalariedEmployee.department);
    return 0;
}
void readEmployees(Employee emp[],int n){
    
}
void displayEmployees(Employee emp[],int n){
    
}
Employee findHighestSalary(Employee emp[],int n){
    
}
