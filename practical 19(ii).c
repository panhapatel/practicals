#include<stdio.h>
int main()
{
    int n=9,i,j;
    for(i=1;i<=(n+1)/2;i++){
        for(j=1;j<=n;j++){
            if(i==1||j==i||j==n-i+1)
                printf("%d",j);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
