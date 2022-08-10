//with arguement but no return value
#include <stdio.h> 
int sum(int a, int b);
void printstar(int n)

{
    int i ;
    for (i = 0; i < n; i++)
{
     printf("%c",'*');
}

    printf("%c",'*'); //%c because star is a character
}
int main()
{
    int a,b,c;
    a=9;
    b=8;
    c= sum(a,b);
    printstar(7);
    printf("The sum is %d",c);
    return 0;   
}