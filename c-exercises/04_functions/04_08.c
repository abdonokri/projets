# include <stdio.h>
void introduce (char name[], int age){
    printf("\nHello %s\n", name);
    printf("you are %d years old\n", age);
    printf("*** Welcome to C programming ***\n");
}
int main(){
    int age;
    char name[30];
    printf("Entre your name: ");
    scanf("%s", name);
    printf("Entre your age: ");
    scanf("%d", &age);
    

    introduce(name, age);
    return 0;
}