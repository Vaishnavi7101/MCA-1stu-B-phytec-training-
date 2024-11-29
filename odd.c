#include<stdio.h>
int main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	if (num>=1&&num<=100)
	{
		if(num%2==0)
		{
			printf("the number %d is even.\n",num);
		}
		else
		{
			printf("the number %d is odd.\n",num);
		}
	}
	else
	{
		printf("enter a number between 1 and 100.\n");
	}
	return 0;
}
