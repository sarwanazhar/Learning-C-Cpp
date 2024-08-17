#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

int main () {
    int guessNumberBetween;
    printf("what number do you want to guess between 0 to : ");
    scanf("%d", &guessNumberBetween);


    srand(time(0));
    int randomNumber = (rand() % guessNumberBetween) + 1;
    int numberOfGuesses = 0;
    int guess;

    do
    {
        printf("Guess the number between 0 - %d: ", guessNumberBetween);
        scanf("%d", &guess);

        if (guess < randomNumber)
        {   
            printf("higher \n");
        } else {
            printf("lower \n");
        }
        

        numberOfGuesses ++;
    } while (guess != randomNumber);

    printf("you guessed the number it was %d and in %d guesses. \n", randomNumber, numberOfGuesses);
    


    return 0;
}