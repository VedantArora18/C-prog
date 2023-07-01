#include<stdio.h>
int factorial(int num){
    if(num==0 || num==1){
        return(1);
    }else{
        return(num*factorial(num-1));
    }
}
int main(){
    printf("Enter a number to find the factorial:\n");
    int num;
    scanf("%d", &num);
    printf("The factorial of the number is:\t %d", factorial(num));
}
