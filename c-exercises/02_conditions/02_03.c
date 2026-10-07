# include <stdio.h>
int main(){
        int user;
        printf("Entre any year to know it's bissextile or not: ");
        scanf("%d", &user);

        if (user % 400 == 0 || (user % 4 == 0 && user %100 != 0)){
            printf("%d is a leap year\n", user);
        }else{
            printf("this year not bissextile\n");

        }
        return 0;
}