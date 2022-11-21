#include <stdio.h>
int main()
{
	int name,pass,i=3;

	while(i>0)
	{
		i--;
		printf("请输入学号：");
		scanf("%d",&name);
		printf("请输入登录密码：");
		scanf("%d",&pass);
		if(name!=1001&&pass!=333)
		{
			if(i==0)
			{
				printf("错误3次，系统退出");
				break;
			}
			printf("重新输入，您还有%d次机会\n",i);
			
		}
		else
		{
			printf("恭喜你密码正确！");
			break;
		}
	}
	return 0;
}
