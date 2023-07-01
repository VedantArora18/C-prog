#include <stdio.h>
int main(){
    int n;
    char str[10];
    printf("Enter an integer: \n");
    scanf("%d", &n);
    for(int i=0; i<3; i++){
        int r;
        r=n%10;
        str[i]==r;
        n=n/10;
    }
    printf("%s", str);
}
