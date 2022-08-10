#include <stdio.h>
int main()
{
    int i,age;
    for ( i = 0; i < 5; i++)
    {
        printf("%dEnter your age",i);
        scanf("%d", &age);
        if (age<10)
        {
            continue;
        }
        printf("Nice");
    }
    
    return 0;
}