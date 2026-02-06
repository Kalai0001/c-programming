#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int flag=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                flag=1;
            }
        }
    }
    if(flag==1){
        printf("No");
    }
    else{
        printf("Yes");
    }
}
