#include<stdio.h>
int main(){
    int a,num;
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        num=80000;
        printf("Hostel Fee Rs.%d",num);
        break;

    case 2:
        num=60000;
        printf("Hostel Fee Rs.%d",num);
        break;

    case 3:
        num=45000;
        printf("Hostel Fee Rs.%d",num);
        break;

    default:
        printf("Enter valid number");
        break;
    }
}