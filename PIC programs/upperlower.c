#include <stdio.h>
int main(){
	char ch;
  	printf("Enter the Character you want to check:\n");
  	scanf("%c", &ch);
    if (ch>='a' && ch<'z' ){
  		printf("\n %c is in Lower Case", ch);  	
  	} else if (ch>='A' && ch<'Z'){
          printf("\n %c is in Upper Case", ch);  	
  	}else{
    	printf("\n Wrong input");
    }
    
}