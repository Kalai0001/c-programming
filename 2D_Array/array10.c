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
    int max=0;                               //to find maximum product in which row have to print its index
    int row;
    for(int i=0;i<r;i++){                      //row
        int product=1;
        for(int j=0;j<c;j++){                  //column
            product=product*arr[i][j];             // 2 3
            if(product>max){                   //  1  2  3
                max=product;                   // -1 -2 -3
                row=i;                     // max product=1*2*3=6 which is in 0nd row
            }
        }
    }
    printf("Max product in row: %d and index is: %d",max,row);
}