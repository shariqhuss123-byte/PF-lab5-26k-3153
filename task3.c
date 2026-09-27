#include <stdio.h>
int main() {
    float Bonusamount,Finalsalary,salary;
    int years, ratings, bonuspercentage;
    
    printf(" Enter salary: \n");
    scanf("%f",&salary);
    printf("Enter years of service: ");
    scanf("%d", &years);
    printf("Enter performance ratings(1-5): ");
    scanf("%d",&ratings);
    if(years>=10){
        if(ratings>=4){
            bonuspercentage=20;
        }
        else{
            bonuspercentage=5;
        }
    }
    else if(years>=5){
        if(ratings>=4){
            bonuspercentage=15;
        }
        else{
            bonuspercentage=5;
        }
    }
    else{
        if(ratings>=4){
            bonuspercentage=10;
        }
        else{
            bonuspercentage=5;
        }
    }
    Bonusamount=salary * bonuspercentage/100;
    Finalsalary=salary + Bonusamount;
    printf("bonuspercentage= %d%%\n",bonuspercentage);
    printf("Bonusamount= %.2f\n",Bonusamount);
    printf("Finalsalary= %.2f\n",Finalsalary);


    return 0;
}
