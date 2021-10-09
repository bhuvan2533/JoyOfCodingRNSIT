// Write a program that accepts two integers and simulate a simple calculator. if one of the 
// operands is “zero”, then print appropriate message while performing division. The operators 
// to be handled are +, -, *, /, %
#include<stdio.h>
int main() {
 int a,b,choice;
 printf("Enter the first Integer:\n");
 scanf("%d",&a);
 printf("Enter the second Integer:\n");
 scanf("%d",&b);
 
 printf("\n\nEnter the option:\n");
 printf("1-Addition.\n2-Subtraction \n3-Multiplication.\n4-Division \n");
 scanf("%d",&choice);
 switch(choice) {
 case 1:
 printf("\nAddition of %d and %d is: %d",a,b,a+b);
 break;
 
 case 2:
 printf("\nSubtraction of %d and %d is: %d",a,b,a-b);
 break;
 
 case 3:
 printf("\nMultiplication of %d and %d is: %d",a,b,a*b);
 break; 
 
 case 4:
 if(b==0) {
 printf("Divide by zero error \n");
 } else {
 printf("\n Division of %d and %d is: %d",a,b,a/b);
 } 
 break;

 default:
 printf("\n Enter correct option\n");
 break; 
 }
}