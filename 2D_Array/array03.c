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
    
    int count=0;
    for(int i=0;i<r;i++){                         //to find unique elements of the row
        int flag=0;
        for(int j=0;j<c;j++){                     //3 4
            for(int k=j+1;k<c;k++){               //1 2 2 3  false
                if(arr[i][j]==arr[i][k]){         //4 5 6 7  true    count=1;
                    flag=1;                       //1 1 1 1  false
                }
            }
        }
        if(flag==0){
            count++;
        }
    }
    printf("%d",count);
}