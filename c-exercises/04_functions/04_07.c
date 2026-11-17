# include <stdio.h>
int get_max(int a, int b){
    if (a>b){
        return a;
    }else{
        return b;
    }
}
int is_even(int n){
    if (n % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

void display(int a, int b){
    int max = get_max(a, b);
    printf("max number is : %d\n", max);

    int result = is_even(max);
    if (result == 1){
        printf("it's even \n");
    }else{
        printf("it's odd\n");
    }
    
}
int main(){
    int a;
    int b;

    printf("entre first number: ");
    scanf("%d", &a);
    printf("entre second number: ");
    scanf("%d", &b);
    display(a, b);
    return 0;

}