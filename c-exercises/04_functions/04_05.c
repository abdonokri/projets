#include<stdio.h>
float calculate_average(float a, float b, float c){
    return (a + b + c ) / 3;
}

int is_passed(float average){
    if (average >= 10 ){
        return 1;
    }else{
        return 0;
    }
}

void display_result(float average, int passed){
    printf("the average is: %.2f\n", average);
    if (passed == 1){
        printf("the ressult is: passed\n");
    }else{
        printf("the ressult is: faild\n");
    }
}
int main(){
    int a;
    int b;
    int c;
    float average;
    int passed;
    printf("entre first number: ");
    scanf("%d", &a);
    printf("entre second number: ");
    scanf("%d", &b);
    printf("entre the last number: ");
    scanf("%d", &c);

    average = calculate_average(a, b, c);
    passed = is_passed(average);
    display_result(average, passed);
    return 0;
}