//with arguement and return value
#include <stdio.h> 
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int a,b,c;
    a=9;
    b=8;
    c= sum(a,b);
    printf("The sum is %d",c);
    return 0;
}