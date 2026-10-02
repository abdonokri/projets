# include <stdio.h>
int main(){
    float ci;
// F=(C×9/5)+32
    printf("Entre your temperature in cilusiuc: ");
    scanf("%f", &ci);
    printf("Temperature in Fahrenheit: %.2f\n", (ci*9/5)+32 );
    return 0;
}