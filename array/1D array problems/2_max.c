#include <stdio.h>

void main(){
    int len = 5;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        printf("enter number for [%d] :", i);
        scanf("%d", &arr[i]);
    }

    int max_val = arr[0];

    printf("\nArray elements are:");
    for (int i = 0; i < len; i++)
    {
        printf("[%d]", arr[i]);
        if (arr[i] > max_val)
        {
            max_val = arr[i];
        }
    }
    
    printf("\n");
    printf("Max: %d\n", max_val);
}