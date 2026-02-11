#include<stdio.h>

int main(){
    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    int i=0;
    int count=0;
    for(i=0;ch[i]!='\n';i++){
        count++;
    }
    printf("%d",count);
}








// while(ch[i]!=0){
    //     if(ch[i]=='\n'){
    //         ch[i]='\0';
    //         break;
    //     }
    //     i++;
    //     count++;
    // }
    // printf("%d",count);