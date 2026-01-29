#include<stdio.h>
int main(){
    int num,nextelement;
    scanf("%d",&num);
    int firstelement=0;
    int secondelement=1;
    for(int i=0;i<num;i++){
              
        nextelement=firstelement+secondelement;
        firstelement=secondelement;
        secondelement=nextelement;
        printf("%d ",firstelement); 
        
    }
}