#include <stdio.h>
#include <math.h>

int isArmstrong(int number) {
    int temp = number;
    if (temp < 0)
        temp = -temp;

    int digits = 0;
    int copy = temp;
    while (copy) {
        digits++;
        copy /= 10;
    }
    
    int sum = 0;
    copy = temp;
    while (copy) {
        int digit = copy % 10;
        sum += (int)pow(digit, digits);
        copy /= 10;
    }
    
    return (sum == temp);
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    
    return 0;
}