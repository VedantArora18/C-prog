#include<stdio.h>
int sum(int num){
    int r,q;
    if (num==0){
        return 0;
    }else{
        q=num%10;
        r=num/10;
        return(q+sum(r));
    }
    
    
}
int main(){
    printf("Enter a number to find the sum of digits:\n");
    int num;
    scanf("%d", &num);
    printf("The sum of digits of the number is:  %d", sum(num));
}