/*
1 2 3
1 2 3
4 5 6
1 2 3 1 2 3 4 5 6
*/
#include <stdio.h>
int main()
{
    int arr[3][3]; // arr[rows][column]
    int rows, column;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    printf("Enter the number of columns : ");
    scanf("%d", &column);
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < column; j++)
        {
            // i=0, j=0,1,2
            scanf("%d", &arr[i][j]);
        }
    }
    // printf("%d",arr[0][0]);
    // arr= {{1,2,3},{1,2,3},{4,5,6}}
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            int m;
            m = arr[i][j];
            printf("%d ", m);
        }
        printf("\n");
    }

    return 0;
}