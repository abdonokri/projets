# include <stdio.h>
int main(){
    int number[5];
    float sum = 0;

    for (int i = 0; i <= 4; i++){
        printf("entre number : ");
        scanf("%d", &number[i]);
        sum = sum + number[i];
    }
    printf("sum : %.2f\n", sum);
    printf("average is : %.2f\n", sum/5);
    return 0;
    
}