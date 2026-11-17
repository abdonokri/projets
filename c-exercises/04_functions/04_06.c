# include <stdio.h>
#include <stdlib.h>
# include <unistd.h>

// 1 → Deposit money.
int deposit_money(int money, int balance){
    if (money> 0){
         return balance + money;
    }else{
        return balance;
    }
}

// 2 → Withdraw money.
int withdraw_money(int money, int balance){
    if (balance <= 0){
        return balance;
    }else if(money > balance){
        return balance;
    }else if (money <=0){
        return balance;
    }else{
        return balance - money;
    }
}
// 3 → Display balance.
void display_balance(int balance){
    printf("****  your balance is : %d DH  ****\n", balance);
}
void display(){
    printf("1- deposit money\n");
    printf("2- withdraw money\n");
    printf("3- display money\n");
    printf("4- Exit\n");
}
int main(){
    int user;
    int balance = 1000;
    int old_balance;
    int money;
    
   
    do {
        system("clear");
        display();
        
        printf("entre what you want to do today: ");
        scanf("%d", &user);

        if (user == 1){
            printf("entre how you want to put in your account: ");
            scanf("%d", &money);
            old_balance = balance;
            balance = deposit_money(money, balance);
            if (balance == old_balance){
                printf("invalid operation try again! \n");
                sleep(1);
                
            }else{
                printf("\n deposit succeful \n");
                sleep(1);
            }
           

        }else if(user == 2){
            printf("entre how you want to withdraw in your account: ");
            scanf("%d", &money);
            old_balance = balance;
            balance = withdraw_money(money, balance);
            if (balance == old_balance){
                printf("invalid operation try again! or check your account! \n");
                sleep(1);

            }else{
                printf("\n withdraw successful \n");
                sleep(1);
            }
            
        }else if ( user == 3){
            display_balance(balance);
            sleep(2);
        }else if (user == 4){
            break;
        }else{
            printf("Error! ");
            sleep(1);
        }

    }while (user!=4);
        
    return 0;
}
