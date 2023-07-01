#include<stdio.h>
int main(void){
    printf("Please enter 2 numbers\n");
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a>b){
        printf("%d > %d\n", a,b);
    }else if(a<b){
        printf("%d < %d\n", a,b);
    }else{
        printf("%d = %d\n", a,b);
    }

}