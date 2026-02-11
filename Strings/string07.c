#include<stdio.h>
int main(){
    char ch[50];
    fgets(ch,sizeof(ch),stdin);
    int vcount=0;
    int ccount=0;
    for(int i=0;ch[i]!=0;i++){
        if((ch[i]>='A' && ch[i]<='Z')||(ch[i]>='a' && ch[i]<='z')){
            if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||
               ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'){
                vcount++;
            }
            else{
                ccount++;
            }
        }
    }
    printf("%d",ccount);
}