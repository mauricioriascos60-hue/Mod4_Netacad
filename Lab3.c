#include <stdio.h>

int main() {
    int fib[10];
    int i;

    fib[0] = 1;
    fib[1] = 1;

    for (i = 2; i < 10; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    for (i = 0; i < 10; i++)
        printf("%d\n", fib[i]);

    for (i = 0; i < 10; i += 2)
        printf("%d\n", fib[i]);

    for (i = 1; i < 10; i += 2)
        printf("%d\n", fib[i]);

    return 0;
}
