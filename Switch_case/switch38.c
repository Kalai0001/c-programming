#include<stdio.h>
int main(){
    int a,num;
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        num=500;
        printf("Consultation Fee Rs.%d",num);
        break;

    case 2:
        num=1200;
        printf("Consultation Fee Rs.%d",num);
        break;

    default:
        printf("Enter valid number");
        break;
    }
}
