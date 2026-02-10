#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int nums;
    int i=0;
    int z;
    int one=0,zero=0;
    while(i<a){
        scanf("%d",&nums);
        if(nums==1){
            one++;
        }
        else{
            zero++;
        }
        i++;
    }
    printf("Successful:%d\n",one);
    printf("Cancelled:%d\n",zero);
    if(zero<=3){
        printf("Status:Safe");
    }
    else{
        printf("Status:Risk");
    }
    
}
