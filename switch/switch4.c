#include<stdio.h>
int main(){
    int n,a;
    printf("Enter a number To check even or odd:\n");
    scanf("%d", &n);
    a=n%2;
    switch (a)
    {
    case 0:
        printf("The number is even");
        
        break;
    default:
        printf("The number is odd");
        break;
        
    }
}