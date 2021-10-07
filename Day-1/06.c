#include <stdio.h>
void main(){
    int a , b;
    printf("Enter 2 numbers :");
    scanf("%d %d",&a,&b);
    // Use of Ternary operator 
    a>b ? printf("%d is greater than %d",a,b):printf("%d is greater than %d",b,a);
}