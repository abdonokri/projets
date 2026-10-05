# include <stdio.h>
int main(){
    int a ;
    int b;
    printf("Entre first number: ");
    scanf("%d", &a);

    printf("Entre second number: ");
    scanf("%d", &b);
    if (a>b){
        printf("%d is greater than %d\n", a, b);
    }else if (a<b){
        printf("%d is lower than %d\n", a, b);
    }else{
        printf("the two numbers are equal\n");
    }
    return 0;
}