#include<stdio.h>
int main(){
    int a,units,z,perunit;
    scanf("%d %d",&a,&units);

    switch (a)
    {
    case 1:
        if(units<=30){
            perunit=5;
            z=units*perunit;
            printf("Rs.%d",z);
        }
        else{
            perunit=8;
            z=(30*5)+(units-30)*perunit;
            printf("Rs.%d",z);
        }
        break;

    case 2:
        perunit=10;
        z=units*perunit;
        printf("Rs.%d",z);
        break;
    
    default:
        printf("Enter valid units");
        break;
    }
}