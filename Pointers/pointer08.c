#include<stdio.h>
#include<string.h>
void concatenate(char str1[],char str2[]){
    char *p=str1;
    char *a=str2;
    int i,j;
    int length1=strlen(str1);
    int length2=strlen(str2);
    if(str1[length1-1]=='\n'){
        str1[length1-1]='\0';
    }
    if(str2[length2-1]=='\n'){
        str2[length2-1]='\0';
    }
    for(i=0;str1[i]!='\0';i++){
        printf("%c",*(p+i));
    }
    for(j=0;str2[j]!='\0';j++){
        printf("%c",*(a+j));
    }
}

int main(){
    char str1[100];
    fgets(str1,sizeof(str1),stdin);
    char str2[100];
    fgets(str2,sizeof(str2),stdin);
    concatenate(str1,str2);
    return 0;
}