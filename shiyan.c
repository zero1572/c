#include <stdio.h>
int main()
{
	int a,g,s,b,c;
	printf("����һ����λ��������");
	scanf("%d",&a);
	g=a%10;
	b=a/100;
	s=a/10%10;\\��ȡʮλ��
	c=g+s+b;
	printf("%d��ÿλ�����ۼ�֮��Ϊ��%d\n",a,c);
	printf("%d,%d,%d\n",g,s,b);
	
	return 0;
}
