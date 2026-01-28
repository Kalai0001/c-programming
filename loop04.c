#include<stdio.h>
int main(){
    int n,j;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        j=(i*n);
        printf("%d ",j);
    }
}