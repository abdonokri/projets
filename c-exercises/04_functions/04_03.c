# include <stdio.h>
int get_max(int a, int b){
    if (a > b){
        return a;
    }else{
        return b;
    }
}
int main(){
    int a;
    int b;
    int max;
    printf("entre first number: ");
    scanf("%d", &a);

    printf("entre second number: ");
    scanf("%d", &b);

    max = get_max(a, b);
    printf("%d\n", max);
    return 0;
}