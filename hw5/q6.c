#include <stdio.h>

int f(int n)
{
	int i=n,j,m=0,t,r;
	while(1)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				m++;
			}
		}
		t=i;
		r=0;
		while(t!=0)
		{
			r*=10;
			r+=t%10;
			t/=10;	
		}
		if(m==2&&i==r)
		{
			return i;
			break;
		}
		m=0;
		i++;
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",f(n));
	return 0;
}

