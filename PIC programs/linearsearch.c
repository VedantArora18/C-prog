#include <stdio.h>
int main(){
    int n,m,b, f=0;
    int a[n];
    printf("Enter the number of elements you want in araay:\n");
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        printf("Enter element number %d  :", i+1);
        scanf("%d", &m);
        a[i]=m;
    }

    for (int i=0; i<n; i++){
        printf("%d  ", a[i]);
    }

    printf("Enter the element you want to search in the array:\n");
    scanf("%d", &b);

    for (int j=1; j<=n; j++){
        if(a[j]==b){
            printf("The element is at position number: %d", j);
            f=1;
            break;
        }
    }
    if(f==0){
        printf("Not found");
    }
}