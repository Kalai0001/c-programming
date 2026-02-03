#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int min;
    for(int i=0;i<size;i++){
        if(arr[i]<min && arr[i]>0){
            min=arr[i];
        }
    }
    if(min>0){
        printf("%d",min);
    }
    else{
        printf("No positive");
    }

}