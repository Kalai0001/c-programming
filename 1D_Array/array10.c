#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    int leader[n];
    int count=0;
    // arr[n-1]=-1;
    // for(int i=n-1;i>=0;i--){
    //     if(arr[i]>max){
    //         max=arr[i];
    //         printf("%d ",max);

    //     }
    // }
    //aaaaaaaaaaaaaaaa
    
        // arr[n-1]=-1;
    
    for(int i=n-1;i>=0;i--){               //i=n-1=5-1=4    4>=0
        for(int j=i-1;j>=0;j--){                    //j=4-1=3;3>=0
            // arr[n-1]=-1;
            if(arr[i]>arr[j]){
                max=arr[i];
                leader[count]=max;
                count++;
                // printf("%d ",max);
            }
            
        }
    }
    for(int i=count-1;i>=0;i--){
        printf("%d ",leader[i]);
    }
    
}