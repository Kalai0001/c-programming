#include<stdio.h>

void elementfind(int arr[],int n,int element){
    int *p=arr;
    int z=0;
    int flag=0;
    for(int i=0;i<n;i++){
        if(element==*(p+i)){         //element to find at which position
            z=i+1;
            flag=1;
            break;
            // printf("%d",i);
        }
    }
    if(flag==1){
        printf("%d",z);
    }
    else{
        printf("-1");
    }
}

int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int element;
    scanf("%d",&element);
    elementfind(arr,size,element);
    return 0;
}