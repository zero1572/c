#include <stdio.h>
int main()
{
	char isRain,isFree;
	
	printf("是否有空？(Y/N)");
	scanf("%c",&isFree);
	
	getchar();/*过滤回车*/
	
	printf("是否下雨？(Y/N)");
	scanf("%c",&isRain);
	if (isFree=='Y')
	{
		if(isRain=='Y')
			printf("记得带雨伞^_^\n");
	}
	else
	{
		printf("女神没空！T_T\n");
	}
	return 0;
}
