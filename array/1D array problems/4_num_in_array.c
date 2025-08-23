#include <stdio.h>

void main(){
    int len = 5;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        printf("enter number for [%d] :", i);
        scanf("%d", &arr[i]);
    }

    int val;
    printf("number to search :");
    scanf("%d", &val);

    int in_it=0;

    printf("\nArray elements are:");
    for (int i = 0; i < len; i++)
    {
        printf("[%d]", arr[i]);
        if (arr[i] == val)
        {
            in_it = 1;
        }
    }
    
    printf("\n");
    if (in_it){
        printf("number is present");
    }else
    {
        printf("number is not present");
    }
    
}