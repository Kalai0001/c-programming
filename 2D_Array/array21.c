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
    int row;
    for(int i=0;i<r;i++){
        int flag=0;
        for(int j=0;j<c;j++){
            if((arr[i][j]%2==0 && arr[i][j+1]%2!=0)||(arr[i][j]%2!=0 && arr[i][j+1]%2==0)){
                flag=1;
            }
        }
        if(flag==1){
            row=i;
        }
    }
    printf("%d",row);
}