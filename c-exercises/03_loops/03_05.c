# include <stdio.h>
int main(){
    int i ;
    printf("Entre a number to do table multiblication: ");
    scanf("%d", &i);

    for(int n = 1 ; n <=10 ; n++){
        printf("%d x %d = %d\n", i, n, i*n);
    }
    return 0;
}