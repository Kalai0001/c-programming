#include<stdio.h>
#include<string.h>
int main(){
    char ch1[50],ch2[50];
    fgets(ch1,sizeof(ch1),stdin);
    int len=strlen(ch1);
    if(ch1[len-1]=='\n'){
        ch1[len-1]='\0';
    }
    int i;
    for(i=0;ch1[i]!='\0';i++){
        if(ch1[i]!='@'){
            ch2[i]=ch1[i];
        }
        else{
            break;
        }
    }
    ch2[i]='\0';
    printf("%s",ch2);
}