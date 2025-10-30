#include <stdio.h>

int main() {
    char c;
    short s;
    int i;
    long l;
    long long ll;
    float f;
    double d;
    char *pc;

    printf("%zu byte for chars\n", sizeof(char));
    printf("%zu byte for char variables\n", sizeof(c));

    printf("%zu bytes for shorts\n", sizeof(short));
    printf("%zu bytes for short variables\n", sizeof(s));

    printf("%zu bytes for ints\n", sizeof(int));
    printf("%zu bytes for int variables\n", sizeof(i));

    printf("%zu bytes for longs\n", sizeof(long));
    printf("%zu bytes for long variables\n", sizeof(l));

    printf("%zu bytes for long longs\n", sizeof(long long));
    printf("%zu bytes for long long variables\n", sizeof(ll));

    printf("%zu bytes for floats\n", sizeof(float));
    printf("%zu bytes for float variables\n", sizeof(f));

    printf("%zu bytes for doubles\n", sizeof(double));
    printf("%zu bytes for double variables\n", sizeof(d));

    printf("%zu bytes for pointers\n", sizeof(void*));
    printf("%zu bytes for pointer variables\n", sizeof(pc));

    printf("%zu bytes for address of char variable\n", sizeof(&c));
    printf("%zu bytes for pointer to char variable\n", sizeof(pc));
    printf("%zu byte for value stored by pointer to char variable\n", sizeof(*pc));

    return 0;
}
