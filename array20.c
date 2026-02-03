#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            arr[i]=0;
            printf("%d ",arr[i]);
        }
        else{
            arr[i]=arr[i];
            printf("%d ",arr[i]);
        } 
    }
    
}