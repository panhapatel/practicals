#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of days:");
    scanf("%d",&n);
    int p[100];
    printf("Enter prices for %d days:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    int min_price=p[0];
    int max_profit=0;
    for(int i=1;i<n;i++){
        if(p[i]<min_price){
            min_price=p[i];
        }
        else{
            int profit=p[i]-min_price;
            if(profit>max_profit){
                max_profit=profit;
            }
        }

        }
        printf("Maximum profit=%d\n",max_profit);
        return 0;

}
