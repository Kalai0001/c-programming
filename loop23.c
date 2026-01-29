#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int isPrime=1;
    for(int i=2;i<num;i++){
        if(num%i==0){
            isPrime=0;
            break; 
        }
    }
    if(isPrime==1){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
}