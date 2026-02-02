#include<stdio.h>
int main(){
    int a,n,nums,z,x;
    scanf("%d %d",&a,&n);
    int sum=0;int i=0;
    int treated=0;
    int rejected=0;
    int overflow=0;
    while (i<n)
    {
        scanf("%d",&nums);
        sum=sum+nums;
        i++;  
    }
    if(sum<=a){
        printf("Treated Patients: %d\n",sum);
        printf("Rejected Patients: 0\n");
    }  
    
    else{
        printf("Treated Patients: %d\n",a);
        printf("Treated Patients: %d",sum-a);
    }
}