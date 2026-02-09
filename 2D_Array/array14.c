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
    int max=0;                               //to find maximum sum in which column have to print its index
    int col;
    for(int j=0;j<c;j++){                      //column
        int sum=0;
        for(int i=0;i<r;i++){                  //row
            sum=sum+arr[i][j];             // 2 3
            if(sum>max){                   // 1 2 3
                max=sum;                   // 4 5 6
                col=j;                     // max sum=3+6=9 which is in 2nd cloumn
            }
        }
    }
    printf("Max sum in column: %d and index is: %d",max,col);
}