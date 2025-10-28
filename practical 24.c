#include<stdio.h>
int main(){
char str1[10]="hello";
int flag=0;

//que 1
int length=0;
for(int i=0;str1[i]!='\0';i++)
{
    length++;
}
printf("length=%d\n",length);

//que 2
char str2[5];
for(int i=4;i>=0 && i<5;i--)
{
    str2[4-i]=str1[i];
    printf("%c",str2[4-i]);
}
printf("\n");

//que 3
for(int i=0;str1[i]!='\0' || str2[i]!='\0';i++)
{

    if(str1[i]!=str2[i])
    {
        flag=1;
        break;
    }
}
if(flag==1)
{
    printf("different\n");
}
else
{
    printf("same\n");
}

//que 4
int str3[10];
for(int i=0;i<5;i++)
{
    str3[i]=str1[i];
}
for(int i=0;i<5;i++)
{
    printf("%c",str3[i]);
}
printf("\n");

//que 5
char str4[6]="world";
int i=0;
while(str1[i]!='\0')
{
    printf("%c",str1[i]);
    i++;
}
int j=0;
while(str4[j]!='\0')
{
    printf("%c",str4[j]);
    j++;
}
printf("\n");

//que 6
for(int i=0;i<5;i++)
{
    int k=(int)str1[i]-32;
    char ch=(char)k;
    str1[i]=ch;
}
for(int j=0;j<5;j++)
{
    printf("%c",str1[j]);
}
printf("\n");

//que 7
for(int i=0;i<5;i++)
{
    int k=(int)str1[i]+32;
    char ch=(char)k;
    str1[i]=ch;
}
for(int j=0;j<5;j++)
{
    printf("%c",str1[j]);
}
printf("\n");

//que 8
char str5[15];
char str[i];
str5[15]='hello world';
for(int i=0;str[i]!='\0';i++)
{
    printf("%c",str[i]);
}


return 0;
}
