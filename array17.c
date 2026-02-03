#include<stdio.h>
int main(){
    int arr[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
        
    }
    if(n==arr[n-1]){
        printf("Yes");
    }
    else{
        printf("No");
    }

}