#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        int budget,guests,food,decoration,music,expenses;
        scanf("%d %d %d %d %d %d",&budget,&guests,&food,&decoration,&music,&expenses);
        
        int totalFoodCost=guests*food;
        
        if(budget>=(guests+food+decoration+music+expenses) && guests>=5 && guests<=50 && (decoration<0.3*budget || totalFoodCost< 0.5 * budget) &&(guests<=25 || music>0) ){
         printf("Celebration Approved");
        
        
        } else{
                printf("Celebration Denied");
        
        }
        
    return 0;
}