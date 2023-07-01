#include<stdio.h>
int main(){
    int a,b,n;
    printf("Enter 2 numbers:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("What operation do you want to perform?\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Divison\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("%d", a+b);
        break;
    case 2:
        printf("%d", a-b);
        break;
    case 3:
        printf("%d", a*b);
        break;
    case 4:
        printf("%d", a/b);
        break;
    default:
        printf("You didn't enter a valid option");
        break;
        
    }
}