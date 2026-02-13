#include<stdio.h>

int calculator(int num1,int num2,char num){
    int x=0;
    switch (num)
    {
    case '+':
        x=num1+num2;
        break;
    case '-':
        x=num1-num2;
        break;
    case '*':
        x=num1*num2;
        break;
    case '/':
        x=num1/num2;
        break;
    default:
        break;
    }
    return x;
}

int main(){
    int num1,num2;
    char choice;
    scanf("%d %d ",&num1,&num2);
    scanf("%c", &choice);
    int z=calculator(num1,num2,choice);
    printf("%d",z);
    return 0;
}