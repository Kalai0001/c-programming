#include<stdio.h>
int main(){
    int a,num;
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        num=40;
        printf("Delivery Charge Rs.%d",num);
        break;

    case 2:
        num=120;
        printf("Delivery Charge Rs.%d",num);
        break;

    case 3:
        num=0;
        printf("Delivery Charge Rs.%d",num);
        break;

    default:
        printf("Enter valid number");
        break;
    }
}