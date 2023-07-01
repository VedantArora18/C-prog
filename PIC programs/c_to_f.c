#include<stdio.h>
int main(void){
    int c;
    printf("Enter the temperature in C:\n");
    scanf("%d",&c);
    int n=9/5;
    printf("The temperature in F is :\n");
    printf("%d", (c*9/5)+32);
}