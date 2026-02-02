#include<stdio.h>
int main(){
    int fuel,n,nums;
    scanf("%d %d",&fuel,&n);
    int sum=0;
    int count=0;
    int remainfuel=0;
    int i=0;
    while (i<n)
    {
        scanf("%d",&nums);
        if(sum+nums>fuel){
            break;
        }
        sum=sum+nums;
        count++;
        i++;
    
    }
    remainfuel=fuel-sum;
    printf("Completed trips:%d\n",count);
    printf("Remaining fuel:%d",remainfuel);
    
}