#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int marks[5];
    int total;
    float percentage;
    char grade;
};

int main() {
    struct Student s;
    int i;

    printf("=========================================\n");
    printf("      MARKSHEET GENERATION SYSTEM\n");
    printf("=========================================\n");

    // Input student details
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", s.name);

    // Input marks
    s.total = 0;
    printf("\nEnter Marks of 5 Subjects:\n");

    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &s.marks[i]);
        s.total += s.marks[i];
    }

    // Calculate percentage
    s.percentage = s.total / 5.0;

    // Assign grade
    if(s.percentage >= 90)
        s.grade = 'A';
    else if(s.percentage >= 80)
        s.grade = 'B';
    else if(s.percentage >= 70)
        s.grade = 'C';
    else if(s.percentage >= 60)
        s.grade = 'D';
    else if(s.percentage >= 40)
        s.grade = 'E';
    else
        s.grade = 'F';

    // Display marksheet
    printf("\n=========================================\n");
    printf("             STUDENT MARKSHEET\n");
    printf("=========================================\n");

    printf("Roll Number : %d\n", s.rollNo);
    printf("Student Name: %s\n", s.name);

    printf("\n-----------------------------------------\n");
    printf("Subject\t\tMarks\n");
    printf("-----------------------------------------\n");

    for(i = 0; i < 5; i++) {
        printf("Subject %d\t%d\n", i + 1, s.marks[i]);
    }

    printf("-----------------------------------------\n");
    printf("Total Marks : %d / 500\n", s.total);
    printf("Percentage  : %.2f%%\n", s.percentage);
    printf("Grade       : %c\n", s.grade);

    if(s.grade == 'F')
        printf("Result      : FAIL\n");
    else
        printf("Result      : PASS\n");

    printf("=========================================\n");

    return 0;
}