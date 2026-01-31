#include<stdio.h>
int main(){
    int a,num,i=0;
    scanf("%d",&a);
    int count=0;
    int maxstreak=0;
    int currentstreak=0;
    while(i<a){
        scanf("%d",&num);
        if(num>70){
            count=count+1;
            maxstreak++;
            if(currentstreak>maxstreak){
                maxstreak=currentstreak;
            }
        }
        else{
            currentstreak=0;
        }
        i++;
    }
    
    printf("Noise Violations : %d\n",count);
    printf("Longest violation streak : %d",maxstreak);
}