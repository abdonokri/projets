# include <stdio.h>
int main(){
    float user;
    printf("Entre your number: ");
    scanf("%f", &user);

    if (user > 0){
        printf("%.2f is positive\n", user);
    }else if(user < 0){
        printf("%.2f is negative\n", user);
    }else{
        printf("this number is zero\n");

    }
    return 0;
}