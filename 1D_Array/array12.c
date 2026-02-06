#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int flag=0;
    int target;
    scanf("%d",&target);
    int sum=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            sum=arr[i]+arr[j];
            if(target==sum){
                printf("Sum:%d-%d,%d",sum,arr[i],arr[j]);
                flag=1;
                return 0;
            }
        }
    }
    if(flag==0){
        printf("No Pair");
    }

}