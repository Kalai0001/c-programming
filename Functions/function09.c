#include<stdio.h>

int palindrome(int a){
    int rev=0;
    int original=a;
    int a1;
    while(a!=0){
        a1=a%10;
        rev=(rev*10)+a1;
        a=a/10;
    }
    if(original==rev){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return rev;
}

int main(){
    int num;
    scanf("%d",&num);
    int z=palindrome(num);
    return 0;
}