#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess;
    srand(time(0));
    number = rand() % 100;

    printf("Guess a number between 0 and 99:\n");
    do {
        scanf("%d", &guess);
        if (guess < number) printf("Higher!\n");
        else if (guess > number) printf("Lower!\n");
        else printf("Correct!\n");
    } while (guess != number);
    
    return 0;
}
