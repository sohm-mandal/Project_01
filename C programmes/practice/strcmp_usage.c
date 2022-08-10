#include <stdio.h>
#include <string.h>

int main()
{
    char indira[] = "Indira";
    char ujwal[] = "Ujwal";

    if (strcmp(indira, ujwal) == 0)
    {
        printf("indira > ujwal\n");
    }
    else
    {
        printf("indira < ujwal\n");
    }

    return 0;
}
