#include<stdio.h>
int main(){
    int n, nums;
    scanf("%d",&n);

    int i = 1;
    int count = 0;          // consecutive count
    int highCount = 0;      // total high value
    int fraud = 0;

    while (i <= n)
    {
        scanf("%d",&nums);

        if(nums >= 50000){
            count++;
            highCount++;

            if(count == 3 && fraud == 0){
                fraud = i;
            }
        }
        else{
            count = 0;
        }
        i++;
    }

    if(fraud != 0){
        printf("Fraud Triggered At Attempt: %d\n", fraud);
        printf("High Value Transactions: %d\n", highCount);
    }
    else{
        printf("Fraud Triggered At Attempt: Not Occured\n");
        printf("High Value Transactions: %d\n", highCount);
    }
}
