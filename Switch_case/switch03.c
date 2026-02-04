#include<stdio.h>
int main(){
    int account,balance,withdraw;
    scanf("%d %d %d",&account,&balance,&withdraw);

    switch (account)
    {
    case 1:
        if(withdraw<=5000){
            printf("Transaction successsfull");
        }
        break;

    case 2:
        if(withdraw>5000){
            printf("Limit Exceeded");
        }
         
    default:
        break;
    }
}
