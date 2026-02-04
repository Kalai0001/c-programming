#include<stdio.h>
int main(){
    int a,z,num;
    scanf("%d",&a);

    if(a>=0 && a<=1){
        z=1;
    }
    else if(a>=2 && a<3){
        z=2;
    }
    else if(a>=3){
        z=3;
    }

    switch (z)
    {
     case 1:
        printf("Under Warranty");
        break;

    case 2:
        printf("Limited Warranty");
        break;

    case 3:
        printf("Out of Warranty");
        break;

    default:
        printf("Enter valid number");
        break;
    }
}
