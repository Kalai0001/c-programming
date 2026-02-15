#include<stdio.h>

int swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("After swap:%d %d",*x,*y);
    return 0;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before swap:%d %d\n",a,b);
    int z=swap(&a,&b);
    return 0;
}