#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int minprice=arr[0];
    int maxprofit=arr[1]-arr[0];
    for(int i=1;i<n;i++){
        int profit=arr[i]-minprice;
        if(profit>maxprofit){
            maxprofit=profit;
        }
        if(arr[i]<minprice){
            minprice=arr[i];
        }
    }
    printf("%d",maxprofit);
}