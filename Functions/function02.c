#include<stdio.h>

int maximum(int a,int b){
    int d=a>b?a:b;
    return d;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int z=maximum(a,b);
    printf("%d",z);
    return 0;
}