/*
（1）将A上n-1个盘借助C座先移到B座。
（2）把A座上剩下的一个盘移动到C座上。
（3）将n-1个盘从B座借助于A座移到C座上。
(1)n-1,one,three,two;
(2)one,three;
(3)n-1,two,one,three;
*/
#include <stdio.h>
void hanoi(int n,char one,char two,char three);
//n层   1柱，2柱子，3柱子
void move(char x,char y);

int main()
{
	int i;
	char a='A',b='B',c='C';
	printf("ÇëÊäÈën¸öÊý£º");
	scanf("%d",&i);
	hanoi(i,a,b,c);
	return 0;
}

void move(char x,char y)
{
	printf("%c-->%c\n",x,y);
}
void hanoi(int n,char one,char two,char three)
{
	if(n==1)
	{
		move(one,three);
	}
	else
	{
		hanoi(n-1,one,three,two);
		move(one,three);
		hanoi(n-1,two,one,three);
	}
}
