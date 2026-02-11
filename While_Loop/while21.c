#include<stdio.h>
int main(){
    int n,nums;
    scanf("%d",&n);
    int count=0;
    int i=0;
    int max=0;
    int current=0;
    while(i<n)
    {
        scanf("%d",&nums);
        if(nums>20){
            count++;
            current++;
            if(current>max){
                max=current; 
            }
        }
        else{
            current=0;
        }
        
        i++;
    }
    printf("Congestion Minutes: %d\n",count);
    printf("Longest Congestion Streak: %d",max);
}  
