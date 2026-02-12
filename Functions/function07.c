#include<stdio.h>


int prime(int a){
    int flag=1;
    for(int k=2;k<a;k++){
        if(a%k==0){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return a;
}


int main(){
    int num;
    scanf("%d",&num);
    int z=prime(num);
    return 0;
}