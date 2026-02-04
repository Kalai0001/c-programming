#include<stdio.h>
int main(){
    int a,num;
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        num=300;
        printf("Upgrade Fee Rs.%d",num);
        break;

    case 2:
        num=800;
        printf("Upgrade Fee Rs.%d",num);
        break;

    case 3:
        num=1500;
        printf("Upgrade Fee Rs.%d",num);
        break;

    default:
        printf("Enter valid number");
        break;
    }
}
