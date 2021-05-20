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
	int a,p,b,i=0,x[1000],ca,cb,c,r=1;
	scanf("%d%d",&a,&b);
	while(a>1)
	{
		ca=0;
		cb=0;
		p=largest_factor(a);
		while(a%p==0)
		{
			ca++;
			a/=p;
		}
		while(b%p==0)
		{
			cb++;
			b/=p;
		}
		c=fmin(ca,cb);
		while(c--)
		{
			r*=p;
		}
	}
	printf("%d",r);
	return 0;
}

