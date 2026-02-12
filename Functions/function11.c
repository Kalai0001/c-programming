#include<stdio.h>

int countdigit(int a){
    int a1=0;
    int count=0;
    while (a!=0)
    {
        a1=a%10;
        count++;
        a=a/10;
    }
    return count;
    
}

int main(){
    int num;
    scanf("%d",&num);
    int z=countdigit(num);
    printf("%d",z);
    return 0;
}