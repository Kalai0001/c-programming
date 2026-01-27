#include<stdio.h>
int main(){
   int a,num,plan,z;
   scanf("%d %d",&a,&z);

   switch (a)
   {
   case 1:
        if((z==11)||(z==12)){
            plan=199;
            num=plan-20;
            printf("Pay Rs.%d",num);
        }
        else if(z==13){
            plan=199;
            num=plan-0;
            printf("Pay Rs.%d",num);
        }
    break;

    case 2:
        if((z==11)||(z==12)){
            plan=399;
            num=plan-20;
            printf("Pay Rs.%d",num);
        }
        else if(z==13){
            plan=399;
            num=plan-0;
            printf("Pay Rs.%d",num);
        }
    break;
   
   default:
    printf("Enter valid number");
    break;
   }
}