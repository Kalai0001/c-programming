#include<stdio.h>
int main(){
    int a,n,nums;
    scanf("%d %d",&a,&n);
    int count=0;
    int sum=0;
    int i=1;
    
    while (i<=n)
    {
        scanf("%d",&nums);
        sum=sum+nums;
        i++;
    }
    if(sum>a){
            printf("Emergency Stage: %d\n",i);
            printf("Fuel Wasted: %d\n",sum-a);
    }
    else{
        printf("Emergency Stage: Not Occured\n");
        printf("Fuel Wasted: 0");
    } 
    
}
