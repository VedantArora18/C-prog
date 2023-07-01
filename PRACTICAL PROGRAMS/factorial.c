#include<stdio.h>
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return (n * fact(n-1));
    }
}
int main(){
    printf("Enter the number:\n");
    int n;
    scanf("%d", &n);
    printf("The factorial is: %d ", fact(n));

}