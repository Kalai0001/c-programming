#include<stdio.h>
#include<math.h>
int numberpower(int num,int power){
    if(power==0){
        num=1;
        // printf("%d",num);
    }
    else{
        
        for(int i=power;i<=power;i++){
            num=pow(num,i);
            // printf("%d",num);
        }
    }
    // printf("%d",num);
    return num;
}

int main(){
    int num,power;
    scanf("%d %d",&num,&power);
    int z=numberpower(num,power);
    printf("%d",z);
    return 0;
}