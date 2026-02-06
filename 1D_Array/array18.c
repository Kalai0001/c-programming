#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int streak=1;
    int maxstreak=1;
    for(int i=1;i<size;i++){
        if(arr[i]>streak){
            streak++;
            if(streak>maxstreak){
                maxstreak=streak;
            }
        }
        else{
            maxstreak=1;
        }
    }
    printf("%d",maxstreak);
}