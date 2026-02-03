#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int duplicate=-1;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                duplicate=arr[i];
                printf("%d",duplicate);
                return 0;
            }  
        }
    }
    printf("%d",duplicate);
}