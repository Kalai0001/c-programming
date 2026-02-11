#include<stdio.h>
int main(){
    int a,n,nums;
    scanf("%d %d",&a,&n);
    int safehour=0;
    int failurecount=0;
    int i=0;
    while(i<n){
        scanf("%d",&nums);
        if(nums<a){
            safehour++;
        }
        else{
            failurecount++;
        }
        i++;
    }
    printf("Safe Hours: %d\n",safehour);
    printf("Failure Count: %d",failurecount);
}
