#include<stdio.h>
int main()
{
    int l,b,area,perimeter;

    printf("Enter the Length:");
    scanf("%d",&l);

    printf("Enter the Breadth:");
    scanf("%d",&b);

    area=l*b;
    printf("Area:%d\n",area);

    perimeter=2*(l+b);
    printf("Perimeter:%d\n",perimeter);

    return 0;

}
