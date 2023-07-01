#include <stdio.h>
int main(){
	int c,s;
  	printf("Enter the Cost Price:\n");
  	scanf("%d", &c);
    printf("Enter the Selling Price:\n");
  	scanf("%d", &s);

    if (s>=c){
  		printf("It is a profit of Rs.\n %d", s-c);
        printf("\n");
        printf("and profit percentage= \n %d %% ", ((s-c)*100)/c );  	
  	} else{
        printf("It is a loss of Rs.\n %d", c-s);
        printf("\n");
        printf("and loss percentage= \n %d %%", ((c-s)*100)/c);
    }
    
}