#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter four numbers");
scanf("%d%d%d%d",&a,&b,&c,&d);
    if (a > b)
    {
        if (a > c)
       	{
            if (c > d)
	    {
                printf("%d smallest number is \n", d);
            }
	    else
	    {
                printf("%d smallest number is \n", c);
            }
        }
       	else
       	{
            if (b > d)
	    {
                printf("%d smallest is \n",d);
            }
	    else
	    {
                printf("%d smallest number is \n", b);
            }
        }
    }
    else
    {
        if (a > c)
       	{
            if (d > b)
	    {
                printf("%d smallest number is \n", b);
            }
	    else
	    {
                printf("%d smallest number is \n", d);
            }
        }
       	else
       	{
            if (a > d)
	    {
                printf("%d smallest number is \n", d);
            }
	    else
	    {
                printf("%d smaller number is \n", a);
            }
        }
    }

    return 0;
}





