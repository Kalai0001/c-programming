#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int a,b,c1,c2,c3,c4,c5;
    scanf("%d %d",&a,&b);
    switch (x)
    {
    case 1:
        c1=a+b;
        printf("Addition of a and b is %d",c1);
        break;
    case 2:
        c2=a-b;
        printf("Subtraction of a and b is %d",c2);
        break;
    case 3:
        c3=a*b;
        printf("Multiplication of a and b is %d",c3);
        break;
    case 4:
        c4=a/b;
        printf("Division of a and b is %d",c4);
        break;
    case 5:
        c5=a%b;
        printf("Modulo of a and b is %d",c5);
        break;
    default:
        printf("Enter a valid number");
        break;
    }
    return 0;
}
