#include <stdio.h>
int main()
{
	float x,y;
	printf("������x��ֵ��");
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
		printf("�������ֲ��ڷ�Χ�ڡ�");
	}
	return 0;
}
