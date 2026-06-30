#include <stdio.h>

int main() {
    char name[50], nationality[30];
    int age;

    printf("=====================================\n");
    printf("      VOTING ELIGIBILITY SYSTEM\n");
    printf("=====================================\n");

    // Input details
    printf("Enter Your Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Your Age: ");
    scanf("%d", &age);

    printf("Enter Your Nationality: ");
    scanf(" %[^\n]", nationality);

    // Check eligibility
    if (age >= 18) {
        printf("\n-------------------------------------\n");
        printf("Name        : %s\n", name);
        printf("Age         : %d\n", age);
        printf("Nationality : %s\n", nationality);
        printf("Status      : Eligible to Vote\n");
    } else {
        printf("\n-------------------------------------\n");
        printf("Name        : %s\n", name);
        printf("Age         : %d\n", age);
        printf("Nationality : %s\n", nationality);
        printf("Status      : Not Eligible to Vote\n");
        printf("Reason      : Minimum voting age is 18 years.\n");
    }

    return 0;
}