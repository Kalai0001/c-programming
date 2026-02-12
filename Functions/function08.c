#include<stdio.h>

int reverse(int a){
    int rev=0;
    int a1;
    while(a!=0){
        a1=a%10;
        rev=(rev*10)+a1;
        a=a/10;
    }
    return rev;
}

int main(){
    int num;
    scanf("%d",&num);
    int z=reverse(num);
    printf("%d",z);
    return 0;
}