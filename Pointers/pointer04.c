#include<stdio.h>

void copy(char str1[]){
    char *p=str1;
    // char str2[100];
    for(int i=0;str1[i]!='\0';i++){
        char str2=*(p+i);
        printf("%c",str2);
    }
    // printf("%c",str2);
}



int main(){
    char str1[100];
    fgets(str1,sizeof(str1),stdin);
    copy(str1);
}