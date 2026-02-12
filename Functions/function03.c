#include<stdio.h>

int evenodd(int a){
    int d=(a%2==0)?printf("Even"):printf("Odd");
    return d;
}



int main(){
    int a;
    scanf("%d",&a);
    int z=evenodd(a);
    printf("%c",z);
    return 0;
}