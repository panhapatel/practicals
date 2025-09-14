#include<stdio.h>
int main(){
double currentdistance=0.0;
int minute=0;
while(1){
    minute++;
    currentdistance+=0.5;
    printf("Minute %d:Distance covered=%.1f km\n",minute,currentdistance);
    if(currentdistance>=10.0){
        printf("Marathon complete!\n");
        break;
    }

}
return 0;
}
