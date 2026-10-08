# include <stdio.h>
# include<string.h>
int main(){
    char username [20] = "admin";
    int password = 1234;

    printf ("Entre username: ");
    scanf("%s", username);

    printf("Entre password: ");
    scanf("%d", &password);

    if (strcmp(username, "admin") == 0 && password == 1234){
        printf("login successful\n");
    }else{
        printf("Invalid username or password\n");
    }
    return 0;
}