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
    for(int i=0;i<r;i++){
        int flag=0;                                // 3 3
        for(int j=0;j<c;j++){                      // 1 2 3      count=1
            for(int k=j+1;k<c;k++){                // 5 6 7      count=2   so final count=2
                if(arr[i][j]>=arr[i][k]){          // 9 8 0      9<8,9<0 condition false
                    flag=1;
                }
            }
            if(flag==0){                         //  if number less then next element count increase
                count++;
                break;
            }
        }
    }
    printf("%d",count);
}