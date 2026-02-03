#include<stdio.h>
int main(){
    int num,sum;
    scanf("%d",&num);
    sum=0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0){
        sum=sum+i;
        } 
    }
    if(num==sum){
        printf("Yes");
    }
    else{
    printf("No");
    }

    return 0;
    
}
