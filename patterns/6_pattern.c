// target pattern for n=4
// 1 
// 2 1
// 3 2 1
// 4 3 2 1

#include <stdio.h>

int main() {
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j<=i)
            {
                printf("%d ", i-j+1);
            }
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
    }

    return 0;
}