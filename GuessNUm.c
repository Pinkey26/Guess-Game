#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{   
    int random , guess;
    int numguess=0;
    srand(time(NULL));

    printf("\n\n******************Welcome to the world of Guessing Number******************\n");
    random = rand() % 100 + 1 ;

    
    do {
        printf("\nPlease enter  the guessing number between(1 to 100): ");
        scanf("%d",&guess);
        if (guess > 100 || guess < 1) {
            printf("\n\n****************************************************************");
            printf("\nInvalid input! Number should be between (1 and 100).");
            printf("\n****************************************************************");
            printf("\nProgram will now exit.\n");
            return 0; // exit the program if input is out of range
        }
        numguess++;

        if(guess < random) {
            printf("Guess larger number\n ");
        }
        else if(guess>random) {
            printf("Guess smaller number\n ");
        }
        else {
            printf("\n\n****************************************************************");
            printf("\nCongratulation! YOU have Succcesfully guessed the number in [ %d ] attempt",numguess);
            printf("\n****************************************************************");

        }
    }
    while( guess != random );
    
    printf("\n");
    printf("\nThanks for Playing");
    printf("\nDeveloped by PINKEY PRASAD");
    
    return 0;
}