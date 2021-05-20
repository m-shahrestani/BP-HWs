#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,c,m=0,n;
	scanf("%d",&c);
	n=sqrt(c);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i*i+j*j==c)
			{
				m=1;
				break;
			}
		}
	}
	if(m==1)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}
