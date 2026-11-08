# include <stdio.h>
int is_positive(int n) {
    if (n > 0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int a;
    int max;
    printf("entre any number: ");
    scanf("%d", &a);



    max = is_positive(a);
    printf("%d\n", max);
    return 0;
}