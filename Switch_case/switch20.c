#include<stdio.h>
int main(){
    int a,num;
    scanf("%d %d",&a,&num);

    switch (a)
    {
    case 1:
        printf("Full Access");
        break;
    
    case 2:
        if(num>=9 && num<=18){
            printf("Limited Access");
        }
        else{
            printf("Access Denied");
        }
        break;

    default:
        printf("Enter valid number");
        break;
    }
}
