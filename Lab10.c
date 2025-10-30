#include <stdio.h>

int main() {
    double src[10] = {3.5, 5.8, 1.3, 8.8, 4.2, 7.2, 3.4, 6.5, 2.3, 8.2};
    double dst[10];
    double *ps, *pd;
    ps = src;
    pd = dst;
    for (int i = 0; i < 10; i++) {
        *pd = *ps + 1.0;
        ps++;
        pd++;
    }
    int left = 4;   
    int right = 5;  

    while (left >= 0 || right < 10) {
        if (left >= 0) {
            printf("%.1f\n", dst[left]);
            left--;
        }
        if (right < 10) {
            printf("%.1f\n", dst[right]);
            right++;
        }
    }

    return 0;
}
