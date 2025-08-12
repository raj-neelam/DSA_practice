#include <stdio.h>
#include <math.h>

int isPalindrome(int number) {
    // Handle negative numbers by taking the absolute value.
    if (number < 0)
        number = -number;

    int a,s=0,r;
    a = number;
    while(a!=0){
        r = a%10;
        s = s*10 + r;
        a = a/10;
    }

    if (s == number)
        return 1;
    return 0;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if (isPalindrome(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
    
    return 0;
}