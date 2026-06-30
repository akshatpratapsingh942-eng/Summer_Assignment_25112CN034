#include <stdio.h>

#define MAX 100

struct Employee {
    int empID;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};

struct Employee emp[MAX];
int count = 0;

// Function to add employee salary details
void addEmployee() {
    if (count >= MAX) {
        printf("\nDatabase is full!\n");
        return;
    }

    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].empID);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp[count].name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp[count].basicSalary);

    // Calculate HRA and DA
    emp[count].hra = emp[count].basicSalary * 0.20; // 20%
    emp[count].da = emp[count].basicSalary * 0.10;  // 10%
    emp[count].grossSalary = emp[count].basicSalary +
                             emp[count].hra +
                             emp[count].da;

    count++;

    printf("\nSalary record added successfully!\n");
}

// Function to display all salary records
void displayEmployees() {
    if (count == 0) {
        printf("\nNo records found.\n");
        return;
    }

    printf("\n================ Salary Records ================\n");
    printf("ID\tName\t\tBasic\tHRA\tDA\tGross\n");
    printf("---------------------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%d\t%-12s\t%.2f\t%.2f\t%.2f\t%.2f\n",
               emp[i].empID,
               emp[i].name,
               emp[i].basicSalary,
               emp[i].hra,
               emp[i].da,
               emp[i].grossSalary);
    }
}

// Function to search employee salary
void searchEmployee() {
    int id, found = 0;

    printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (emp[i].empID == id) {
            printf("\nEmployee Found!\n");
            printf("ID            : %d\n", emp[i].empID);
            printf("Name          : %s\n", emp[i].name);
            printf("Basic Salary  : %.2f\n", emp[i].basicSalary);
            printf("HRA           : %.2f\n", emp[i].hra);
            printf("DA            : %.2f\n", emp[i].da);
            printf("Gross Salary  : %.2f\n", emp[i].grossSalary);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nEmployee record not found.\n");
}

// Function to update salary
void updateSalary() {
    int id, found = 0;

    printf("\nEnter Employee ID to update salary: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (emp[i].empID == id) {
            printf("Enter New Basic Salary: ");
            scanf("%f", &emp[i].basicSalary);

            emp[i].hra = emp[i].basicSalary * 0.20;
            emp[i].da = emp[i].basicSalary * 0.10;
            emp[i].grossSalary = emp[i].basicSalary +
                                 emp[i].hra +
                                 emp[i].da;

            printf("\nSalary updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nEmployee record not found.\n");
}

int main() {
    int choice;

    do {
        printf("\n========== Salary Management System ==========\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display Salary Records\n");
        printf("3. Search Employee Salary\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                updateSalary();
                break;

            case 5:
                printf("\nThank you for using the Salary Management System.\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}