#include<stdio.h>
int main(){
    int a,num,i=0;
    scanf("%d",&a);
    int max=0;
    int current=0;
    while(i<a){
        scanf("%d",&num);
        if(num==0)
        {
            current++;
            if(current>max){
                max=current;
            }
        }

        else{
            current=0;
        }
        i++;
    }  
    printf("Longest Default Streak:%d",max);
}
