#include<stdio.h>
int main(){
    int a,num;
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        num=1000;
        printf("Fine Rs.%d",num);
        break;

    case 2:
        num=1500;
        printf("Fine Rs.%d",num);
        break;

    case 3:
        num=2000;
        printf("Fine Rs.%d",num);
        break;

    default:
        printf("Enter valid number");
        break;
    }
}