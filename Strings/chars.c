#include<stdio.h>
#include<string.h>
int main(){
   int i,j,n;
   int a=0, b=0, c=0;
   
   char str[100],s[100];
   printf("Enter a string :\n");
   scanf("%s",str);
   
   for(i=0;i<strlen(str);i++){
       if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
           a+=1;
        }else if(str[i]>='1' && str[i]<='9'){
            b+=1;
        }else{
            c+=1;
        }
    }printf("The number of alphabets are: %d \n", a);
    printf("The number of numbers are: %d \n", b);
    printf("The number of special characters are: %d \n", c);
   
}