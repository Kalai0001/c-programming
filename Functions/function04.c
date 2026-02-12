#include<stdio.h>

float area(int r){
    float z=3.14*r*r;
    return z;
}

int main(){
    int r;
    scanf("%d",&r);
    float d=area(r);              //area() my function name
    printf("%.2f",d);
    return 0;
}