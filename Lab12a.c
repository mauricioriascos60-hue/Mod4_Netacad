#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "book";      
    char reversed[100];
    int length = strlen(word);
    for (int i = 0; i < length; i++) {
        reversed[i] = word[length - i - 1];
    }
    reversed[length] = '\0';

    printf("%s\n", reversed);

    return 0;
}
