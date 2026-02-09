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
    int max1=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>max1){
                max1=arr[i][j];
            }
        }    
    }
    // printf("%d\n",max1);
    int max2=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>max2 && arr[i][j]!=max1){
                max2=arr[i][j];
            }
        }    
    }
    int max=max1*max2;
    // printf("%d",max2);

    //Min value
    int min1=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]<min1){
                min1=arr[i][j];
            }
        }    
    }
    // printf("%d\n",min1);
    int min2=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]<min2 && arr[i][j]!=min1){
                min2=arr[i][j];
            }
        }    
    }
    // printf("%d",min2);
    int min=min1*min2;

    if(max>min){
        printf("%d",max);
    }
    else{
        printf("%d",min);
    }
    
}

















// #include<stdio.h>
// int main(){
//     int r,c;
//     scanf("%d %d",&r,&c);
//     int arr[r][c];
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     int min=0;
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             if(arr[i][j]<min){
//                 min=arr[i][j];
//             }
//         }
//     }
//     // printf("%d\n",min);
//     int negmax=arr[0][0];
//      for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             if(arr[i][j]>negmax && arr[i][j]<0 && negmax!=0){
//                 negmax=arr[i][j];
//             }
//         }
//     }
//     // printf("%d\n",negmax);
//     int z=negmax*min;
//     printf("%d",z);

// }
