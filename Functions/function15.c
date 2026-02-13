#include<stdio.h>

int multiplicationtable(int num){
    int z=0;
    for(int i=1;i<=10;i++){
        z=num*i;
        printf("%dx%d=%d\n",num,i,z);
    }
    return z;
}

int main(){
    int num;
    scanf("%d",&num);
    int z=multiplicationtable(num);
    return 0;
}