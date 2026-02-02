#include<stdio.h>
int main(){
    int a,n,nums;
    scanf("%d %d",&a,&n);
    int sum=0;int i=0;int count=0;int flag=0;
    while (i<n)
    {
        scanf("%d",&nums);
        if(sum+nums>a){
            flag=1;
            break;
        }
        else{
            sum=sum+nums;
            count++;
        }
        i++;
    }
    printf("People Entered: %d\n",count);
    int z=flag?printf("Overload Status: Yes"):printf("Overload Status: No");
}