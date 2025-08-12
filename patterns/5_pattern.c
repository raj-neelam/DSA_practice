// target pattern for n=4
// 1 1 1 1
//   2 2 2
//     3 3
//       4

#include <stdio.h>

int main() {
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= i)
            {
                printf("%d ", i + 1);
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