#include<stdio.h>
int main(){
    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    int count=0;
    for(int i=0;ch[i]!='\0';i++){            
        if(ch[i]==' '){
            count++;
        }
    }
    printf("%d",count);
}