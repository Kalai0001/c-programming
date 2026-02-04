#include<stdio.h>
int main(){
    int a,trip,b,z;
    scanf("%d\n%d",&a,&trip);
    switch (a)
    {
    case 1:
        if(trip<=1){
            b=100;
            printf("Rs.%d",b);
        }
        else if(trip>=2 && trip<10){
            b=800;
            printf("Rs.%d",b);
        }
        else{
            b=800;
            printf("Rs.%d",b);
        }
        break;

    case 2:
            z=trip;
            b=z*240;
            printf("Rs.%d",b);
        break;

    default:
        printf("Enter valid number");
        break;
    }

}
