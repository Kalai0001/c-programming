#include<stdio.h>
int main(){
    int a,num;
    scanf("%d %d",&a,&num);

    switch (a)
    {
    case 1:
        if(num>=80){
        printf("Excellent");
        }
        else{
            printf("Not Qualified");
        }
        break;
    case 2:
        if(num>=60 && num<80){
        printf("Good");
        }
        else{
            printf("Not Qualified");
        }
        break;
    case 3:
        if(num>=40 && num<60){
        printf("Needs Improvement");
        }
        break;
    default:
        printf("Enter valid number");
        break;
    }
}
