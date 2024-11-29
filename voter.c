#include<stdio.h>
int main()
{
	int age;
	printf("enter the age");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("%d is eligible for vote",age);
	}
	else
	{
		printf("%d is not eligible for vote",age);
	}
	return 0;
}
	
