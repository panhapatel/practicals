#include<stdio.h>
int main()
{
float amount,discount,finalprice;
printf("Enter your amount:");
scanf("%f",&amount);
if(amount>0)
{
    if(amount<1000)
    {
        printf("no dicount");
    }
    if(amount>=1000 && amount<5000)
    {
        discount=(amount*10)/100;
        finalprice=amount-discount;
        printf("You get 10%% discount\n");
        printf("Your discount price:%f\n",discount);
        printf("Your final price:%f\n",finalprice);
    }
    if(amount>=5000)
    {
        discount=(amount*20)/100;
        finalprice=amount-discount;
        printf("You get 20%% discount\n");
        printf("Your discount price:%f\n",discount);
        printf("Your final price:%f\n",finalprice);
    }

}
  return 0;
}
