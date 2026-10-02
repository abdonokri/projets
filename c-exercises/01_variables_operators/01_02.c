# include <stdio.h>
int main(){
    float first;
    float sec;
    float trt;
    printf("Entre first number: ");
    scanf("%f", &first);

    printf("Entre second number: ");
    scanf("%f", &sec);

    printf("Entre teerty number: ");
    scanf("%f", &trt);

    printf("%.2f\n", (first + sec + trt)/3);
    return 0;
}