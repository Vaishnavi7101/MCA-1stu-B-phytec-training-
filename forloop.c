#include<stdio.h>
int main()
{
	int i,j,rows;
	printf("enter a number of rows:");
	scanf("%d",&rows);
	for(i=0;i<=rows;i++)
	{
		for(j=0;j<=(rows-i);j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
