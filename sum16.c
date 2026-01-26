#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && a==c){
        printf("Equilateral Triangle");
    }
    else{
        printf("Not an equilateral triangle");
    }
    return 0;
}