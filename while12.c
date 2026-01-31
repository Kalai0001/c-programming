#include<stdio.h>
int main(){
    int n,hours,i=0;
    scanf("%d",&n);
    int max=0;
    int surgehour=0;
    while(i<n){
        scanf("%d",&hours);
        if(hours>max){
            max=hours;
        }
        if(hours>5){
            surgehour=surgehour+1;
        }
        i++;
    }
    printf("Max Usage:%d\n",max);
    printf("Surge Hours:%d",surgehour);
}