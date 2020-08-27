#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, attempts = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("Lets check your BRAIN \n");
    printf("BEST OF LUCK !! \n");
    printf("Let's Begin! \n");
    printf("\n");
    do
    {
        printf("Guess the Number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Guess lower number please because you entered higher number \n");
        }
        else if (guess < number)
        {
            printf("Guess higher number please because you entered lower number \n");
        }
        else
        {
            printf("Congratulations !! You have correctly guessed the number , congrats once again\n");
            printf("You have guessed the correct  number in %d attempts", attempts);
        }
        attempts++;
    } while (guess != number);

    return 0;
}