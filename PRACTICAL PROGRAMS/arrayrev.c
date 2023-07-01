#include<stdio.h>
int main(){
    int n, a[n];
    printf("Enter the elements you want for the array\n");
    scanf("%d\n", &n);
    for(int i=0; i<n; i++){
        
        scanf("%d\t", &a[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d\t", a[i]);
    }
    printf("\nThe reverse of the array is:\n");
    for(int i=n-1; i>=0; i--){
        printf("%d\t", a[i]);

    }

}