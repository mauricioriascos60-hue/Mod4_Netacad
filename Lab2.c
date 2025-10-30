#include <stdio.h>

int main() {
    int month;
    int days = 0;

    printf("Enter the number of a month: ");
    scanf("%d", &month);

    switch (month) {
        case 12: days += 30; // November
        case 11: days += 31; // October
        case 10: days += 30; // September
        case 9:  days += 31; // August
        case 8:  days += 31; // July
        case 7:  days += 30; // June
        case 6:  days += 31; // May
        case 5:  days += 30; // April
        case 4:  days += 31; // March
        case 3:  days += 29; // February (leap year)
        case 2:  days += 31; // January
        case 1:
            if (month >= 1 && month <= 12)
                printf("%d\n", days);
            else
                printf("Error: no such month in my calendar.\n");
            break;
        default:
            printf("Error: no such month in my calendar.\n");
            break;
    }

    return 0;
}


