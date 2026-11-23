# include <stdio.h>
int main(){
    int i; 
    int numbers[5];
    for (i= 0; i<=4; i++){
        printf("entre number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        
    }
    for (int a = 0; a <=4 ; a++){
        printf("%d\n", numbers[a]);
    }
    return 0;
}