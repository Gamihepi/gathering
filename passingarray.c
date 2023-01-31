#include<stdio.h>
void sum(int num[])
{
	int i,sum=0;
	for(i=0;i<=4;i++)
	{
		sum=sum+num[i];
	}
	
	printf("sum of all array element = %d",sum);
	
}
main()
{
	int i,a[5];
	for(i=0;i<=4;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	sum(a);
}
