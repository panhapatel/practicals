#include<stdio.h>
int main(){
int n,i;
printf("Enter total number of participants (N):");
scanf("%d",&n);
int arr[n-1];
int sum=0,total=n*(n+1)/2;
printf("Enter %d participant ID:\n",n-1);
for(i=0;i<n-1;i++){
    scanf("%d",&arr[i]);
    sum+=arr[i];
}
printf("Missing participant ID is:%d\n",total-sum);
return 0;
}
