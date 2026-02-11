#include<stdio.h>
int main(){
    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]>='A' && ch[i]<='Z'){       //upper to lower
            ch[i]=ch[i]+32;
        }
    }
    printf("%s",ch);
}