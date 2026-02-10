#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int num;
    int count=0;
    int i=0;
    int dy;
    
    while (i<a)
    {
        scanf("%d",&num);
        if(num>=0){
            if(num==0){
                count++;
            }
        }else{
            count=0;
        }
        i++;
    }
    printf("Inactive Weeks:%d\n",count);
    int z=(count<=2)?printf("Risk Satus: Low"):printf("Risk Status: High");
    
}
