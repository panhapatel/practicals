#include<stdio.h>
#include<math.h>
float area (float a,float b,float c){
float s=(a+b+c)/2;
float A=sqrt(s*(s-a)*(s-b)*(s-c));
return A;
}

void valid(float a,float b,float c){
float A;
if(b+c>a && a+b>c && c+a>b){
    printf("valid triangle:Yes");
    printf("\narea=%d",A);
}
else{
    printf("valid triangle:No");
}
area(a,b,c);
}

int main(){
float a,b,c;
printf("Enter 1st side length: ");
scanf("%d",&a);
printf("Enter 2nd side length: ");
scanf("%d",&b);
printf("Enter 3rd side length: ");
scanf("%d",&c);
valid(a,b,c);

return 0;
}
