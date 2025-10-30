#include <stdio.h>

int main() {
    int a[10] = {0};
    int b[2] = {1, 1};
    int c[5] = {1, 1, 1, 1, 1};
    int d[6] = {1, 1, 2, 3, 5, 8};
    int i;

    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");

    for (i = 0; i < 2; i++)
        printf("%d ", b[i]);
    printf("\n");

    for (i = 0; i < 5; i++)
        printf("%d ", c[i]);
    printf("\n");

    for (i = 0; i < 6; i++)
        printf("%d ", d[i]);
    printf("\n");

    return 0;
}

