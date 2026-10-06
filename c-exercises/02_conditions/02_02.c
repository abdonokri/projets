#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Entre a: ");
    scanf("%d", &a);

    printf("Entre b: ");
    scanf("%d", &b);

    printf("Entre c: ");
    scanf("%d", &c);

    if (a >= b && a >= c){
        printf("the greatest number is %d\n", a);
    }else if (b >= a && b >= c){
        printf("the greatest number is %d\n", b);
    }else if (c >= a && c >= b){
        printf("the greatest number is %d\n", c);
    }
    return 0;
}