#include <stdio.h>
#include <stdlib.h>
#define MAX_EMPLOYEES 100
struct employee
{
    char name[50];
    int id;      
    float salary;
    int attendance;
};
int main()
{
    struct employee emp[MAX_EMPLOYEES];
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter employee name: ");
        scanf("%s", emp[i].name);
        printf("Enter id: ");
        scanf("%d", &emp[i].id);
        printf("Enter the salary: ");
        scanf("%f", &emp[i].salary);
        printf("Enter attendance per month: ");
        scanf("%d", &emp[i].attendance);
        if (emp[i].attendance > 25)
        {
            emp[i].salary = (emp[i].salary/100*5)+emp[i].salary;
            printf("Employee name: %s\t, Employee id: %d\n", emp[i].name, emp[i].id);
            printf("Employee salary: %.2f\t, Employee attendance: %d\n", emp[i].salary, emp[i].attendance);
            printf("Employee status: Excellent\n");
        }
        else if (emp[i].attendance < 10)
        {
            emp[i].salary *= 0.5;
            printf("Employee name: %s\t, Employee id: %d\n", emp[i].name, emp[i].id);
            printf("Employee salary: %.2f\t, Employee attendance: %d\n", emp[i].salary, emp[i].attendance);
            printf("Employee status: Needs improvement\n");
        }
        else if (emp[i].attendance >= 10 && emp[i].attendance <= 25)
        {
            printf("Employee name: %s\t, Employee id: %d\n", emp[i].name, emp[i].id);
            printf("Employee salary: %.2f\t, Employee attendance: %d\n", emp[i].salary, emp[i].attendance);
            printf("Employee status: Good\n");
        }
        else
        {
            printf("Invalid attendance value.\n");
        }
    }

    return 0;
}
