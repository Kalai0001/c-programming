

#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    // int temp=max;
    int secondmax=0;
    for(int j=0;j<size;j++){
        if(arr[j]>secondmax && arr[j]!=max){
            secondmax=arr[j];
        }
    }

    printf("Max: %d\n",max);
    printf("Second Max: %d",secondmax);
}


















































// #include<stdio.h>
// int main(){
//     int size;
//     scanf("%d",&size);
//     int arr[size];
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     int max=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     int temp=max;
//     int secondmax;
//     for(int j=0;j<size;j++){
//         if(arr[j]!=temp && arr[j]<temp){
//             secondmax=arr[j];
//         }
//     }

//     printf("Max: %d\n",max);
//     printf("Second Max: %d",secondmax);
// }
