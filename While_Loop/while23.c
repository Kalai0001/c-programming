#include<stdio.h>
int main(){
    int n,nums;
    scanf("%d",&n);
    int i=1;
    int count=0;
    int breakdown=0;
    while (i<=n)
    {
        scanf("%d",&nums);
        if(nums>70){
            count++;
            if(count==3){
                breakdown=i;
                
            }
        }
        else{
            count=0;
        }
        i++;
    }
    if(breakdown!=0){
        printf("Breakdown At Reading: %d\n",breakdown);
        printf("Unsafe Readings: %d\n",count);
    }
    else{
        printf("Breakdown At Reading: Not Occured\n");
        printf("Unsafe Readings: %d",count);
    }
    
    
}
