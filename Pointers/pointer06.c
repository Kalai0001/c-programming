#include<stdio.h>

void reverse(int arr[],int n){
    int *p=arr;
    for(int i=n-1;i>=0;i--){
        printf("%d ",*(p+i)); 
    }
}

int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,size);
    return 0;
}