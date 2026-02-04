#include<stdio.h>
int main(){
    int n,nums;
    scanf("%d",&n);
    int i=1;
    int prev,curr;
    int drops=0;
    int streak=0;
    int crashday=-1;
    scanf("%d",&prev);
    while (i<n)
    {
        scanf("%d",&curr);
        if(curr<prev){
            drops++;
            streak++;
            if(streak==3 && crashday==-1){
                crashday=i+1;
            }
        }
        else{
            streak=0;
        }
        prev=curr;
        i++;
    }
    if(crashday!=-1){
        printf("Crash Day: %d\n",crashday);
        printf("Total Drops: %d\n",drops);
    }
    else{
        printf("Crash Day: Not Detected\n");
        printf("Total Drops: %d\n",drops);
    }
    
}