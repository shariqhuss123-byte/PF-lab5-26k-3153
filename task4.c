#include<stdio.h>
int main(){
    int c,i;
    printf("Enter meal category(1:breakfast,2:lunch,3:dinner): ");
    scanf("%d",&c);
    printf("Enter item choice(1 or 2):");
    scanf("%d",&i);
    switch(c){
        case 1:
            switch(i){
                case 1: printf("breakfast,1,RS.250");break;
                case 2: printf("breakfast,2,RS.230");break;
            }
            break;

        case 2:
            switch(i){
                case 1: printf("lunch,1,RS.150");break;
                case 2: printf("lunch,2,RS.100");break;
            }
            break;

        case 3:
            switch(i){
                case 1: printf("Dinner,1,RS.500");break;
                case 2: printf("Dinner,2,RS.800");break;
            }
            break;
    }
    return 0;
}
