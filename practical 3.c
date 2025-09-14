#include<stdio.h>
int main()
{
    float W,H,BMI;
    printf("Enter the Weight:");
    scanf("%f",&W);
    printf("Enter the Height:");
    scanf("%f",&H);
    BMI=W/(H*H);
    if(BMI<18){
        printf("Underweight");
    }
    if(BMI>=18&&BMI<25){
        printf("Normal");
    }
    if(BMI>=25&&BMI<=30){
        printf("Over Weight");
    }
      return 0;
}
