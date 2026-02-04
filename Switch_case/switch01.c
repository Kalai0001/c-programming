#include<stdio.h>
int main(){
    int a,b,c,d;
    int subsidy=80;
    scanf("%d %d",&a,&b);
    switch (a)
    {
    case 1:
    if(b>=0 && b<100){
        c=b*3;
        printf("Bill $%d",c);
    }
    else if(b>=100 && b<=200){
        c=(100*3)+(b-100)*5;
        d=c-subsidy;
        printf("Bill $%d",d);
    }
        break;

    case 2:
    if(b>=0 && b<100){
        c=b*7;
        printf("Bill $%d",c);
    }
    else if(b>=100){
        c=(100*7)+(b-100)*10;
        printf("Bill $%d",c);
    }
    
    default:
        printf("Invalid Units");
        break;
    }
}
