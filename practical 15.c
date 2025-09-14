#include<stdio.h>
#include<unistd.h>
int main()
{
    int time,count=0;
    printf("Enter your time:");
    scanf("%d",&time);
    if(time<0){
        printf("Enter valid time:");
    }
    else{
        while(time>count){
            printf("%d\n",time);
            sleep(1);
            time--;
        }
    }
    return 0;
}
