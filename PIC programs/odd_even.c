#include<stdio.h>
int main(){
    int n=1;
    int i;
    while(n==1){
        int a;
        printf("Enter a number to check if it is odd or even\n");
        scanf("%d",&a);
        if(a%2==0){
            printf("The number is even\n");
        }else{
            printf("The number is odd\n");
        }
        printf("Do you wish to continue? 1/0");
        scanf("%d", &i);
        if(i==1){
            continue;
        }else{
            printf("Thank You!");
            break;
        }
    }
    
}