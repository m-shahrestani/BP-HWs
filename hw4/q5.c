#include <stdio.h>

int main()
{
	int n,x,i,c=0,m;
	char p;
	scanf("%d %d",&n,&x);
	m=x;
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("\n%c",&p);
		scanf(" %d",&a[i]);
		if(p=='-')
			a[i]=-a[i];

		if((a[i]+m)<0)
		{
			c++;
		}
		if ((a[i]+m)>=0)
		{
			m+=a[i];
		}
	}
	printf("%d %d",m,c);
	return 0;
}
