#include<stdio.h>
int main(){
    int n,value,row,i,j;
    scanf("%d",&n);
    row=1;
    for(i=1;i<=n;i++){
        row=i%2==0?0:1;
        for(j=1;j<=i;j++){
            printf("%d ",row);
            row=!row;  
        }
    printf("\n");
    }
 }
