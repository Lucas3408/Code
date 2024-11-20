#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int number = rand() % 100 + 1;
    int count = 0;
    int a;

    printf("I've chosen a number between 1 and 100. Can you guess it?\n");
    do
    {
        printf("Enter your guess: ");
        scanf("%d", &a);
        count++;
        if (a > number)
        {
            printf("Too high!\n");
        }
        else if (a < number)
        {
            printf("Too low!\n");
        }
    } while (a != number);
    printf("Congratulations! You guessed the number in %d attempts.\n", count);
    
    system("pause");
    return 0;
}