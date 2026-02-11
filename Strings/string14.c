#include<stdio.h>
int main(){
    char ch1[50];
    fgets(ch1,sizeof(ch1),stdin);
    char ch2[50];
    for(int i=0;ch1[i]!='\n';i++){
        ch2[i]=ch1[i];
    }
    
    printf("copy of ch2 is: %s",ch2);
}