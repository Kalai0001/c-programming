#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=0;
    int count=0;
    int leader[n];
    for(int i=n-1;i>=0;i--){
        if(arr[i]>max){
            max=arr[i];
            leader[count]=max;
            count++;
            
        }
    }
    for(int i=count-1;i>=0;i--){
        printf("%d ",leader[i]);
    }
}