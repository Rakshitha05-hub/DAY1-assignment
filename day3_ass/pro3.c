#include <stdio.h>

void sortSalaries(int salaries[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (salaries[j] > salaries[j + 1]) {
                int temp = salaries[j];
                salaries[j] = salaries[j + 1];
                salaries[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    int salaries[n];
    printf("Enter salaries of employees: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &salaries[i]);
    }

    sortSalaries(salaries, n);

    printf("Sorted Salaries: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", salaries[i]);
    }
    printf("\n");

    int secondHighestSalary = salaries[n-2];
    int totalPayroll = 0;
    for (int i = 0; i < n; i++) {
        totalPayroll += salaries[i];
    }

    printf("Second Highest Salary: %d\n", secondHighestSalary);
    printf("Total Payroll: ₹%d\n", totalPayroll);

    return 0;
}
