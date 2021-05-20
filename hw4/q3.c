#include <stdio.h>

int ragham(int x)
{
	int i=0;
	while(x!=0)
	{
		x=x/10;
		i++;
	}
	return i;
}
void chap(int x)
{
	int i=0;
	printf("%d: ",x);
	for(i=0;i<x;i++)
	{
		printf("%d",x);
	}
	printf("\n");
}
int main()
{
	int i,n,m,r=0;
	scanf("%d",&n);
	m=ragham(n);
	while(m!=0)
	{
		chap(n/pow(10,m-1));
		n%=(int)pow(10,m-1);
		m--;
	}
	return 0;
}
