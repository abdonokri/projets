# include <stdio.h>
int main(){
    int user; 

    printf("Entre your number: ");
    scanf("%d", &user);

    if (user % 2 == 0){
        printf("%d is even\n", user);
    }else{
        printf("%d is odd \n", user);

    }
    return 0;
}