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
    printf("number to count :");
    scanf("%d", &val);

    int count=0;

    printf("\nArray elements are:");
    for (int i = 0; i < len; i++)
    {
        printf("[%d]", arr[i]);
        if (arr[i] == val)
        {
            count += 1;
        }
    }
    
    printf("\n");
    if (count!=0){
        printf("%d is present %d times",val,  count);
    }else
    {
        printf("number is not present");
    }
    
}