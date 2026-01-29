#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int count=0;
    for(int i=2;i<num;i++){
        int isPrime=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime==1){
        count++;
    }
    }
    printf("%d",count);
}