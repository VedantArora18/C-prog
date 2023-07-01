#include<stdio.h>
int main(){
    printf("Please choose the type of temperature you are looking for:\n");
    printf("1.Celsius\n");
    printf("2.Fahrenheit\n");
    printf("3.Kelvin\n");
    int a;
    scanf("%d", &a);
    printf("Enter the temperature (num) \n");
    int b;
    scanf("%d", &b);
    printf("Please choose the type of temperature you want to convert to:\n");
    printf("1.Celsius\n");
    printf("2.Fahrenheit\n");
    printf("3.Kelvin\n");
    int c;
    scanf("%d", &c);
    if(a==1){
        if(c==1){
            printf("The temp in C is:\n %d", b);
        }
        else if(c==2){
            printf("The temp in F is\n %d", (b*9/5)+32);
        }
        else{
            printf("The temp in K is\n %d", b+273);
        }
    }
    else if(a==2){
        if(c==1){
            printf("The temp in C is:\n %d", ((b-32)*5)/9);
        }else if(c==2){
            printf("The temp in F is\n %d", b);
        }else{
            printf("The temp in K is\n %d", (((b-32)*5)/9)+273);
        }
    }
    else{
        if(c==1){
            printf("The temp in C is:\n %d", b-273);
        }else if(c==2){
            printf("The temp in F is\n %d", ((b-273-)*9/5)+32);
        }else{
            printf("The temp in K is\n %d", b);
        }
    }


}