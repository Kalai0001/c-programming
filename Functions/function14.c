#include<stdio.h>

int perfectnumber(int num){
    int sum=0;
    
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    // printf("%d\n",sum);
    if(num==sum){
        printf("Perfect number");
    }
    else{
        printf("Not Perfect number");
    }
    return sum;
}


int main(){
    int num;
    scanf("%d",&num);
    int z=perfectnumber(num);
    // printf("%d",z);
    return 0;
}