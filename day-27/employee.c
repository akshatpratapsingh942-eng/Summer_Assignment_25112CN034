#include <stdio.h>
#include <string.h>

#define MAX 100

struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};

struct Employee emp[MAX];
int count = 0;

// Function to add employee
void addEmployee() {
    if (count >= MAX) {
        printf("\nEmployee database is full!\n");
        return;
    }

    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp[count].name);

    printf("Enter Department: ");
    scanf(" %[^\n]", emp[count].department);

    printf("Enter Salary: ");
    scanf("%f", &emp[count].salary);

    count++;
    printf("\nEmployee added successfully!\n");
}

// Function to display employees
void displayEmployees() {
    if (count == 0) {
        printf("\nNo employee records found.\n");
        return;
    }

    printf("\n================ Employee Records ================\n");
    printf("%-10s %-20s %-15s %-10s\n", "ID", "Name", "Department", "Salary");
    printf("-------------------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%-10d %-20s %-15s %.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].department,
               emp[i].salary);
    }
}

// Function to search employee
void searchEmployee() {
    int id, found = 0;

    printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (emp[i].id == id) {
            printf("\nEmployee Found!\n");
            printf("ID         : %d\n", emp[i].id);
            printf("Name       : %s\n", emp[i].name);
            printf("Department : %s\n", emp[i].department);
            printf("Salary     : %.2f\n", emp[i].salary);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nEmployee not found.\n");
}

// Function to delete employee
void deleteEmployee() {
    int id, found = 0;

    printf("\nEnter Employee ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (emp[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                emp[j] = emp[j + 1];
            }
            count--;
            found = 1;
            printf("\nEmployee record deleted successfully.\n");
            break;
        }
    }

    if (!found)
        printf("\nEmployee not found.\n");
}

int main() {
    int choice;

    do {
        printf("\n========== Employee Management System ==========\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Delete Employee\n");
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
                deleteEmployee();
                break;

            case 5:
                printf("\nExiting Employee Management System...\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}