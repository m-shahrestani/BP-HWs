#include <stdio.h>

int a[20];
int ragham(long long int x)
{
	int i=0;
	while(x!=0)
	{
		x=x/10;
		i++;
	}
	return i;
}

void farr(long long int x)
{
	int i,m,r;
	m=ragham(x);
	for(i=m-1;i>=0;i--)
	{
		a[i]=x%10;
		x/=10;
	}
}

long long int pw(int x,int y)
{
	long long int r=1;
	int i;
	for(i=0;i<y;i++)
	{
		r*=x;
	}
	return r;
}
int main()
{
	long long int i,n,m,r=0;
	scanf("%lld",&n);
	farr(n);
	m=ragham(n);
	for(i=0;i<=m-1;i++)
	{
		if(a[i]==1)
		{
			r+=pw(10,m-(i+1)-1)*a[i]*(m-(i+1))+(n%pw(10,m-(i+1)))+1;
		}
		if(a[i]>1)
		{
			r+=pw(10,m-(i+1))+pw(10,m-(i+1)-1)*a[i]*(m-(i+1));
		}
	}	

	printf("%d",r);	
	return 0;
}
