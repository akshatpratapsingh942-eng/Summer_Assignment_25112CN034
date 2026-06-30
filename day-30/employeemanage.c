#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    int id[MAX], count = 0, choice, searchID, i, j, found;
    char name[MAX][50], department[MAX][30];
    float salary[MAX];

    do {
        printf("\n========== MINI EMPLOYEE MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            if(count >= MAX) {
                printf("Employee database is full!\n");
                break;
            }

            printf("\nEnter Employee ID: ");
            scanf("%d", &id[count]);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", name[count]);

            printf("Enter Department: ");
            scanf(" %[^\n]", department[count]);

            printf("Enter Salary: ");
            scanf("%f", &salary[count]);

            count++;
            printf("Employee added successfully!\n");
            break;

        case 2:
            if(count == 0) {
                printf("No employee records found.\n");
                break;
            }

            printf("\n---------------------------------------------------------------\n");
            printf("ID\tName\t\tDepartment\tSalary\n");
            printf("---------------------------------------------------------------\n");

            for(i = 0; i < count; i++) {
                printf("%d\t%-15s%-15s%.2f\n",
                       id[i], name[i], department[i], salary[i]);
            }
            break;

        case 3:
            printf("\nEnter Employee ID to search: ");
            scanf("%d", &searchID);

            found = 0;

            for(i = 0; i < count; i++) {
                if(id[i] == searchID) {
                    printf("\nEmployee Found!\n");
                    printf("ID         : %d\n", id[i]);
                    printf("Name       : %s\n", name[i]);
                    printf("Department : %s\n", department[i]);
                    printf("Salary     : %.2f\n", salary[i]);
                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Employee not found.\n");
            break;

        case 4:
            printf("\nEnter Employee ID to update salary: ");
            scanf("%d", &searchID);

            found = 0;

            for(i = 0; i < count; i++) {
                if(id[i] == searchID) {
                    printf("Current Salary: %.2f\n", salary[i]);
                    printf("Enter New Salary: ");
                    scanf("%f", &salary[i]);

                    printf("Salary updated successfully!\n");
                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Employee not found.\n");
            break;

        case 5:
            printf("\nEnter Employee ID to delete: ");
            scanf("%d", &searchID);

            found = 0;

            for(i = 0; i < count; i++) {
                if(id[i] == searchID) {
                    for(j = i; j < count - 1; j++) {
                        id[j] = id[j + 1];
                        strcpy(name[j], name[j + 1]);
                        strcpy(department[j], department[j + 1]);
                        salary[j] = salary[j + 1];
                    }

                    count--;
                    printf("Employee record deleted successfully!\n");
                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Employee not found.\n");
            break;

        case 6:
            printf("Thank you for using the Mini Employee Management System.\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 6);

    return 0;
}