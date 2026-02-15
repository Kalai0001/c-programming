#include<stdio.h>
#include<string.h>
int vowel(char str[]){
    char *p=str;
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        }
    }
    // printf("%d",count);
    return count;
}

int main(){
    char str[100];
    // int length=strlen(str);
    fgets(str,sizeof(str),stdin);
    int z=vowel(str);
    printf("%d",z);
    return 0;
}