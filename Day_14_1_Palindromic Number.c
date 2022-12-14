#include <stdio.h>

int main() {
    int n, n1, reverse = 0, remainder;
    
    printf("Enter any number: ");
    scanf("%d", &n);    
    n1 = n;
    
    //logic
    while (n > 0){
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }
    
    if (n1 == reverse){
        printf("Given number is a palindromic number"); 
    }
    else{
        printf("Given number is not a palindromic number"); 
    }    
    return 0; 
} 
