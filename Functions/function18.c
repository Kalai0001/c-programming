#include<stdio.h>

int gcd(int num1,int num2){
    int x=0;
    for(int i=1;i<=num1 && i<=num2;i++){
        if(num1%i==0 && num2%i==0){
            x=i;
        }
    }
    // printf("%d",x);
    return x;
}

int main(){
    int num1;
    scanf("%d",&num1);
    int num2;
    scanf("%d",&num2);
    int z=gcd(num1,num2);
    printf("%d",z);
    return 0;
}
