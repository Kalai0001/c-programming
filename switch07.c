#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
     switch (a)
     {
     case 1:
        printf("Interest 1%%");
        break;
     
    case 2:
    if(b<=3){
        printf("Interest 5%%");
    }
    else if(b>3){
        printf("Interest 7%%");
        break;
    }
    default:
        printf("Enter valid number");
        break;
     }
}