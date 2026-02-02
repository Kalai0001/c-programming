#include<stdio.h>
int main(){
    int cash,a,nums;
    scanf("%d %d",&cash,&a);
    int sum=0;
    int i=0;
    int count=0;
    int remaincash;
    while(i<a){
        scanf("%d",&nums);
        if(sum+nums>cash){
            break;
        }
        else{
            sum=sum+nums;
            count++;
        }
        i++;
    }
    remaincash=cash-sum;
    printf("Successful Purchases: %d\n",count);
    printf("Final Balance: %d",remaincash);
}