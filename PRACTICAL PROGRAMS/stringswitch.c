#include<stdio.h>
#include<string.h>
int main(){
    char s1[50], s2[50];
    int n;
    printf("Enter 2 strings:\n");
    scanf("%s", &s1);
    scanf("%s", &s2);
    printf("Enter the operation you want to perform:\n");
    printf("1. Length of strings\n ");
    printf("2. Concatenate strings\n ");
    printf("3. Reverse of strings\n ");
    scanf("%d", &n);
    switch(n){
        case 1:
            printf("%d \n", strlen(s1));
            printf("%d", strlen(s2));
            break;
        case 2:
            printf("%s", strcat(s1,s2));
            break;
        case 3:
            printf("%s \n", strrev(s1));
            printf("%s", strrev(s2));
            
            break;
        default:
            printf("Wrong choice");
            break;   
    }
}