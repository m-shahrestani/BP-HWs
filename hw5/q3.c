#include <stdio.h>

int x=2,y=1;
void f(void)
{
	int a,b;
	a=x;
	b=y;
	x=a*a-b*b;
	y=2*a*b;
}
int main()
{
	int n,i;	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		f();
	}
	printf("(%d, %d)",x,y);
	return 0;
}

