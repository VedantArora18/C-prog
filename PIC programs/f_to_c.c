#include<stdio.h>
int main(void){
    int f;
    printf("Enter the temperature in F:\n");
    scanf("%d",&f);
    
    printf("The temperature in C is :\n");
    printf("%d", ((f-32)*5)/9);

}