#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size-1;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<size-1;i++){
        sum=sum+arr[i];
    }
    // int a=(size*(size-1)/2)+5;
    int a=(size*(size-1)/2)+size;
    int missing=a-sum;
    printf("Missing number: %d",missing);
}