#include <stdio.h>

int largest_factor(int n)
{
	int i,j,m=0;
	for(i=n;i>0;i--)
	{
		if(n%i==0)
		{
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				{
					m++;
				}
			}
		}
		if(m==2)
		{
			return i;
			break;
		}
		m=0;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n>1)
	{
		printf("%d\n",largest_factor(n));
		n/=largest_factor(n);
	}
	return 0;
}
