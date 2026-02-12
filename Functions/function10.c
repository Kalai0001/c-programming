#include<stdio.h>

int sum(int a){
    int sum1=0;
    for(int i=0;i<=a;i++){
        sum1=sum1+i;
    }
    return sum1;
}

int main(){
    int num;
    scanf("%d",&num);
    int z=sum(num);
    printf("%d",z);
    return 0;
}