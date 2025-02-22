#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int rollNo;
    char name[50];
    int maths, physics, chemistry, cs;
    int totalMarks;
    float percentage;
    char grade;
} Student;

void calculateGrade(Student *student) {
    if (student->percentage >= 90) {
        student->grade = 'A';
    } else if (student->percentage >= 80) {
        student->grade = 'B';
    } else if (student->percentage >= 70) {
        student->grade = 'C';
    } else if (student->percentage >= 60) {
        student->grade = 'D';
    } else {
        student->grade = 'F';
    }
}
