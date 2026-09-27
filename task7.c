#include<stdio.h>
int main(){
    int temp,rainstatus;
    printf("Enter the temperature:");
    scanf("%d",&temp);
    printf("Enter the rain status(1:Rain or 0:Not Rain): ");
    scanf("%d",&rainstatus);

    if(temp<15){
        printf("Recommend jacket\n");
    }else if(temp>=15 && temp<=25){
        printf("Recommend light clothing \n");
    }
    else {
        printf("Recommend summer clothing \n");
      
    }
    if(rainstatus==1){
        printf("Carry an umbrella\n");
    }
   return 0;
}
