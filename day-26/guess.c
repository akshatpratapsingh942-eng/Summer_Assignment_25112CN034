#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    secretNumber = rand() % 100 + 1;

    printf("=====================================\n");
    printf("      NUMBER GUESSING GAME\n");
    printf("=====================================\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Can you guess it?\n");

    do {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secretNumber) {
            printf("Too High! Try Again.\n");
        }
        else if (guess < secretNumber) {
            printf("Too Low! Try Again.\n");
        }
        else {
            printf("\nCongratulations!\n");
            printf("You guessed the correct number: %d\n", secretNumber);
            printf("Total Attempts: %d\n", attempts);
        }

    } while (guess != secretNumber);

    return 0;
}