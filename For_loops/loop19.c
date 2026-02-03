#include<stdio.h>
int main(){
    int a,b,start;
    scanf("%d %d",&a,&b);
    if(a>b){
        start=a;
    }
    else{
        start=b;
    }
    for(int i=start;;i++){
        if(i%a==0 && i%b==0){
            printf("%d",i);
            break;
        }
    }
}
