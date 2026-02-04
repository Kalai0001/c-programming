#include<stdio.h>
int main(){
    int a,age,z;
    scanf("%d %d",&a,&age);

    switch (a)
    {
    case 1:
        if(age<=5){
            z=1500;
            printf("Rs.%d",z);
        }
        else{
            z=2500;
            printf("Rs.%d",z);
        }
        break;

    case 2:
        if(age<=5){
            z=4000;
            printf("Rs.%d",z);
        }
        else{
            z=6000;
            printf("Rs.%d",z);
        }
        break;
    
    default:
        printf("Enter valid number");
        break;
    }
}
