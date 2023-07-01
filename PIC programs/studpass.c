#include<stdio.h>
int main(void){
    
    int a,b,c,d;
    printf("Please enter the marks in subject 1\n");
    scanf("%d",&a);
    (a>=50)?printf("Sub 1- pass\n"):printf("Sub 1- fail\n");
    printf("Please enter the marks in subject 2\n");
    scanf("%d",&b);
    (b>=50)?printf("Sub 2- pass\n"):printf("Sub 2- fail\n");
    printf("Please enter the marks in subject 3\n");
    scanf("%d",&c);
    (c>=50)?printf("Sub 3- pass\n"):printf("Sub 3- fail\n");
    printf("Please enter the marks in subject 4\n");
    scanf("%d",&d);
    (d>=50)?printf("Sub 4- pass\n"):printf("Sub 4- fail\n");
    if (a<50||b<50||c<50||d<50){
        printf("The student has failed");
    }else{
        printf("The student has passed");
    }
}