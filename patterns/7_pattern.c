// target pattern for n=4
//       *       
//     * * *
//   * * * * *
// * * * * * * *

#include <stdio.h>

int main() {
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i -1; j++) {
            printf("  ");
        }
        for (int j = 0; j < (2*i)+1; j++) {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}