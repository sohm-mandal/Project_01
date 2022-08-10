#include <stdio.h>
#include <string.h>
struct date
{
    // Format of Date- DD-MM-YYYY
    int day;
    char b1;
    int month;
    char b2;
    int year;
};
struct jailmembers
{
    struct date date_admission[10];
    struct date date_leaving[10];
};
int main()
{
    struct jailmembers j;

    scanf("%d%c%d%c%d", &j.date_admission->day, &j.date_admission->b1, &j.date_admission->month, &j.date_admission->b2, &j.date_admission->year);
    scanf("%d%c%d%c%d", &j.date_leaving->day, &j.date_leaving->b1, &j.date_leaving->month, &j.date_leaving->b2, &j.date_leaving->year);
    printf("%d\n", j.date_admission->day - j.date_leaving->day);
    printf("%d\n", j.date_admission->month - j.date_leaving->month);
    printf("%d\n", j.date_admission->year - j.date_leaving->year);

    return 0;
}