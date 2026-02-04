#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    float b;
    scanf("%f",&b);

    switch (a)
    {
    case 1:
        if(b<=1){
            printf("Normal speed");
        }
        else if(b>1){
            printf("Speed reduced");
        }
        break;

    case 2:
        if(b<=2){
            printf("Normal speed");
        }
        else if(b>2){
            printf("Extra charges applied");
        }
        break;

    // case 3:
    //     if(b<=2){
    //         printf("Normal speed");
    //     }
    //     else if(b>2){
    //         printf("Extra charges applied");
    //     }
    //     break;
    
    default:
        printf("Enter valid number");
        break;
    }


}
