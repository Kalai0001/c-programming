#include<stdio.h>
int main(){
    char ch1[20];
    fgets(ch1,sizeof(ch1),stdin);
    char ch2[5];
    fgets(ch2,sizeof(ch2),stdin);
    int i;
    for(i=0;ch1[i]!='\0';i++){
        if(ch1[i]==ch2[0]){
           printf("%d",i);
           break;
        }
    }
    if(ch1[i]!=ch2[0]){
        printf("%d",-1);
    }
}