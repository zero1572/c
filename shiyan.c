#include <stdio.h>
int main()
{
	float x,y;
	printf("请输入x的值：");
	scanf("%f",&x);
	if(x>-5&&x<0)
	{
		y=x;
		printf("y=%f",y);
	}
	else if(x==0)
	{
		y=x-1;
		printf("y=%f",y);
	}
	else if(x>0&&x<10)
	{
		y=x+1;
		printf("y=%f",y);}
	else
	{
		printf("输入数字不在范围内。");
	}
	return 0;
}
