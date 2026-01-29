#include<stdio.h>
int main(){
    int num1,num2,j;
    scanf("%d %d",&num1,&num2);
    int sum=0;
    for(int i=1;i<=num2/num1;i++){
        j=i*num1;
        sum=sum+j;
    }
    printf("%d",sum);
}