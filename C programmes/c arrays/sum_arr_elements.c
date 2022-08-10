#include <stdio.h>

int main()
{
    int a[100];
    int i, n, sum=0;
    
       printf("Enter the number of elements: ") ;  
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0 ; i<n ; i++)
        {
	      
	      scanf("%d",&a[i]);
	    }

    for(i=0; i<n; i++)
    {
        sum += a[i];
    }
    printf("The sum of the elements is: ");
    printf("%d\n\n", sum);
    return 0;
}