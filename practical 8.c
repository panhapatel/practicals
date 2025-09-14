#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>0)
    {
        if(age>=18)
        printf("You are eligible");
        else
        printf("You are not eligible");
    }
    else
    {
        printf("Invalide age");
    }
 return 0;
}
