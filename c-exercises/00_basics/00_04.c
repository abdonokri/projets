#include <stdio.h>
int main(){
    int age; 
    char name[20];
    printf("name: ");
    scanf("%s", name);
    printf("age: ");
    scanf("%d", &age);
    printf("Hello %s, you are %d years old.\n", name, age);
    return 0;
}