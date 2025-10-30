#include <stdio.h>

int main() {
    float data[10] = {5.6, 6.2, 6.4, 7.3, 4.3, 8.3, 9.2, 2.3, 1.9, 0.1};
    int i, j;
    float temp;

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if (data[j] < data[j + 1]) {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
        for (j = 0; j < 10; j++)
            printf("%.2f ", data[j]);
        printf("\n");
    }

    return 0;
}

