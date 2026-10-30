# include <stdio.h>
int is_even(int n){
    if (n % 2 == 0 ){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    for (int i= 1; i <= 5 ; i++){
        int result = is_even(i);
        printf("%d\n", result);
    }
    return 0;
}