#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);

    for(int i=ch;i>='A';i--){
        for(int j=i;j<=ch;j++){
            printf("%c ",j);
        }
        printf("\n");
    }

}
