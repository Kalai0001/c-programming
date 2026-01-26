#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>=48 && ch<=57){
        printf("Digit");
    }
    else{
        printf("Not an Digit");
    }
    return 0;
}
