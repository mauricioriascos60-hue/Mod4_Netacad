#include <stdio.h>

int main() {
    
    char n1[] = "1";
    char n2[] = "2";
    char n3[] = "3";
    char n4[] = "4";
    char ip[20];
    sprintf(ip, "%s.%s.%s.%s", n1, n2, n3, n4);
    printf("%s\n", ip);

    return 0;
}
