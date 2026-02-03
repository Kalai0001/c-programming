#include<stdio.h>
int main(){
    int num,ld;
    scanf("%d",&num);
    
    int sum=0;
    int original=num;
    for(;num!=0;){
        ld=num%10;
        int fact=1;
        for(int i=1;i<=ld;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;
    }
    if(sum==original){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
