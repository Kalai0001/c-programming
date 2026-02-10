#include<stdio.h>
int main(){
    int a,n,nums;
    scanf("%d %d",&a,&n);
    int sum=0;
    int i=1;
    int count=0;
    int exhausted=0;
    while(i<=n){
        scanf("%d",&nums);
        sum=sum+nums;
        if(sum>a){
            printf("Exhausted Day: %d\n",i);
            printf("Overused Data: %d\n",sum-a);
            exhausted=1;
            break;
        }
        i++;
    }
    if(exhausted!=1){
        printf("Exhausted Day: Not Exhausred\n");
        printf("Overused Data: 0");
    }
   
    
}
