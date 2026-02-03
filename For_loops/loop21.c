#include<stdio.h>
#include<math.h>
int main(){
    int binary,decimal,i,a;
    scanf("%d",&binary);
    decimal=0;
    i=0;
    for(;binary!=0;binary=binary/10){
        a=binary%10;
        decimal=decimal+(a*pow(2,i));
        i++;
    }
    printf("%d",decimal);
}
