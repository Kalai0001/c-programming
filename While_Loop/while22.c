#include<stdio.h>
int main(){
    int n,nums;
    scanf("%d",&n);
    int i=0;
    int count=0;
    int max=0;
    int current=0;
    int lockattempt=0;
    while (i<n)
    {
        scanf("%d",&nums);
        if(nums==0){
            count++;
            current++;
            if(current==3){
                lockattempt=i;
            }
        }
        else{
            current=0;
        }
        i++;
    }
    if(lockattempt!=0){
        printf("Lock triggered at attempt: %d\n",lockattempt);
        printf("Total failed attempts: %d\n",count);
    }
    else{
        printf("Lock triggered at attempt: \nNot Locked");
        printf("Total failed attempts: %d",count);
    }
    
    
}
