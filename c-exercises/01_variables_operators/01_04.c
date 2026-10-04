#include <stdio.h>
int main(){
    int a ;
    int b ;
    int temps;
    printf("Entre a: ");
    scanf("%d", &a);

    printf("Entre b: ");
    scanf("%d", &b);

    printf("Before swap: \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    temps = b;
    b = a;
    a = temps;
    printf("After swap: \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0; 
}