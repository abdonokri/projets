# include <stdio.h>
int main(){
    float a;
    float b;
    char opera;
    printf("Entre fisrt number: ");
    scanf("%f", &a);

    printf("Entre the operation: ");
    scanf(" %c", &opera);

    printf("Entre seconde number: ");
    scanf("%f", &b);

    if(opera == '+'){
        printf("%.2f + %.2f = %.2f\n", a, b, a+b);
    }else if(opera == '-'){
        printf("%.2f - %.2f = %.2f\n", a, b, a-b);
    }else if(opera == '*'){
        printf("%.2f * %.2f = %.2f\n", a, b, a*b);
    }else if (opera == '/'){
        if (b == 0){
            printf("cannot division in 0 !\n");
        }else{
            printf("%.2f / %.2f = %.2f\n", a, b, a/b);
        }
    }
    return 0;
}