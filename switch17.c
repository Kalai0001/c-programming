#include<stdio.h>
int main(){
    int a,num,z;
    scanf("%d %d",&a,&num);

    switch (a)
    {
    case 1:
        z=num*10;
        printf("Parking Fee Rs.%d",z);
        break;
    case 2:
        z=num*20;
        printf("Parking Fee Rs.%d",z);
        break;
    default:
        z=num*20;
        printf("Parking Fee Rs.%d",z);
        break;
    }
}