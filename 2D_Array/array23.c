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
    int firstrow=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            firstrow=firstrow+arr[j][i];
            break;
        }
    }
    printf("Firstrow: %d\n",firstrow);
    ///////////////////////////
    int lastrow=0;
    for(int i=r-1;i<r;i++){
        for(int j=0;j<c;j++){
            lastrow=lastrow+arr[i][j];
        }
    }
    printf("Lastrow: %d\n",lastrow);
    //////////////////////////
    int firstcolumn=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            firstcolumn=firstcolumn+arr[i][j];
            break;
        }
    }
    printf("Firstcolumn: %d\n",firstcolumn);
    /////////////////////////////
    int lastcolumn=0;
    for(int j=c-1;j<c;j++){
        for(int i=0;i<r;i++){
            lastcolumn=lastcolumn+arr[i][j];
        }
    }
    printf("Lastcolumn: %d\n",lastcolumn);
    //////////////////////////////
    int total=firstrow+lastrow+firstcolumn+lastcolumn;
    printf("Sum of Boundary is: %d",total);
}