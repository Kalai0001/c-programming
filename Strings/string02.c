#include<stdio.h>
int main(){
    char ch[30];
    fgets(ch,sizeof(ch),stdin);
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]>='A' && ch[i]<='Z'){
            printf("Valid");
            break;
        }
        else{
            printf("Invalid");
            break;
        }
    }
}