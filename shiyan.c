#include <stdio.h>
int main()
{
	int i,j;
	for (i=1;j<=9;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("%d*%d=%d ",i,j,i*j);
		}
		putchar('\n');
	}
	return 0;
}
