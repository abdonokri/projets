# include <stdio.h>
int main(){
    int i = 1;
    int user;
    int n = 0;
    printf("Entre your number: ");
    scanf("%d", &user);

    for (i; i <= user; i++){
        if (user % i == 0){
            n++;
           
        }
    }
    if( n==2){
        printf("this number is prime\n");
    }else{
        printf("this number is not prime");
    }
    return 0;
}