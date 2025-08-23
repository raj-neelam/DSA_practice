#include <stdio.h>

void main(){
    int len = 5;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        printf("enter number for [%d] :", i);
        scanf("%d", &arr[i]);
    }

    int even_sum = 0;

    printf("\nArray elements are:");
    for (int i = 0; i < len; i++)
    {
        printf("[%d]", arr[i]);
        if (arr[i] % 2 == 0)
        {
            even_sum++;
        }
    }
    
    printf("\n");
    printf("Total even numbers: %d\n", even_sum);
    printf("Total odd numbers: %d\n", len-even_sum);
}