#include <stdio.h>
int main()
{
	float a;
	printf("��������ѧ�ɼ���");
	scanf("%f",&a);
	if(100>a&&a>90)
	{
		printf("�ȼ�ΪA");
	}
	else if(90>=a&&a>80)
	{
		printf("�ȼ�ΪB");
	}
	else if(80>=a&&a>70)
	{
		printf("�ȼ�ΪC");
	}
	else if(70>=a&&a>60)
	{
		printf("�ȼ�ΪD");
	}
	else if(60>=a&&a>0)
	{
		printf("�ȼ�ΪE");
	}
	else
	{
		printf("�����ʽ����");
	}
	return 0;
}
