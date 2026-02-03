#include<stdio.h>
int main(){
    int num,a;
    scanf("%d",&num);
    int sum=0;
    int cube;
    int original=num;
    for(;num!=0;num=num/10){
        a=num%10;
        cube=a*a*a;
        sum=sum+cube;
    }
    // printf("%d",sum);
    if(original==sum){
        printf("Yes");    //Armstrong
    }
    else{
        printf("No");     //Not Armstrong
    }
}
