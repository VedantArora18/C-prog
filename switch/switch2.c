#include<stdio.h>
int main(){
    char n;
    printf("Enter an alphabet:\n");
    scanf("%c", &n);
    switch (n)
    {
    case 'a':
        printf("You have entered a vowel");
        break;
    case 'e':
        printf("You have entered a vowel");
        break;
    case 'i':
        printf("You have entered a vowel");
        break;
    case 'o':
        printf("You have entered a vowel");
        break;
    case 'u':
        printf("You have entered a vowel");
        break;
    case 'A':
        printf("You have entered a vowel");
        break;
    case 'E':
        printf("You have entered a vowel");
        break;
    case 'I':
        printf("You have entered a vowel");
        break;
    case 'O':
        printf("You have entered a vowel");
        break;
    case 'U':
        printf("You have entered a vowel");
        break;
    default:
        printf("You have entered a consonant");
        break;
    }
}