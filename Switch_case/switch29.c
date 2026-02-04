#include<stdio.h>
int main(){
    int a,num,z;
    scanf("%d %d",&a,&num);

    switch (a)
    {
    case 1:
        z=num*10;
        printf("Fare Rs.%d",z);
        break;
    
    case 2:
        z=num*15;
        printf("Fare Rs.%d",z);
        break;

    case 3:
        z=num*20;
        printf("Fare Rs.%d",z);
        break;
    default:
        printf("Enter valid number");
        break;
    }
}
