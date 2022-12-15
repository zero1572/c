#include <stdio.h>
void hanoi(int n,char one,char two,char three);
//n²ã 1Öù   2Öù   3Öù
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
