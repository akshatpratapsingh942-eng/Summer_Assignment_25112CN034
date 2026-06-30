#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    int roll[MAX], n = 0, i, searchRoll, found = 0;
    char name[MAX][50];
    float marks[MAX];
    int choice;

    do {
        printf("\n========== Student Record System ==========\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            if(n >= MAX) {
                printf("Record storage is full!\n");
                break;
            }

            printf("\nEnter Roll Number: ");
            scanf("%d", &roll[n]);

            printf("Enter Student Name: ");
            scanf(" %[^\n]", name[n]);

            printf("Enter Marks: ");
            scanf("%f", &marks[n]);

            n++;
            printf("Student record added successfully!\n");
            break;

        case 2:
            if(n == 0) {
                printf("No records available.\n");
                break;
            }

            printf("\n---------------------------------------------\n");
            printf("Roll No\tName\t\tMarks\n");
            printf("---------------------------------------------\n");

            for(i = 0; i < n; i++) {
                printf("%d\t%-15s%.2f\n", roll[i], name[i], marks[i]);
            }
            break;

        case 3:
            printf("\nEnter Roll Number to search: ");
            scanf("%d", &searchRoll);

            found = 0;

            for(i = 0; i < n; i++) {
                if(roll[i] == searchRoll) {
                    printf("\nStudent Found!\n");
                    printf("Roll Number : %d\n", roll[i]);
                    printf("Name        : %s\n", name[i]);
                    printf("Marks       : %.2f\n", marks[i]);
                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("Student record not found.\n");

            break;

        case 4:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}