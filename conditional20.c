#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a<b?a:b;
    printf("%d is smallest",c);
    return 0;
}
