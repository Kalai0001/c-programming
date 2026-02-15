#include<stdio.h>
int main(){
    int units;
    scanf("%d",&units);
    if(units<=0){
        printf("Bill amount = No cost");
    }
    else if(units>0 && units<100){
        int d=units*2;
        printf("Bill amount = Rs.%d",d);
    }
    else if(units>=100 && units<200){
        int d=units*5;
        printf("Bill amount = Rs.%d",d);
    }
    else{
        int d=units*10;
        printf("Bill amount = Rs.%d",d);
    }
    return 0;
}
