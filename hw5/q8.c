#include <stdio.h>

int main()
{
	int n,i,max,min;
	scanf("%d",&n);
	int x[n],y[n];
	for(i=0;i<n;i++)
	{
		scanf("\n(%d, %d)",&x[i],&y[i]);		
	}
	max=x[0];
	min=y[0];	
	for(i=1;i<n;i++)
	{
		if(max<x[i])
			max=x[i];
		if(min>y[i])
			min=y[i];				
	}
	printf("(%d, %d)",max,min);
	return 0;
}

