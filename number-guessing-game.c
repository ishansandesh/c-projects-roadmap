#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num;
    int rand_num;
    int point = 0;
    
    printf("|-----------------------------------------------------|\n");
    printf("|-------------- Number Guessing Game -----------------|\n");
    printf("|-----------------------------------------------------|\n\n");
    printf("Guess the number between 1 and 100\n");
    printf("You have 7 attempts!\n");
    srand(time(0));
    rand_num = (rand() % 100) + 1;

    while (point < 7){
        printf("[*] Enter Guess Number: ");
        scanf("%d",&num);
        if (num == rand_num){
            printf("[Correct! You guessed it in %d attempts!\n!]",point);
            break;
        }else if (num > rand_num){
            printf("Tooo high!\n");
            point++;
        }else if (num < rand_num){
            printf("Tooo Low!\n");
            point++;
        }
    }
    if (num != rand_num){
        printf("[x] Game Over! The number was: %d\n",rand_num);
    }


    return 0;
}