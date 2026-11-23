# include <stdio.h>
int main(){
    int number [4];
    printf("entre 4 number separer with cama: ");
    scanf("%d", &number[0]);
    scanf(" %d", &number[1]);
    scanf(" %d", &number[2]);
    scanf(" %d", &number[3]);

    
    
    printf("%d\n", number[0]);
    printf("%d\n", number[1]);
    printf("%d\n", number[2]);
    printf("%d\n", number[3]);
    
    return  0;
}