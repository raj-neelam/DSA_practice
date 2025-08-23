#include <stdio.h>

void main(){
    int len = 10;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        printf("enter number for [%d] :", i);
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    int max_val = arr[0];

    printf("\nArray elements are:");
    for (int i = 0; i < len; i++)
    {
        printf("[%d]", arr[i]);
        sum += arr[i];
        if (arr[i] > max_val)
        {
            max_val = arr[i];
        }
    }
    
    printf("\n");
    printf("Sum: %d\n", sum);
    printf("Max: %d\n", max_val);
}