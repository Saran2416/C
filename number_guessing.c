#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    srand(time(0));
    secret = rand() % 100 + 1; // random number between 1 and 100

    printf("Number Guessing Game\n");
    printf("I have picked a number between 1 and 100.\n");
    printf("Try to guess it!\n");

    while (1) {
        printf("Enter your guess: ");

        if (scanf("%d", &guess) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // clear input buffer
            continue;
        }

        attempts++;

        if (guess < 1 || guess > 100) {
            printf("Please guess a number between 1 and 100.\n");
        } else if (guess < secret) {
            printf("Too low! Try again.\n");
        } else if (guess > secret) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempt(s).\n", secret, attempts);
            break;
        }
    }

    return 0;
}
