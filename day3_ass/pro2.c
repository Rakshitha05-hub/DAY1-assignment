#include <stdio.h>

typedef struct {
    char name[50];
    int level;
} Patient;

void sortPatients(Patient patients[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (patients[j].level < patients[j + 1].level) {
                Patient temp = patients[j];
                patients[j] = patients[j + 1];
                patients[j + 1] = temp;
            }
        }
    }
}

void displayTop3CriticalPatients(Patient patients[], int n) {
    printf("Top 3 Critical Patients:\n");
    for (int i = 0; i < 3 && i < n; i++) {
        printf("%d. %s\n", i + 1, patients[i].name);
    }
}

int main() {
    int n;
    printf("Enter number of patients: ");
    scanf("%d", &n);

    Patient patients[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name and level for patient %d: ", i + 1);
        scanf("%s %d", patients[i].name, &patients[i].level);
    }

    sortPatients(patients, n);

    printf("Sorted by Emergency Level:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s - Level %d\n", i + 1, patients[i].name, patients[i].level);
    }

    displayTop3CriticalPatients(patients, n);

    return 0;
}
