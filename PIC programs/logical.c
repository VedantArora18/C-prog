#include<stdio.h>
int main(void){
    printf("Please enter 2 numbers(either zero(0) or one(1)\n");
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("The and operation of the numbers is\n");
    printf("%d\n", a&&b);
    
    printf("The or operation of the numbers is\n");
    printf("%d\n", a||b);
    
    printf("The not of a is\n");
    printf("%d\n", !a);
    
    printf("The not of b is is\n");
    printf("%d\n", !b);
    
}