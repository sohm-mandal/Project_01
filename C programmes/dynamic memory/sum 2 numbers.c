// Write a program in C to add two numbers using pointers. 
//Go to the editor
// Test Data :
// Input the first number : 5
// Input the second number : 6
// Expected Output :
// The sum of the entered numbers is : 11 

#include<stdio.h>
int main()
{
    int sum;
    int x = 5;
    int y = 10;
    int *p = &x;
    int *q = &y;
    sum = *p + *q ;
    printf("%d", sum);

    return 0;
}