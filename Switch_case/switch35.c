#include<stdio.h>
int main(){
    int a,num,z;
    scanf("%d %d",&a,&num);

    switch (a)
    {
    case 1:
        z=num*105;
        printf("Fuel Cost Rs.%d",z);
        break;
    
    case 2:
        z=num*92;
        printf("Fuel Cost Rs.%d",z);
        break;

    case 3:
        z=num*85;
        printf("Fuel Cost Rs.%d",z);
        break;
    default:
        printf("Enter valid number");
        break;
    }
}
