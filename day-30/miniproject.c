#include <stdio.h>
#include <string.h>

#define MAX 100

int roll[MAX];
char name[MAX][50];
float marks[MAX];
int count = 0;

// Function to add student
void addStudent() {
    if (count >= MAX) {
        printf("\nDatabase is full!\n");
        return;
    }

    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[count]);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name[count]);

    printf("Enter Marks: ");
    scanf("%f", &marks[count]);

    count++;
    printf("\nStudent added successfully!\n");
}

// Function to display students
void displayStudents() {
    int i;

    if (count == 0) {
        printf("\nNo student records found.\n");
        return;
    }

    printf("\n----------------------------------------------------\n");
    printf("Roll No\tName\t\tMarks\n");
    printf("----------------------------------------------------\n");

    for (i = 0; i < count; i++) {
        printf("%d\t%-15s%.2f\n", roll[i], name[i], marks[i]);
    }
}

// Function to search student
void searchStudent() {
    int r, i, found = 0;

    printf("\nEnter Roll Number to search: ");
    scanf("%d", &r);

    for (i = 0; i < count; i++) {
        if (roll[i] == r) {
            printf("\nStudent Found\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name        : %s\n", name[i]);
            printf("Marks       : %.2f\n", marks[i]);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student record not found.\n");
}

// Function to update marks
void updateStudent() {
    int r, i, found = 0;

    printf("\nEnter Roll Number to update: ");
    scanf("%d", &r);

    for (i = 0; i < count; i++) {
        if (roll[i] == r) {
            printf("Enter New Name: ");
            scanf(" %[^\n]", name[i]);

            printf("Enter New Marks: ");
            scanf("%f", &marks[i]);

            printf("\nRecord updated successfully.\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student record not found.\n");
}

// Function to delete student
void deleteStudent() {
    int r, i, j, found = 0;

    printf("\nEnter Roll Number to delete: ");
    scanf("%d", &r);

    for (i = 0; i < count; i++) {
        if (roll[i] == r) {
            for (j = i; j < count - 1; j++) {
                roll[j] = roll[j + 1];
                strcpy(name[j], name[j + 1]);
                marks[j] = marks[j + 1];
            }

            count--;
            printf("\nRecord deleted successfully.\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student record not found.\n");
}

int main() {
    int choice;

    do {
        printf("\n=========================================\n");
        printf("      STUDENT MANAGEMENT SYSTEM\n");
        printf("=========================================\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                printf("\nThank you for using the Student Management System.\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}