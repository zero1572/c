#include <stdio.h>
int main()
{
	int a,b=0;
	printf("������һ����������");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10+b*10;
		a=a/10;
	}
	printf("����䷴������Ϊ��%d",b);
	return 0;
}
