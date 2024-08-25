#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    srand(time(NULL));

    int random = (rand() % 100 + 1);
    int guess;
    int random_number_guess = 0;
    

    printf("Welcome to the World of Guessing Numbers !!\n");

    do{
        printf("Please Enter the guess number between (1 to 100):\n");    
        scanf("%d", &guess);
        random_number_guess++;
        
        if (guess < random){
            printf("Guess the greater number.\n");
        }

        else if (guess > random){
            printf("Guess the smaller number.\n");
        }

        else{
            printf("Congratulations you have guessed the Number in %d attempts.\n", random_number_guess);
        }
    } while (random != guess);

    printf("Thank you for playing Guessing game.\n");
    printf("Created by Jenil Patel.\n");
    return 0;
}