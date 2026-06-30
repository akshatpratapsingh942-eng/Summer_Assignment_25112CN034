#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("=====================================\n");
    printf("        QUIZ APPLICATION\n");
    printf("=====================================\n");

    // Question 1
    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    // Question 2
    printf("\n2. Who is known as the Father of C Language?\n");
    printf("1. Bjarne Stroustrup\n2. James Gosling\n3. Dennis Ritchie\n4. Guido van Rossum\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    // Question 3
    printf("\n3. Which symbol is used to end a statement in C?\n");
    printf("1. :\n2. ;\n3. ,\n4. .\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    // Question 4
    printf("\n4. Which loop is guaranteed to execute at least once?\n");
    printf("1. for\n2. while\n3. do-while\n4. None\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    // Question 5
    printf("\n5. Which function is used to print output in C?\n");
    printf("1. scanf()\n2. print()\n3. printf()\n4. display()\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    // Display Result
    printf("\n=====================================\n");
    printf("            QUIZ RESULT\n");
    printf("=====================================\n");
    printf("Your Score: %d out of 5\n", score);

    if (score == 5)
        printf("Excellent! You got all answers correct.\n");
    else if (score >= 3)
        printf("Good Job! You passed the quiz.\n");
    else
        printf("Better luck next time. Keep practicing!\n");

    return 0;
}