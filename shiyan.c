#include <stdio.h>
int main()
{
	char isRain,isFree;
	
	printf("�Ƿ��пգ�(Y/N)");
	scanf("%c",&isFree);
	
	getchar();/*���˻س�*/
	
	printf("�Ƿ����ꣿ(Y/N)");
	scanf("%c",&isRain);
	if (isFree=='Y')
	{
		if(isRain=='Y')
			printf("�ǵô���ɡ^_^\n");
	}
	else
	{
		printf("Ů��û�գ�T_T\n");
	}
	return 0;
}
