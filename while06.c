#include<stdio.h>
int main(){
    int weight;
    int n;
    int num;
    scanf("%d %d",&weight,&n);
    int i=0;
    int sum=0;
    int count=0;
    int flag=0;
    while (count<n)
    {
        scanf("%d",&num);
        if(sum+num>weight){
            flag=1;
            break;
        }
        sum=sum+num;
        count++; 
    }
    printf("Passengers Allowed: %d\n",count);
    int z=flag?printf("Overload: Yes"):printf("Overload: No");
}