#include<stdio.h>                                               //0 1

int fibonacci(int num){
    int a,b,result;
    a=0;                                 //i=1      /    i=2       /   i=3
    b=1;                                //a=0       /    a=1       /   a=1
    for(int i=1;i<num;i++){             //b=1       /    b=1       /   b=2
        printf("%d",a);                 //print 0   /    print a   /   print a
        result=a+b;                     //res=0+1=1 /    res=1+1=2 /   res=1+2=3
        a=b;                            //a=1       /    a=1       /   a=2
        b=result;                       //b=1        /   b=2       /   b=3
    }
    return a;
}
int main(){
    int num;
    scanf("%d",&num);
    int z=fibonacci(num);
    printf("%d",z);
    return 0;
}