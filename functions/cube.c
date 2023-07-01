#include <stdio.h>
int cube(int n){
    return n*n*n;
} 
int main(){
    printf("Enter the number you want to cube:\n");
    int s;
    scanf("%d", &s);
    printf("The cube is: %d ", cube(s)) ;
}