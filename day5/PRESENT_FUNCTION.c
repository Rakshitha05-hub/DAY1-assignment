#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 100

typedef struct {
    int rollNo;          // Student Roll Number
    char name[50];       // Student Name
    int maths, physics, chemistry, cs; // Subject Marks
    int totalMarks;      // Sum of all subjects
    float percentage;    // Percentage calculation
    char grade;          // Assigned grade (A, B, C, D, F)
} Student;

void calculateGrade(Student *std);
void readStudent(Student *std, int *n);
void displayStudent(Student *std, int n);

void calculateGrade(Student *std) {
    if (std->percentage >= 85) {
        std->grade = 'A';
    } else if (std->percentage >= 70) {
        std->grade = 'B';
    } else if (std->percentage >= 55) {
        std->grade = 'C';
    } else if (std->percentage >= 40) {
        std->grade = 'D';
    } else {
        std->grade = 'F';
    }
}

int main() {
    Student std[MAX_STUDENTS];
    int n = 0, choice;

    do {
        printf("Enter your choice:\n 1. Read student\n 2. Display student\n 3. Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                readStudent(std, &n);
                break;
            case 2:
                displayStudent(std, n);
                break;
            case 3:
                printf("Exiting the program\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice >= 1 && choice <= 3);

    return 0;
}

void readStudent(Student *std, int *n) {
    printf("Enter the number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", n);
    if (*n > MAX_STUDENTS) {
        printf("Number of students exceeds maximum limit. Setting to %d.\n", MAX_STUDENTS);
        *n = MAX_STUDENTS;
    }

    for (int i = 0; i < *n; i++) {
        printf("Enter roll no: ");
        scanf("%d", &std[i].rollNo);
        printf("Enter student name: ");
        scanf("%s", std[i].name);
        
        printf("Enter subject marks (Maths Physics Chemistry CS): ");
        scanf("%d %d %d %d", &std[i].maths, &std[i].physics, &std[i].chemistry, &std[i].cs);
        
        std[i].totalMarks = std[i].maths + std[i].physics + std[i].chemistry + std[i].cs;
        std[i].percentage = (float)std[i].totalMarks / 400 * 100;
        
        calculateGrade(&std[i]);
    }
}

void displayStudent(Student *std, int n) {
    printf("--------------------------------------------------------\n");
    printf("| Roll No | Name            | Maths | Physics | Chem  | CS   | Total | %%   | Grade |\n");
    printf("--------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("| %-7d | %-15s | %-5d | %-6d | %-5d | %-4d | %-5d | %-5.2f | %-5c |\n",
               std[i].rollNo, std[i].name, std[i].maths, std[i].physics, std[i].chemistry, std[i].cs,
               std[i].totalMarks, std[i].percentage, std[i].grade);
    }
    printf("--------------------------------------------------------\n");
}
