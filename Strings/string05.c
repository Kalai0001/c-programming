#include<stdio.h>
#include<string.h>
int main(){
    char ch1[30];
    scanf("%s",&ch1);
    char ch2[30];
    strcpy(ch2,ch1);
    strrev(ch1);
    if(strcmp(ch1,ch2)==0){
        printf("Palindrome");
    }
    else{
        printf("Not an palindrome");
    }
}