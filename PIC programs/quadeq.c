#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter the a, b and c in equation ax^2+bx+c=0\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("So the equation is %dx^2+%dx+%d=0\n", a, b, c );
    printf("The roots of the equation are: \n");
    double D;
    D=(b*b-4*a*c);
    double n;
    
    n=sqrt(D);
    int x1, x2;
    x1=(-b+n)/(2*a);
    x2=(-b-n)/(2*a);
    printf("%d , %d ", x1, x2);
}