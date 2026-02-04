#include<stdio.h>
int main(){
    int a,num,z;
    scanf("%d %d",&a,&num);

    switch (a)
    {
    case 1:
        z=num*2;
        printf("Late Fee Rs.%d",z);
        break;
    
    case 2:
        z=num*5;
        printf("Late Fee Rs.%d",z);
        break;

    default:
        printf("Enter valid number");
        break;
    }
}
