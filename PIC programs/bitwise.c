#include<stdio.h>
int main(void){
    printf("Please enter 2 numbers\n");
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("The right bitwise operation of the numbers is\n");
    printf("%d\n", a>>b);
    
    printf("The left bitwise operation of the numbers is\n");
    printf("%d\n", a<<b);
    
    printf("The complement of a is\n");
    printf("%d\n", ~a);
    
    printf("The complement of b is is\n");
    printf("%d\n", ~b);

    printf("The XOR operation of the numbers is\n");
    printf("%d\n", a^b);

    printf("The bitwise AND operation of the numbers is\n");
    printf("%d\n", a&b);

    printf("The bitwise OR operation of the numbers is\n");
    printf("%d\n", a|b);
    
}