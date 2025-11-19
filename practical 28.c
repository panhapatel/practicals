#include<stdio.h>

union book{
   char Author[40];
   char B_name[50];
   float price;
   int status;
};

int main(){
union book book1;

printf("== Library Book management system ==\n");
printf("Enter Author name:");
gets(book1.Author);
printf("Author name:  %s\n",book1.Author);
printf("Enter Book name:");
gets(book1.B_name);
printf("Book name:  %s\n",book1.B_name);
printf("Enter price:");
scanf("%f",&book1.price);
printf("Price:  %f\n",book1.price);
printf("Enter status(1=Issued/0=Available):");
scanf("%d",&book1.status);
if(book1.status==1)
        printf("status: Issued");
    else
        printf("status: Available");

return 0;

}
