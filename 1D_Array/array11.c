#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int leftsum=0;
    int rightsum=0;
    int total=0;                             // i=0;
    int left=0;                             //5  =  1 3 5 2 2
    for(int i=0;i<size;i++){                //total=13
        total=total+arr[i];
    }
    for(int i=0;i<size;i++){
        leftsum=total-left-arr[i];            //leftsum=13-0-1=12
        if(leftsum==left){                    //12==0   false
            printf("%d",i);               
            break;
        }
        left=left+arr[i];                     //left=0+1=1
    } 
    if(leftsum!=left){                          //i=1
        printf("-1");                            //leftsum=13-1-3=9   false
    }                                             //left=1+3=4;
}                                                 
                                               //i=2
                                               //leftsum=13-4-5=4
                                               //4==4 true so index is 2