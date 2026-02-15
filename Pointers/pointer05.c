#include<stdio.h>

int sum(int arr[],int size){
    int *p=arr;
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+*(p+i);
    }
    return sum;
}



int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int z=sum(arr,size);
    printf("%d",z);
    return 0;
}