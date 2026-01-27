#include<stdio.h>
int main(){
    int a,exp,salary,bonus,amount;
    scanf("%d %d",&a,&exp);

    switch (a)
    {
    case 1:
        if(exp<3){
            amount=50000;
            printf("Salary %d",amount);
        }
        else if(exp>=3){
            salary=50000;
            bonus=exp*5000+salary;
            printf("Salary %d",bonus);
        }
        break;
    
    case 2:
        if(exp<3){
            amount=35000;
            printf("Salary %d",amount);
        }
        else if(exp>=3){
            salary=35000;
            bonus=exp*5000+salary;
            printf("Salary %d",bonus);
        }
        break;
    
    default:
        printf("Enter valid number");
        break;
    }
}