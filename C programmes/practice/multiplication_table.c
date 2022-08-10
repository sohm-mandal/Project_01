#include<stdio.h>
int main()
{
	//Using Loops

	int table;
	printf("\nEnter the number you want multiplication table of : ");
	scanf("%d", &table);

	printf("Multiplication table of %d is as follows:\n", table);

	for (int i =1; i<=10; i++)
	{
		printf("%d*%d = %d\n",table,i, i*table );
	}
	
	
	return 0;
}