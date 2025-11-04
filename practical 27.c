#include<stdio.h>

int fib(int n);

int main(){
int n;
printf("Enter a month:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    printf("month:%d=%d\n",i,fib(i));
}
return 0;


}

int fib(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 1;
    }
    int f=fib(n-1)+fib(n-2);
    return f;
}

