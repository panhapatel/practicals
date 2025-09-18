#include<stdio.h>
int main()
{
    int A[5][10];
    int reserved,r,s;
    printf("Enter the no. of reserved seats: ");
    scanf("%d",&reserved);
    for(int i=0;i<reserved;i++){
        printf("Enter row and seat no.for reserved seat %d:",i+1);
        scanf("%d %d",&r,&s);
        if(r>=1 && r<=5 && s>=1 && s<=10){
            A[r-1][s-1]=1;
        }
        else{
            printf("Invalid seat position! Try again\n");
            i--;
        }
    }
    printf("\n seating chart:\n");
    for(int i=0;i<5;i++){
        printf("row %d:",i+1);
        for(int j=0;j<10;j++){
            if(A[i][j]==1)
                printf("X ");
            else
                printf("0 ");
        }
        printf("\n");
    }
    return 0;
}
