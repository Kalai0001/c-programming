#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    int product;
    int max=0;
    for(int i=0;i<size;i++){
        for(int j=i;j<size-1;j++){
            product=arr[i]*arr[j+1];
            temp=product;
            if(temp>max){
                max=temp;
            }
        }
    }
    printf("%d",max);
}



