#include<stdio.h>
int main(void){
    printf("Please enter 2 numbers\n");
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("The sum of the numbers is\n");
    printf("%d\n", a+b);
    
    printf("The difference of the numbers is\n");
    printf("%d\n", a-b);
    
    printf("The product of the numbers is\n");
    printf("%d\n", a*b);
    
    printf("The quotient of the numbers is\n");
    printf("%d\n", a/b);
    
    printf("The modulus of the numbers is\n");
    printf("%d\n", a%b);
}