#include <stdio.h>
long recursion(int);//递归
int main()
{
	int n;
	long result;
	
	printf("ÊäÈëÒ»¸öÊý:\n");
	scanf("%d",&n);
	
	result=recursion(n);
	printf("%d!=%ld",n,result);
	
	return 0;
}
long recursion(int n)
{
	int temp_result;
	if(n<0)
	{
		printf("输入格式错误。");
	}
	else if(n==0||n==1)
	{
		temp_result=1;
	}
	else
	{
		temp_result=recursion(n-1)*n;
		
	}
	return temp_result;
}
