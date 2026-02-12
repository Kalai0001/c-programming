#include<stdio.h>

int factorial(int a){
    int product=1;
    for(int i=1;i<=a;i++){
        product=product*i;
    }
    return product;
}

int main(){
    int num;
    scanf("%d",&num);
    int z=factorial(num);
    printf("%d",z);
    return 0;
}