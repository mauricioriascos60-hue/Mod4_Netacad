#include <stdio.h>

int main() {
    
    char n1[] = "255";
    char n2[] = "255";
    char n3[] = "255";
    char n4[] = "255";
    char ip[20];
    sprintf(ip, "%s.%s.%s.%s", n1, n2, n3, n4);
    printf("%s\n", ip);

    return 0;
}
