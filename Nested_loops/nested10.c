#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int k=n;k>=1;k--){
        for(int l=1;l<=k-1;l++){
            printf("*");
        }
        printf("\n");
    }

}
