# include <stdio.h>
int main(){
    int user;
    int sum;
    int i = 0;
    int reverse = 0;
    int thing;
    printf("Entre number to inverser: ");
    scanf("%d", &user);
    thing = user;

    while (user != 0){
        i = user % 10;
        reverse = reverse * 10 + i;
        sum = user / 10;
        user = sum;
    }
    user = thing;
    if (user == reverse){
        printf("this number is plindrome:\n");

    }else{
        printf("not plindrome\n");
    }
    return 0;
}