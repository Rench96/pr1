// Задание 1.6

#include <stdio.h>

#define DAYS_IN_YEAR 365
#define HOURS_IN_DAY 24
#define SECONDS_IN_HOUR 3600

int main() {
    int years = 18;
    int days = years * DAYS_IN_YEAR;
    int hours = days * HOURS_IN_DAY;
    int ticks = hours * SECONDS_IN_HOUR;

    printf("Тики: %d|Часы: %d|Дни: %d|Годы: %d\n", ticks, hours, days, years);
    return 0;
}