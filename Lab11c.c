#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char ip[] = "255.2555.255.255"; 
    int dots = 0;
    int count = 0;
    for (int i = 0; ip[i] != '\0'; i++) {
        if (isdigit(ip[i])) {
            count++;
            if (count > 3) {
                printf("Error: not a valid address.\n");
                return 0;
            }
        } else if (ip[i] == '.') {
            dots++;
            count = 0;
        } else {
            printf("Error: not a valid address.\n");
            return 0;
        }
    }

    if (dots != 3) {
        printf("Error: not a valid address.\n");
        return 0;
    }

    printf("Last 3 parts: ... (no se ejecuta porque es inválida)\n");

    return 0;
}
