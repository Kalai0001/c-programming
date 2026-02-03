#include<stdio.h>
int main(){
    int num,a;
    scanf("%d",&num);
    int count=0;
    for(;num!=0;num=num/10){
        if(num%10)
        count=count+1;
    }
    printf("%d",count);
}
