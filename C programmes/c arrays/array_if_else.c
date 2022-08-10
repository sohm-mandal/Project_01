#include <stdio.h>

int main()
{
    int arr1[100], arr2[100];
    int i, n, m, sum = 0;

    printf("Enter the number of elements in the first array : ");
    scanf("%d", &n);

    printf("Input %d elements in the first array :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
        
    }

    printf("Enter the number of elements in the second array : ");
    scanf("%d", &m);


    printf("Input %d elements in the second array :\n", m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
        
    
        if (arr2[i] == arr1[i])
        {
            printf("Both equal");
        }

        else {
            printf("Both not equal");
        }
    }
    
    return 0;
}