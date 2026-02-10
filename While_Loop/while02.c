#include<stdio.h>
#include<math.h>
int main(){
    int a;
    int amount;
    int num;
    int i=0;
    scanf("%d %d",&a,&amount);
    int count=0;
    while(i<a){
        scanf("%d",&num);
        if(num<0){
            amount=amount-(-num);
            if(amount<2000){
                count++;
            }
        }
        else if(num>0){
            amount=amount+num;
        }
        i++;
    }
    printf("Final Balance:%d\n",amount);
    printf("Low Balance Days:%d",count);
}
