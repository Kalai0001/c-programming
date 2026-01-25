#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a/b;
    int d=a%b;
    printf("Quotient=%d Remainder=%d",c,d);
    return 0;
}