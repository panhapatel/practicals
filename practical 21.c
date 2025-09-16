#include<stdio.h>
int main(){
int num[25];
int i;
int positive_count=0;
int negative_count=0;
int even_count=0;
int odd_count=0;
printf("Enter exactly 25 integers:\n");
for(i=0;i<25;i++){
    printf("Enter number %d:",i+1);
    scanf("%d",&num[i]);
}
for(i=0;i<25;i++){
    if(num[i]>0){
        positive_count++;
    }
    else if(num[i]<0){
        negative_count++;
    }
    if(num[i]%2==0){
        even_count++;
    }
    else{
        odd_count++;
    }
}
//printf("\n--- statistics ---\n");
printf("Total number of positive numbers: %d\n",positive_count);
printf("Total number of negative numbers: %d\n",negative_count);
printf("Total number of even numbers: %d\n",even_count);
printf("Total number of odd numbers: %d\n",odd_count);
return 0;
}
