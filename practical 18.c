#include<stdio.h>
int main(){
 int vertical_size,horizontal_size;
 printf("Enter the size of table vertically: ");
 scanf("%d",&vertical_size);

 printf("Enter the size of table horizontally: ");
 scanf("%d",&horizontal_size);

 if(vertical_size<=0 || horizontal_size<=0){
    printf("Error: Table dimensions must be positive integers.\n");
    return 1;
 }
 printf("\nMultiplication Table(%d * %d):\n",vertical_size,horizontal_size);
 for(int i=1;i<=vertical_size;i++){
    for(int j=1;j<=horizontal_size;j++){
        printf("%4d",i*j);
    }
    printf("\n");
 }
 return 0;
}
