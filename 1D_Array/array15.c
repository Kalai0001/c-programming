#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int nz=0;
    int z=0;
    int temp;
    while(nz<size){
        if(arr[nz]!=0){
            temp=arr[nz];
            arr[nz]=arr[z];
            arr[z]=temp;
            nz++;
            z++;
        }
        else{
            nz++;
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
}