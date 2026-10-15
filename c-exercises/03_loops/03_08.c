# include <stdio.h>
int main(){
    int user;
    int sum;
    int i = 0;
    int reverse = 0;
    printf("Entre number to inverser: ");
    scanf("%d", &user);

    while (user != 0){
        i = user % 10;
        reverse = reverse * 10 + i;
        sum = user / 10;
        user = sum;
    }
    printf("%d\n", reverse);
    return 0;
}