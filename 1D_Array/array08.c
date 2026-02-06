#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    // int temp=arr[i];
    // for(int i=k;i<n;i++){
    //     arr[i-k]=arr[i];
    // }
    // for(int i=n-k;i<n;i++){
    //     arr[i]=temp[i-(n-k)];
    // }
    // for(int i=0;i<n;i++){
    //     printf("%d",&arr[i]);
    // }
    for(int i=k;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<k;i++){
        printf("%d ",arr[i]);
    }

    
}