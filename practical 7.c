#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age<=12 || age>=60)
    {
        printf("Free entry");
    }
    else
    {
        printf("Pay 120 rupess for entry");
    }
return 0;
}
