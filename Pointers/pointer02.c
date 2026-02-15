#include<stdio.h>

int maximum(int arr[],int size){
    int *p=arr;
    int max=0;
    for(int i=0;i<size;i++){
        if(*(p+i)>max){
            max=*(p+i);
        }
    }
    return max;
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    int z=maximum(arr,size);
    printf("%d",z);
    return 0;
}