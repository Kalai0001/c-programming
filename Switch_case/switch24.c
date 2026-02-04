#include<stdio.h>
int main(){
    int a,num,z;
    scanf("%d %d",&a,&num);

    switch (a)
    {
    case 1:
        z=num*1;
        printf("Rs.%d",z);
        break;
    
    case 2:
        z=num*3;
        printf("Rs.%d",z);
        break;

    case 3:
        z=num*10;
        printf("Rs.%d",z);
        break;
    default:
        printf("Enter valid number");
        break;
    }
}
