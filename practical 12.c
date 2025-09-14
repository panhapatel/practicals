#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<51;i++){
        if(i%5==0){
            printf("Book ID:%d(special Edition)\n",i);
            continue;
        }
        printf("Book ID:%d\n",i);
    }
    return 0;
}
