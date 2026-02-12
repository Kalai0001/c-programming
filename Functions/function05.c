#include<stdio.h>

int sum(int n){
    int sum1=0;
    int a1;
    while(n!=0){
        a1=n%10;
        sum1=sum1+a1;
        n=n/10;
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