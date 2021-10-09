#include <stdio.h>
void main(){
    // For 2 numbers 
    // int a,b;
    // printf("Enter 2 numbers: ");
    // scanf("%d %d",&a,&b);
    // if(a >0 && b >0){
    //     if(a>b){
    //     printf("%d is greater than %d",a,b);
    //     }
    //     else if(a==b){
    //         printf("both the numbers are equal");
    //     }
    //     else{ 
    //         printf("%d is greater than %d",b,a);
    //         }
    // }
    // else{
    //     printf("Invalid number in input");
    // }
    
    //For 3 numbers 
    int a , b , c ;
    printf ("Enter 3 numbers :");
    scanf("%d %d %d",&a,&b,&c);
    if(a>0 && b>0 && c >0){
        
    if (a >= b && a >= c)
        printf("%d is the largest number.", a);
  
    if (b >= a && b >= c)
        printf("%d is the largest number.", b);
  
    if (c >= a && c >= b)
        printf("%d is the largest number.", c);
    }
    else{
        printf("Invalid input");
    }

}