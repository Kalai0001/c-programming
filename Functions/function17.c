#include<stdio.h>

int armstrong(int num){
    int sum=0,a=0;
    int original=num;
    while(num!=0){
        a=num%10;
        sum=sum+(a*a*a);
        num=num/10;
    }
    // printf("%d",sum);
    if(original==sum){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
    return sum;
}
int main(){
    int num;
    scanf("%d",&num);
    int z=armstrong(num);
    // printf("%d",z);
    return 0;
}