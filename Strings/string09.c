#include<stdio.h>
int main(){
    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    for(int i=0;ch[i]!='\0';i++){              //=lower to upper
        if(ch[i]>='a' && ch[i]<='z'){
            ch[i]=ch[i]-32;
        }
    }
    printf("%s",ch);
}