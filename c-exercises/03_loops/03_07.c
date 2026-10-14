# include <stdio.h>
int main(){
    int i;
    int n = 0;
    int sum;
    printf("Entre any number: ");
    scanf("%d", &i);
    while (i != 0)
    {
        n++;
        sum = i / 10;
        i = sum;
    }
    printf("%d", n);
    return 0;
    
}