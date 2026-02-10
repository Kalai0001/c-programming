#include<stdio.h>
int main(){
    int capacity,n,nums;
    scanf("%d %d",&capacity,&n);
    int sum=0;
    int count=0;
    int i=0;
    while (i<n)
    {
        scanf("%d",&nums);
        if(nums>=0){
            sum=sum+nums;
            if(sum>=capacity){
                count++;
            }
        }
        else{
            sum=sum+nums;
        }
        i++;
    }
    printf("Final Occupied Beds: %d\n",sum);
    printf("Critical hours: %d",count);
    
}
