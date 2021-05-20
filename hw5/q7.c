#include <stdio.h>

int f1(int n)
{
	if(n==0||n==1)
		return 1;
	else
		return f1(n-1)+f1(n-2);
}
int f2(int n)
{
	if(n==0||n==1||n==2)
		return 1;
	else
		return f2(n-2)+f2(n-3)-f2(n-1);
}
int f3(int n)
{
	if(n==0||n==1)
		return 1;
	else if(n==2)
		return 2;
	else
		return 2*f3(n-2)-f3(n-1)+f3(n-3);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",f1(n));
	printf("%d\n",f2(n));
	printf("%d\n",f3(n));
	return 0;
}

