# include<stdio.h>
int main(){
    int i;
    int sum = 0;
    printf("Entre any number: ");
    scanf("%d", &i);

    for (int n = 1; n <= i; n++){
        sum = sum + n;
        printf("%d + ", sum);
    }
    return 0;
}