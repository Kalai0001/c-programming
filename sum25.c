#include<stdio.h>
int main(){
    int choice;
    scanf("%d",&choice);
    int a,b;
    scanf("%d %d",&a,&b);
    switch (choice)
    {
    case 1:
        printf("Sum=%d",a+b);
        break;
    case 2:
        printf("Subtraction=%d",a-b);
        break;
    case 3:
        printf("Multiply=%d",a*b);
        break;
    case 4:
        printf("Division=%d",a/b);
        break;
    case 5:
        printf("Modulo=%d",a%b);
        break;
    default:
        printf("Invalid choice");
        break;
    }
    return 0;
}