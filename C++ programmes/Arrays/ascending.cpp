#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int size, i, j, temp;

    // Reading the size of the array
    cout << "Enter size of array: ";
    cin >> size;

    // Reading elements of array
    cout << "Enter elements in array: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // Sorting an array in ascending order
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            // If there is a smaller element found on right of the array then swap it.
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // Printing the sorted array in ascending order
    cout << "Elements of array in sorted ascending order:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}

// Program Explanation
// 1. The user is initially asked to enter the size of the array and it is stored in the variable ‘n’.
// 2. An array ‘arr’ of data type integer is declared with size 10.
// 3. Elements of the array are asked to enter and stored in ‘arr’ using a for loop.
// 4. The value at index 0 of arr is assigned to the variable ‘max’.
// 5. Using a for loop and initializing ‘i’ as 0, the largest element is found.
// 6. If max is less than arr[i], then value of arr[i] is assigned to max. i is incremented in every iteration.
// 7. The loop continues till ‘i’ is less than ‘n’.
// 8. Similarly, the smallest element is found.
// 9. The value at index 0 of arr is assigned to the variable ‘min’.
// 10. Using a for loop the smallest element is assigned to min.
// 11. The result is then printed.