# include <stdio.h>
int main(){
    int a;
    int b;
    char opera;
    printf("Entre a: ");
    scanf("%d", &a);

    printf("Entre b: ");
    scanf("%d", &b);

    printf("entre your operation: ");
    scanf(" %c", &opera);

    switch(opera){
        case '+':
            printf("%d\n", a+b);
            break;
        case '-':
            printf("%d\n", a-b);
            break;
        case '*':
            printf("%d\n", a*b);
            break;
        case '/':
            if (b != 0){ 
                printf("%d\n", a/b);
                break;
            }else{
                printf("impossible to divise by 0!\n");
            }
            break;
        case '%':
            if (b != 0){
                printf("%d\n", a % b);
                break;
            }else{
                printf("impossible to divise by 0 !!\n");
            }
            break;
        default:
            printf("invlid choice: \n");
            break;
    }
    return 0;

}