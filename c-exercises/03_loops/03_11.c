#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int pc = rand() % 100 + 1;
    int user;
    printf("Guess the number to egal pc: ");
    scanf("%d", &user);

    while (user != pc){

        printf("Guess the number to egal pc: ");
        scanf("%d", &user);
        if (user < pc){
            printf("you number is low: \n");
        }else if(user > pc){
            printf("your number is hight: \n");
        }else{
            break;
        }
    }
    printf("gradulation you win\n");
    return 0;
}
