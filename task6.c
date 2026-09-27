#include<stdio.h>
int main(){
    int score,mission;
    printf("Enter the score:");
    scanf("%d",&score);
    printf("Enter the mission:");
    scanf("%d",&mission);
    

    if(score>=500 && mission==5){
        printf("player qualifies for round 2 \n");
    }
    else if(score>=1000 && mission==10){
        printf("player qualifies for round 3 \n");
    }
    else{
        printf("player is at level 1 \n");
    }
   return 0;
}
