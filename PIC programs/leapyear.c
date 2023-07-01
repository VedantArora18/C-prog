#include <stdio.h>
int main(){
	int n;
  	printf("Enter the year you want to check:\n");
  	scanf("%d", &n);
    if (n%4==0){
  		printf("\n %d is a Leap year", n);  	
  	} else{
          printf("\n %d is not a leap year", n);
    }
    
}