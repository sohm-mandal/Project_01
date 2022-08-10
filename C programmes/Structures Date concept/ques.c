#include <stdio.h>
#include <string.h>
struct date
{
    int day;
    char b1;
    int month;
    char b2;
    int year;
};
struct jailmembers
{
    struct date date_admission[10];
    char name[100];
    int person_id[100];
    int age[100];
    int years_stay[100];
    char security_level[100];
};
int main()
{
    struct jailmembers j[100];
    int n;
    scanf("%d", &n);
    char m[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", j[i].name);
        scanf("%d", &j[i].person_id);
        scanf("%d", &j[i].age);
        scanf("%d", &j[i].years_stay);
        scanf("%s", j[i].security_level);
        scanf("%d%c%d%c%d", &j[i].date_admission->day, &j[i].date_admission->b1, &j[i].date_admission->month, &j[i].date_admission->b2, &j[i].date_admission->year);
    }
    for (int i = 0; i < n - 1; i++)
    {
        char m[100];
        if (j[i].date_admission->day > j[i + 1].date_admission->day)
        {
            strcpy(m, j[i].name);
        }
        else
        {
            strcpy(m, j[i + 1].name);
        }
    }
    printf("%s", m);

    return 0;
}