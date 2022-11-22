#include <stdio.h>
int main()
{
	int i,j,n;
	printf("ÇëÊäÈëÒªµÄÐÐÊý£º");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=i;j>=0;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=n-i-2;j>=0;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
