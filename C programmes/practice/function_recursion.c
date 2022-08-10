#include <stdio.h>

int factorial(int number) // to call a function, use int or char and put that in the brackets, better to use void main also
{

    if (number == 1 || number == 0)
    {
        return 1; // the value will be of the output you want to have 
    }
    else
    {
        return (number * factorial(number - 2));
    }
}

int main()
{
    int num;
    printf("Enter the number you want the factorial of\n");
    scanf("%d", &num);
    printf("the factorial of the given number %d is %d\n", num, factorial(num));

    return 0;
}