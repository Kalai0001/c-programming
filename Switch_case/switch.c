#include<stdio.h>
int main(){
    int a,num;
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        num=40;
        printf("Speed %d Mbps",num);
        break;

    case 2:
        num=100;
        printf("Speed %d Mbps",num);
        break;

    case 3:
        num=300;
        printf("Speed %d Mbps",num);
        break;

    default:
        printf("Enter valid number");
        break;
    }
}
