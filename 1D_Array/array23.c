// #include<stdio.h>

// int main(){
//     int size;
//     scanf("%d",&size);
//     int arr[size];
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     int min;
//     int neg=0,neg1;
//     int negmax;

//     int pos=0;
//     int posmin;
//     for(int i=0;i<size;i++){
//         if(arr[i]<0){
//             neg=arr[i];
//             printf("%d \n",neg);
//             if(neg>negmax){
//                 negmax=neg;
//             }
//         }
//         else if(arr[i]>0){
//             pos=arr[i];
//             printf("%d ",pos);
//             if(pos<posmin){
//                 posmin=pos;
//             }
//         }
//     }
//     // printf("%d \n",negmax);
//     // printf("%d ",posmin);
    
// }

// #include<stdio.h>
// int main(){
//     int size;
//     scanf("%d",&size);
//     int arr[size];
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     int min;
//     int max;
//     int a;
//     for(int i=0;i<size;i++){
//         if(arr[i]>0 && arr[i]!=0 && arr[i]<min){
//             min=arr[i];
//         }
//         if(arr[i]<0){
//             if(arr[i]>max){
//                 max=arr[i];
//             }
//         }
//     }

//     // printf("%d",min);
//     // printf("%d",max);
// }


#include<stdio.h>
#include<math.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int min1,min2;
    int z,x;
    for(int i=0;i<size;i++){
        z=-arr[i];
        x=arr[i];
        
        if(arr[i]<min1 && arr[i]!=0 && arr[i]>0){
            min1=arr[i];
        }
        if(z<min1 && z!=0 && z>0){
            min1=z;
        }
        // if(x>min1 && x!=0 && x<0){
        //     min1=-x;
        // }
    }
    printf("%d",min1);
    // printf("%d",min2);
}