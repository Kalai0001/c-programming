#include<stdio.h>
int main(){
    int n,days,i=0;
    scanf("%d",&n);
    int sum=0;
    int count=0;
    while (i<n)
    {
        scanf("%d",&days);
        sum=sum+days;
        if(days>4){
            count=count+1;
        }
        i++;
    }
    printf("Total Overtime: %d\n",sum);
    printf("Burnout Days: %d",count);
    
}
