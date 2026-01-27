#include<stdio.h>
int main(){
    int a,num;
    scanf("%d %d",&a,&num);

    switch (a)
    {
    case 1:
        if(num>=700){
            printf("Approved");
        }
        else if(num>=650 && num<=699){
            printf("Manual Review");
        }
        else{
            printf("Rejected");
        }
        break;

    case 2:
        if(num>=700){
            printf("Approved");
        }
        else if(num<700){
            printf("Rejected");
        }
    
    default:
        break;
    }

}