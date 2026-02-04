#include<stdio.h>
int main(){
    int a,z;
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        z=1200;
        printf("Rs.%d",z);
        break;
    
    case 2:
        z=800;
        printf("Rs.%d",z);
        break;

    case 3:
        z=500;
        printf("Rs.%d",z);
        break;

    default:
        printf("Enter valid number");
        break;
    }
}
