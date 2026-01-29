#include<stdio.h>
#include<math.h>
int main(){
    int num,power,z;
    scanf("%d %d",&num,&power);

    for(int i=1;i<=num;i++){
        z=pow(num,power);
    }
    printf("%d",z);
}