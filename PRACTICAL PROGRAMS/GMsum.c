#include<stdio.h>
int main(){
    printf("Enter the first term (a), The number of terms (n),\n and the common difference (r) \n");
    int a,r,n;
    scanf("%d", &a);
    scanf("%d", &n);
    scanf("%d", &r);
    int R=1;
    for(int i=1; i<=n; i++){
        R=R*r;
    }
    int s, sum;
    s= a*(R-1);
    sum=s/(r-1);
    printf("The sum of geometric series is: %d ", sum);
}