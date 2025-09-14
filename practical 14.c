#include<stdio.h>
int main()
{
    int total=5000,amount;
    int ch;
    while(1){
        printf("Enter 1 for withdraw\n Enter 2 for exit:");
        scanf("%d",&ch);
        switch(ch){
    case 1:
        printf("Enter a amount you wish to withdraw:\n");
        scanf("%d",&amount);
        if(amount<=total)
        {
            total=total-amount;
            printf("remaining balance is %d\n",total);
        }
        else{
            printf("you have insufficient balance");
            return 1;
        }
        break;
    case 2:
        return 1;
        break;
        default:
        printf("invalid choice\n");
        break;
        }
    }


    return 0;
}
