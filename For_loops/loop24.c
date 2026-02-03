#include<stdio.h>
int main(){
    int num,a;
    scanf("%d",&num);
    int rev=0;
    int original=num;
    for(;num!=0;num=num/10){
        a=num%10;
        rev=(rev*10)+a;
    }
    if(original==rev){
        printf("Yes");            //Palindrome
    }
    else{
        printf("N0");             //Not Palindrome
    }

}
