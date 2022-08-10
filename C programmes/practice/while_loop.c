#include <stdio.h> 
int main()
{
    int num,i = 0;
    printf("enter the number");
    scanf("%d",&num);
    while (i<num)
    {
        printf("%d",i);
        i = i+1;
    }
    
    return 0;
}