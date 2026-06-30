#include <stdio.h>

int main() {
    int choice;
    int pin = 1234, enteredPin;
    float balance = 10000.00;
    float deposit, withdraw;

    printf("=====================================\n");
    printf("         ATM SIMULATION SYSTEM\n");
    printf("=====================================\n");

    // PIN Verification
    printf("Enter Your 4-Digit PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("\nIncorrect PIN! Access Denied.\n");
        return 0;
    }

    do {
        printf("\n========== ATM MENU ==========\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nCurrent Balance: Rs. %.2f\n", balance);
                break;

            case 2:
                printf("\nEnter Amount to Deposit: Rs. ");
                scanf("%f", &deposit);

                if (deposit > 0) {
                    balance += deposit;
                    printf("Deposit Successful!\n");
                    printf("Updated Balance: Rs. %.2f\n", balance);
                } else {
                    printf("Invalid Deposit Amount!\n");
                }
                break;

            case 3:
                printf("\nEnter Amount to Withdraw: Rs. ");
                scanf("%f", &withdraw);

                if (withdraw <= 0) {
                    printf("Invalid Withdrawal Amount!\n");
                } else if (withdraw > balance) {
                    printf("Insufficient Balance!\n");
                } else {
                    balance -= withdraw;
                    printf("Withdrawal Successful!\n");
                    printf("Remaining Balance: Rs. %.2f\n", balance);
                }
                break;

            case 4:
                printf("\nThank You for Using Our ATM.\n");
                break;

            default:
                printf("\nInvalid Choice! Please Try Again.\n");
        }

    } while (choice != 4);

    return 0;
}