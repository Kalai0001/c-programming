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
    int n=0;
    int count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            n=arr[i][j];
            int flag=0;
            
            for(int k=2;k<n;k++){
                if(n%k==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                count++;
                break;
            }
        }
    }
    printf("%d",count);
}
    
    

    
