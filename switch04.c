#include<stdio.h>
int main(){
    int a,num,age,cost,discount;
    scanf("%d %d",&a,&num);

    switch (a)
    {
    case 1:
        if(age<12){
            cost=300;
            discount=0.33*cost;
            num=cost-discount;
            printf("Fare Rs.%d",num);
        }
        else{
            cost=300;
            discount=0.33*cost;
            num=cost-discount;
            printf("Fare Rs.%d",num);
        }
        break;

    case 2:
        if(age<12){
            cost=1000;
            discount=0.50*cost;
            num=cost-discount;
            printf("%d",num);
        }
        else{
            cost=1000;
            discount=0.33*cost;
            num=cost-discount;
            printf("Fare Rs.%d",num);
        }
        break;
    
    default:
        printf("Enter valid number");
        break;
    }
}