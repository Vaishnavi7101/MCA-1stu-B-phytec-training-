#include<stdio.h>
int main()
{
	int n1,n2,n3,n4;
	printf("enter any four numbers\r\n");
	scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
	if(n1<n2)
	{
		if(n1<n3)
		{
			if(n3<n4)
			{
				printf("%d is greatest number",n3);
			}
			else
			{
				printf("%d is greatest number",n4);
			}
		}
			else
			{
				if(n2<n4)
				{
					printf("%d is greater number",n2);
				}
				else
				{
					printf("%d is greatest number",n4);
				}
			}
	}
			else
			{
				if(n1<n3)
				{
					if(n4<n2)
					{
						printf("%d is greater number",n4);
					}
					else

					{
						printf("%d is greater number",n2);
				}
			}
			else
			{
				if(n1<n4)
				{
					printf("%d is greater number",n1);
				}
				else
				{
					printf("%d is greater number",n4);
				}
			}
		}
		return 0;
	}

