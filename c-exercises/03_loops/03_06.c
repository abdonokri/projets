# include <stdio.h>
int main(){
    int i ;
    int sum = 1;
    printf("Entre number for factorial: "); 
    scanf("%d", &i);

    for ( i ; i > 0; i--){
        sum = sum * i;
    }
    printf("%d\n", sum);
    return 0;
}