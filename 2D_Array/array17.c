#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int diagonal=0,z=0;
    int sum=0;
    int count=0;
    for(int i=0;i<r;i++){
        diagonal=arr[i][i];               //2 3
        for(int j=0;j<c;j++){             //5 1 1   diagonal=5------1+1=2-----5>2=true count 1
            sum=sum+arr[i][j];            //2 6 1   diagonal=6------2+1=3-----6>3=true count 1
            break;
            // z=sum-diagonal;
        }                                 //total count=2
        // printf("%d ",z);
        z=sum-diagonal;
        if(diagonal>z){
            count++;
        }
    }
    printf("%d ",count);
}