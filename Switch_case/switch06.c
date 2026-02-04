#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);

    switch (b)
    {
    case 1:
        c=50;
        printf("Delivery $%d",c);
        break;
    
    case 2:
    if(a<1000){
        c=100;
        printf("Delivery $%d",c);
    }
    else if(a>=1000){
        printf("Free");
    }
    default:
        printf("Enter valid number");
        break;
    }
}
