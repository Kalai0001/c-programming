#include<stdio.h>
int main(){
    int a,z;
    scanf("%d",&a);

    
    if(a<=5){
        z=1;
    }
    else if(a>=6 && a<=10){
        z=2;
    }
    else if(a>10){
        z=3;
    }

    switch (z)
    {
    case 1:
        z=a*50;
        printf("Rs.%d",z);
        break;
    case 2:
        z=a*100;
        printf("Rs.%d",z);
        break;
    case 3:
        z=a*200;
        printf("Rs.%d",z);
        break;

    default:
        printf("Enter valid number");
        break;
    }
}