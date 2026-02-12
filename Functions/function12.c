#include<stdio.h>

int leapyear(int a){
    if((a%4==0 && a%100!=0)||(a%400==0)){
        printf("Leap year");
    }
    else{
        printf("Not Leap year");
    }
}

int main(){
    int num;
    scanf("%d",&num);
    int z=leapyear(num);
    return 0;
}