#include<stdio.h>
int main(){
    int a,num,z,d;
    scanf("%d %d",&a,&num);

    switch (a)
    {
    case 1:
        z=num*300;
        printf("Extra Baggage Charge Rs.%d",z);
        break;

    case 2:
        if(num<=3){
            printf("Free");
        }
        else{
            z=num-3;
            d=z*300;
            printf("Extra Baggage Charge Rs.%d",d);
        }
    
    default:
        break;
    }
}
