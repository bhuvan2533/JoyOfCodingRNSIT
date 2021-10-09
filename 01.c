
#include <stdio.h>
void main(){
    int eligibility;
    printf("Enter your age :");
    scanf("%d",&eligibility);
    (eligibility>18)?printf("You are eligible to vote !!"):printf("You are not eligible to vote");
}