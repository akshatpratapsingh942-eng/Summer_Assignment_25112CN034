#include <stdio.h>

struct BankAccount 
{
    int accNo;
    char name[50];
    float balance;
};

int main() 
{
    struct BankAccount acc[100];
    int n = 0, choice, i, accNo, found;
    float amount;

    do 
    {
        printf("\n BANK ACCOUNT ACCOUNT SYSTEM \n");
        printf("1. Create Account\n");
        printf("2. Display All Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Check Balance\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {

        case 1:
            printf("Enter Account Number: ");
            scanf("%d", &acc[n].accNo);

            printf("Enter Account Holder Name: ");
            scanf(" %[^\n]", acc[n].name);

            printf("Enter Initial Balance: ");
            scanf("%f", &acc[n].balance);

            n++;
            printf("Account created successfully.\n");
            break;

        case 2:
            if(n == 0) 
            {
                printf("No accounts available.\n");
            } else {
                printf("\n-----------------------------------------------------------\n");
                printf("Acc No\tName\t\t\tBalance\n");
                printf("-----------------------------------------------------------\n");

                for(i = 0; i < n; i++) 
                {
                    printf("%d\t%-20s\t%.2f\n",
                           acc[i].accNo,
                           acc[i].name,
                           acc[i].balance);
                }
            }
            break;

        case 3:
            printf("Enter Account Number: ");
            scanf("%d", &accNo);

            found = 0;

            for(i = 0; i < n; i++) 
            {
                if(acc[i].accNo == accNo) 
                {
                    printf("Enter Deposit Amount: ");
                    scanf("%f", &amount);

                    acc[i].balance += amount;
                    printf("Deposit successful.\n");
                    printf("New Balance = %.2f\n", acc[i].balance);
                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Account not found.\n");
            break;

        case 4:
            printf("Enter Account Number: ");
            scanf("%d", &accNo);

            found = 0;

            for(i = 0; i < n; i++) 
            {
                if(acc[i].accNo == accNo) 
                {
                    printf("Enter Withdrawal Amount: ");
                    scanf("%f", &amount);

                    if(amount <= acc[i].balance) 
                    {
                        acc[i].balance -= amount;
                        printf("Withdrawal successful.\n");
                        printf("Remaining Balance = %.2f\n", acc[i].balance);
                    } else 
                    {
                        printf("Insufficient Balance.\n");
                    }
                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Account not found.\n");
            break;

        case 5:
            printf("Enter Account Number: ");
            scanf("%d", &accNo);

            found = 0;

            for(i = 0; i < n; i++) 
            {
                if(acc[i].accNo == accNo) 
                {
                    printf("\nAccount Number : %d\n", acc[i].accNo);
                    printf("Account Holder : %s\n", acc[i].name);
                    printf("Current Balance: %.2f\n", acc[i].balance);
                    found = 1;
                    break;
                }
            }

            if(!found)
                printf("Account not found.\n");
            break;

        case 6:
            printf("Thank you for using the Bank Management System.\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 6);

    return 0;
}