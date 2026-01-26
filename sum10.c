#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num>=100 && num<=999){
        printf("It is three digit number");
    }
    else{
        printf("It is not an three digit number");
    }
    return 0;
}