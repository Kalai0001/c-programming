#include<stdio.h>
int main(){
    char ch[50];
    fgets(ch,sizeof(ch),stdin);
    int count=0;
    for(int i=0;ch[i]!='\n';i++){
        if(ch[i]==' '){
            count++;
        }
    }
    printf("%d",count);
}