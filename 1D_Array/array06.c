#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);                                          //1 2 1 2 4
    }                                                                 //1!=2=t,1!=1=f goes to else
    int count;
    for(int i=0;i<size;i++){
        int isduplicate=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                count++; 
                isduplicate=1;  
            }
        }
        if (isduplicate==0){
            printf("%d ",arr[i]);
        }
    }
    


}
    