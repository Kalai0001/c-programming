#include<stdio.h>
int main(){
    int a,z;
    scanf("%d",&a);

    if(a<=1){
        z=1;
    }
    else if(a<=4){
        z=2;
    }
    else{
        z=3;
    }

    switch (z)
    {
    case 1:
        printf("Short Interruption");
        break;
    case 2:
        printf("Medium Interruption");
        break;
    case 3:
        printf("Long Interruption");
        break;

    default:
        printf("Enter valid number");
        break;
    }
}
