#include<stdio.h>
int main(){
    float user;
    printf("Entre your grade: ");
    scanf("%f", &user);

    if (user >= 16){
        printf("Trés bien\n");
    }else if (user >= 14){
        printf("Bien \n");
    }else if (user >= 12){
        printf("Assez bien\n");
    }else if (user >= 10){
        printf("Passable\n");
    }else{
        printf("Echec\n");
    }
    return 0;
}