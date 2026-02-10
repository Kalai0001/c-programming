#include<stdio.h>
int main(){
    int a,b,num,i=0;
    scanf("%d %d",&a,&b);
    int sum=0;
    int count=0;
    int remaindata;
    while(count<b){
        scanf("%d",&num);
        sum=sum+num;
        count=count+1;
        if(sum>=a){
            break;
        }
    }
    remaindata=a-sum;
    if(remaindata<0){
        remaindata=0;
    }
    else{
        remaindata;
    }
    printf("Days used: %d\n",count);
    printf("Remaining Data:%dGB",remaindata);
}


// #include<stdio.h>
// int main(){
//     int a,num,i=0,b;
//     scanf("%d %d",&a,&b);
//     int sum=0;
//     int sub=0;
//     int count=0;
//     int remaindata;
//     while (i<b)
//     {
//         scanf("%d",&num);

//         sum=sum+num;
//         sub=a-num;
//         count++;
//         if(sum==num){
//             remaindata=a-sum;
//         }
//         else if(sub>=1){
//             remaindata=a-sub;
//         }
//         i++;
//     }
//     printf("Days used: %d\n",count);
//     printf("Remaining Data:%d",remaindata);
// }

