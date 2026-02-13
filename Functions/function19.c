#include<stdio.h>
#include<math.h>
int numberpower(int num,int power){
    if(power==0){
        num=1;
    }
    else{
        
        for(int i=power;i<=power;i++){
            num=pow(num,i);
        }
    }
    return num;
}

int main(){
    int num,power;
    scanf("%d %d",&num,&power);
    int z=numberpower(num,power);
    printf("%d",z);
    return 0;
}