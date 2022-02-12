#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess,nguesses=1;
    srand(time(0));            //for different random numbers
    number = rand() % 100 + 1; //to print numbers from 1 to 100    printf("the number is %d",number);
   // printf("The number is %d\n", number);
    //keep running the loop until the number is guessed
    do
    {
        printf("Guess the number between 1 to 100:\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("You guesses it in %d attempts\n",nguesses);
        }
        nguesses++;
    } while (guess!=number);
    return 0;
}