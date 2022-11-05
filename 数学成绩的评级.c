#include <stdio.h>
int main()
{
	float a;
	printf("请输入数学成绩：");
	scanf("%f",&a);
	if(100>a&&a>90)
	{
		printf("等级为A");
	}
	else if(90>=a&&a>80)
	{
		printf("等级为B");
	}
	else if(80>=a&&a>70)
	{
		printf("等级为C");
	}
	else if(70>=a&&a>60)
	{
		printf("等级为D");
	}
	else if(60>=a&&a>0)
	{
		printf("等级为E");
	}
	else
	{
		printf("输入格式错误。");
	}
	return 0;
}
