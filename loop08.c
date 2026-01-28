#include<stdio.h>
int main(){
    int num,a;
    scanf("%d",&num);
    int rev=0;
    
    for(;num!=0;num=num/10){
        a=num%10;
        rev=(rev*10)+a;
    }
    printf("%d",rev);
}



// while (num>0)
    // {
    //     a=num%10;
    //     rev=(rev*10)+a;
    //     num=num/10; 
    // }
    // printf("%d",rev);