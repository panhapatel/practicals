#include<stdio.h>
int main(){
int matchsticks=21;
while(matchsticks>0){
  printf("There are %d matchsticks. How many do you take(1-4)? ", matchsticks);
  int user_pick;
  scanf("%d",&user_pick);
  if(user_pick<1 || user_pick>4) {
  printf("Invalid input.Please choose 1-4 matchsticks. \n");
  continue;
  }
  int computer_pick=5-user_pick;
  matchsticks=(21-(user_pick+computer_pick));

  printf("You picked %d,computer picked %d.Remaining matchsticks: %d\n",user_pick,computer_pick,matchsticks);
}
printf("You lose! The computer win.\n");
return 0;
}
