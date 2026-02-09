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
    
    int min=100000000;
    int row,z,sum,flag;
    for(int i=0;i<r;i++){
        sum=0;
        flag=0;
        for(int j=0;j<c;j++){
            if(arr[i][j]==0){
                flag=1;
                break;
            }
            sum=sum+arr[i][j];
        }
        if(sum<min){
            min=sum;
            row=i;
        }
        
    }
    if(flag==0){
        printf("Minimum sum in row: %d and index is: %d",min,row);
    }
}