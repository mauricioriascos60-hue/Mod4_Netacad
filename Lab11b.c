#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char ip[] = "127.0.0.1"; 
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
    char *parts[4];
    char *token = strtok(ip, ".");
    int i = 0;
    while (token != NULL && i < 4) {
        parts[i++] = token;
        token = strtok(NULL, ".");
    }

    printf("Last 3 parts: %s.%s.%s\n", parts[1], parts[2], parts[3]);
    printf("Last 2 parts: %s.%s\n", parts[2], parts[3]);
    printf("Last 1 part: %s\n", parts[3]);

    return 0;
}
