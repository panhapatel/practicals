#include<stdio.h>
int main()
{
float celsius;
printf("Enter temperature in celsius:\n");
scanf("%f",&celsius);
float fahrenheit;
fahrenheit=(celsius* 9/5) + 32;
printf("Fahrenheit temperature:%f",fahrenheit);
return 0;
}
