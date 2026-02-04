#include<stdio.h>
int main(){
    int a,num;
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        num=1500;
        printf("Membership Fee Rs.%d",num);
        break;

    case 2:
        num=4000;
        printf("Membership Fee Rs.%d",num);
        break;

    case 3:
        num=7000;
        printf("Membership Fee Rs.%d",num);
        break;

    default:
        printf("Enter valid number");
        break;
    }
}
