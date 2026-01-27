#include<stdio.h>
int main(){
    int marks,attendance;
    scanf("%d %d",&attendance,&marks);

    if(attendance>75){
        
        if(marks>=75 && attendance>75){
            printf("Distinction");
        }
        else if(marks>=50 && marks<=74){
            printf("Pass");
        }
        else if(marks<50){
            printf("Fail");
        }
    }
    else{
        printf("Fail");
    }
    // if(marks>=75 && attendance>75){
    //     printf("Distinction");
    // }
    // else if(marks>=50 && marks<=74){
    //     printf("Pass");
    // }
    // else if(marks<50){
    //     printf("Fail");
    // }

}