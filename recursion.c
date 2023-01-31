#include<stdio.h>
int fact(int a)
{
	if(a>=1)
	{
		return a*fact(a-1);
	}
	else
	{
		return 1;
	}
}
main()
{
	int n;
	printf("enter the value of n=");
	scanf("%d",&n);
	printf("factorial=%d",fact(n));
}
