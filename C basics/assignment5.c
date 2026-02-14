#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int x=(a/=b);
    int y=(a%=b);
    printf("%d %d",x,y);
    return 0;
}
