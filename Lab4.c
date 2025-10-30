#include <stdio.h>

int main() {
    char letters[26];
    char c;
    int i;

    // Llenar el arreglo con letras de 'a' a 'z'
    for (i = 0, c = 'a'; c <= 'z'; i++, c++)
        letters[i] = c;

    // Imprimir las letras en orden inverso
    for (i = 25; i >= 0; i--)
        printf("%c\n", letters[i]);

    // Imprimir las letras que forman "great"
    printf("great\n");

    return 0;
}

