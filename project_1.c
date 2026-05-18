#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber;

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 to 100.
    randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;
    // Output the random number
    // printf("Random number: %d\n", randomNumber);
    do
    {
        printf(" Guess the number between 1 to 100\n");
        scanf("%d", &guessed);
        if (guessed > randomNumber)
        {
            printf("Lower number please \n");
        }
        else if (guessed < randomNumber)
        {
            printf("Higher number please \n");
        }
        no_of_guesses++;
    } while (guessed != randomNumber);
    printf(" You have guessed the number in %d guesses", no_of_guesses);

    return 0;
}
