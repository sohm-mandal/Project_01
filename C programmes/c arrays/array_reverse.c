#include<stdio.h>
int main()
{
    int arr[100];
    int j,i,n;

printf("enter the number of elements: ");
scanf("%d", &n);

for (i=0; i<n; i++)  
    {  
	    scanf("%d", &arr[i]);  
    }  
    printf("Elements in array are:\n");  

for (i=0; i<n; i++)  
    {  
        printf("%d\n", arr[i]);  
    } 
    printf("the reversed array is:\n");
    
for ( j = n-1; j >= 0; j--)
{
    printf("%d\n", arr[j]);
}
    return 0;
}