#include<stdio.h>
int main(){
    int num,a;
    scanf("%d",&num);
    int sum=0;
    for(;num!=0;num=num/10){
        a=num%10;
        sum=sum+a;
    }
    printf("%d",sum);
}

