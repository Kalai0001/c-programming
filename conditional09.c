#include<stdio.h>
int main(){
    int age;
    scanf("%d",&age);
    if(age>=18){
        printf("Eligible to vote");
    }
    else{
        printf("Not an eligible to vote");
    }
    return 0;
}
