#include <stdio.h>
int main(){
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    int i=0;
    do{
        i=i+1;
        printf("%d \t", i);
    }while(i<a);
}