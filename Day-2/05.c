#include<stdio.h>
void main(){
    int totalBooks,discount;
    int totalCost;
    printf("Enter total books purchased :");
    scanf("%d",&totalBooks);

    if(totalBooks<10000){
        printf("No Discount!!!");
        totalCost=totalBooks*10;
        printf("The total cost is %d",totalCost);
    }
    else if(totalBooks>10000 && totalBooks<15000){
        printf("Hey You got 10 percent discount !!");
        discount=totalBooks*10*0.1;
        totalCost=(totalBooks*10)-discount;
        printf("The total cost is %d",totalCost);
    }
    else if(totalBooks>15000 && totalBooks<20000){
        printf("Hey You got 20 percent discount !!");
        discount=totalBooks*10*0.2;
        totalCost=(totalBooks*10)-discount;
        printf("The total cost is %d",totalCost);
    }

}