#include<stdio.h>
#include<string.h>
void palindrome(char str[]){
    char *p=str;
    int ispalindrome=1;
    int length=strlen(str);
    for(int i=0;i<length/2;i++){
        if(*(p+i)!=*(p+length-i-1)){
            ispalindrome=0;
        }
    }
    if(ispalindrome){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}


int main(){
    char str[100];
    scanf("%s",&str);
    // int length=strlen(str);
    palindrome(str);
    return 0;
}