#include <stdio.h>
int main()
{
	int a,b=0;
	printf("请输入一个正整数：");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10+b*10;
		a=a/10;
	}
	printf("输出其反序整数为：%d",b);
	return 0;
}
