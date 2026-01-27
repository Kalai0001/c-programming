#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    char ch[50];
    scanf("%s",&ch);

    switch (a)
    {
    case 1:
        // char ch[50];
        // scanf("%s",&ch);
        if(ch[0]=='A'){
            b=2500;
            printf("%d",b);
        }
        else if(ch[0]=='B'){
            b=2000;
            printf("%d",b);
        }
    case 2:
        if(ch[0]=='A'){
            b=4000;
            printf("%d",b);
        }
        else if(ch[0]=='D'){
            b=3000;
            printf("%d",b);
        }
        
        break;
    
    default:
        printf("Please Enter valid room type");
        break;
    }
}