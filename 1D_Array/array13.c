#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int sum=0;

    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }

    int avg=sum/size;
    int count=0;
    
    for(int j=0;j<size;j++){
        if(arr[j]>avg){
            count++;
        }
    }
    printf("%d",count);
}
