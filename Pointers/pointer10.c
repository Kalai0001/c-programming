#include<stdio.h>

int count(char ch[]){
    char *p=ch;
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]==' '){                  //count no.of .words in a string
            count++;
        }
    }
    return count;

}
int main(){
    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    int z=count(ch);
    printf("%d",z+1);
    return 0;
}