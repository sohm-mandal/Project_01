#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5, temp;
    // printf("Enter the size of array\n");
    // scanf("%d",&n);

    int *A = (int *)malloc(n * sizeof(int)); // (syntax learn this) dynamically allocated array.

    // for (int i = 0; i < n; i++)
    // {
    //     A[i]=i+1;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     *(A+i)=i+1;
    // }

    *(A) = 26;
    *(A + 1) = 55;
    *(A + 2) = 31;
    *(A + 3) = 78;
    *(A + 4) = 62;

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", A[i]);
    }

    printf("--------\n");

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (A[i] > A[i + 1])
            {
                temp = A[i];

                A[i] = A[i + 1];
                A[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", A[i]);
    }
}