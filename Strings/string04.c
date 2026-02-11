#include<stdio.h>
#include<string.h>
int main(){
    char ch1[30];
    fgets(ch1,sizeof(ch1),stdin);
    int len=strlen(ch1);
    int temp=0;
    if(ch1[len-1]=='\n'){
        ch1[len-1]='\0';            //to remove spaces
        len--;
    }
    for(int i=0;i<len/2;i++){
        temp=ch1[i];
        ch1[i]=ch1[len-1-i];
        ch1[len-1-i]=temp;
    }
    printf("%s",ch1);
}