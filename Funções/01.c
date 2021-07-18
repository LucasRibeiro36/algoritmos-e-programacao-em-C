#include <stdio.h>

#define CURRENT_YEAR 2021
#define CURRENT_MONTH 7
#define CURRENT_DAY 5

int getAgeInDays(int day, int month, int year) {
    int years = CURRENT_YEAR - year;
    int months = CURRENT_MONTH - month;
    int days = CURRENT_DAY - day;

    int age = (years * 365) + (months * 30) + days;

    return age;
}

int main() {
    printf("Lucas 24-08-2000 => %d dias\n", getAgeInDays(24, 8, 2000));

    return 0;
}