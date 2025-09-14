#include<stdio.h>
int main()
{
    int num,total;
    total=0;
    while(1)
    {
        printf("1. Burger - Rs.150 \n");
        printf("2. Pizza - Rs.200 \n");
        printf("3. Pasta - Rs.120 \n");
        printf("4. Sandwich - Rs.100 \n");
        printf("5. French fries - Rs.80 \n");
        printf("0  Finish the order \n");

        printf("Enter a number:\n");
        scanf("%d",&num);

        switch(num)
        {
        case 1:
            total=total+150;
            printf("The total amount is=%d \n",total);
            break;
         case 2:
            total=total+200;
            printf("The total amount is=%d \n",total);
            break;
         case 3:
            total=total+120;
            printf("The total amount is=%d \n",total);
            break;
         case 4:
            total=total+100;
            printf("The total amount is=%d \n",total);
            break;
         case 5:
            total=total+80;
            printf("The total amount is=%d \n",total);
            break;
         case 0:
            printf("Your order is finish \n");
            break;

         default:
            printf("Enter a valid number");
            break;


        }

        }
        return 0;

}
