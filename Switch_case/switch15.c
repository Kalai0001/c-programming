#include<stdio.h>
int main(){
    int a,z;
    scanf("%d",&a);
    char ch[10];
    scanf("%s",&ch);

    switch (a)
    {
    case 1:
        if(ch[0]=='R'){
            z=5000;
            printf("Rs.%d",z);
        }
        else if(ch[0]=='S'){
            z=3000;
            printf("Rs.%d",z);
        }
        break;

    case 2:
        if(ch[0]=='R'){
            z=9000;
            printf("Rs.%d",z);
        }
        else if(ch[0]=='S'){
            z=7000;
            printf("Rs.%d",z);
        }
        break;
    
    default:
        printf("Enter valid character");
        break;
    }
}
