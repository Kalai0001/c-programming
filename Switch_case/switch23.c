#include<stdio.h>
int main(){
    int a,num,cost,discount;
    scanf("%d %d",&a,&cost);

    switch (a)
    {
    case 1:
        discount=0.05*cost;
        num=cost-discount;
        printf("Rs.%d",num);
        break;
    
    case 2:
        discount=0.15*cost;
        num=cost-discount;
        printf("Rs.%d",num);
        break;

    default:
        printf("Enter valid cost");
        break;
    }
}
