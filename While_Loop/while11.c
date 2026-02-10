#include<stdio.h>
int main(){
    int n,nums;
    scanf("%d",&n);
    int sum=0;
    int count=0;
    int i=0;
    while (i<n)
    {
        scanf("%d",&nums);
        sum=sum+nums;
        if(nums>2){
            count++;
        }
        i++;
    }
    printf("Total Delay: %d\n",sum);
    printf("Delayed Days: %d",count);
    
}
