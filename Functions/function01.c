#include<stdio.h>

float interest(int p,int r,int t){
    float d=(p*r*t)/100;
    return d;
    // printf("%d.2f",d);
}

int main(){
    int p,r,t;
    scanf("%d %d %d",&p,&r,&t);
    float z=interest(p,r,t);       //function name as interest(p,r,t)
    printf("%.2f",z);
    return 0;
}