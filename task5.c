#include<stdio.h>
int main(){
   int p;
   scanf("%d",&p);

   printf("Read: %s\n",(p & 1)? "Yes":"No");
   printf("Write: %s\n",(p & 2)? "Yes": "No");
   printf("Execute %s\n",(p & 4)? "Yes":"No");
    return 0;
}
