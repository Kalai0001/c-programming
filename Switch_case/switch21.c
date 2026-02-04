#include<stdio.h>
int main(){
    int a,num,z,extra,x;
    scanf("%d %d",&a,&num);

    switch (a)
    {
    case 1:
        if(num<18){
            z=150;
            printf("Ticket Price Rs.%d",z);
        }
        else{
            x=150;
            extra=50;
            z=x+extra;
            printf("Ticket Price Rs.%d",z);
        }
        break;
    
    case 2:
        if(num<18){
            z=250;
            printf("Ticket Price Rs.%d",z);
        }
        else{
            x=250;
            extra=50;
            z=x+extra;
            printf("Ticket Price Rs.%d",z);
        }
        break;
    default:
        printf("Enter valid number");
        break;
    }
}
