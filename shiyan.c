#include <stdio.h>
int main()
{
	int name,pass,i=3;

	while(i>0)
	{
		i--;
		printf("������ѧ�ţ�");
		scanf("%d",&name);
		printf("�������¼���룺");
		scanf("%d",&pass);
		if(name!=1001&&pass!=333)
		{
			if(i==0)
			{
				printf("����3�Σ�ϵͳ�˳�");
				break;
			}
			printf("�������룬������%d�λ���\n",i);
			
		}
		else
		{
			printf("��ϲ��������ȷ��");
			break;
		}
	}
	return 0;
}
