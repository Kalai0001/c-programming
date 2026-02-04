#include<stdio.h>
int main(){
    int a,z,num;
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
        num=800;
        printf("Transport Fee Rs.%d",num);
        break;

    case 2:
        num=1200;
        printf("Transport Fee Rs.%d",num);
        break;

    case 3:
        num=1800;
        printf("Transport Fee Rs.%d",num);
        break;

    default:
        printf("Enter valid number");
        break;
    }
}
