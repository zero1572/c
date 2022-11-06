#include <stdio.h>
int main()
{
	int a,g,s,b,c;
	printf("输入一个三位的整数：");
	scanf("%d",&a);
	g=a%10;
	b=a/100;
	s=a/10%10;\\提取十位数
	c=g+s+b;
	printf("%d的每位数字累加之和为：%d\n",a,c);
	printf("%d,%d,%d\n",g,s,b);
	
	return 0;
}
