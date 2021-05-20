#include <stdio.h>

void sort(int x[])
{
	int i,j,t;
	for(i=4-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(x[j]<x[j+1])
			{
			t=x[j+1];
			x[j+1]=x[j];
			x[j]=t;
			}
		}
	}
}
void f(int x[])
{
	sort(x);
	printf("%d %d %d",x[0]-x[1],x[0]-x[2],x[0]-x[3]);
}
int main()
{
	int x[4],i;
	for(i=0;i<4;i++)
	{	
		scanf("%d",&x[i]);
	}
	f(x);
	return 0;
}

