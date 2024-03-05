#include <stdio.h>
int main (){
    int secret_number;
    int guess_number;
    int i;
    int guess_limit;
    guess_limit = 3;

    secret_number = 5;

    for (i=1; i<=guess_limit; i++){
        printf("Guess a number %d", i);
        scanf("%d", &guess_number);

        if (guess_number == secret_number){
            printf("You won!");
        }break;
    }
    if (guess_number != secret_number){
        printf("You lost");
    }
    return 0;

}