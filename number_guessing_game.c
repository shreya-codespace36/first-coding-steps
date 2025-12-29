#include <stdio.h>

int main() {
    int secret = 5;
    int guess;

    printf("🎯 Welcome to Number Guessing Game!\n");
    printf("Guess a number between 1 and 10: ");
    scanf("%d", &guess);

    if (guess == secret) {
        printf("🎉 Yay! You guessed it right!");
    } else if (guess > secret) {
        printf("📉 Too high! Try again.");
    } else {
        printf("📈 Too low! Try again.");
    }

    return 0;
}
