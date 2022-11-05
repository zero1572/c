#include <stdio.h>
int main()
{
	char ch;
	printf("请输入成绩：");
	scanf("%c",	&ch);
	switch(ch)
	{
		case 'A':
			printf("你的成绩在90分以上！\n");
			break;
		case 'B':
			printf("你的成绩在80~90之间！\n");
			break;
		case 'C':
			printf("你的成绩在70~80之间！\n");
			break;
		case 'D':
			printf("你的成绩在60~70之间！\n");
			break;
		case 'E':
			printf("你的成绩在60以下！\n");
			break;
		default:
			printf("请输入有效成绩！\n");
			break;
	}
	return 0;
}
