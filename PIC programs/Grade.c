#include<stdio.h>
int main(){
    int p,ch,b,m,co;
    printf("Please enter the marks of Physics:\n");
    scanf("%d", &p);
    printf("Please enter the marks of Chemistry:\n");
    scanf("%d", &ch);
    printf("Please enter the marks of Biology:\n");
    scanf("%d", &b);
    printf("Please enter the marks of Maths:\n");
    scanf("%d", &m);
    printf("Please enter the marks of Computer Science:\n");
    scanf("%d", &co);
    int n=(p+ch+b+m+co)/5;
    printf("The final percentage of the student is %d %% \n" , n);
    if(n>=90){
        printf("the Grade is : A\n");
    }
    else if(n>=80){
        printf("the Grade is : B\n");
    }
    else if(n>=70){
        printf("the Grade is : C\n");
    }
    else if(n>=60){
        printf("the Grade is : D\n");
    }
    else if(n>=50){
        printf("the Grade is : E\n");
    }
    else{
        printf("the Grade is : F\n");
    }
    

}