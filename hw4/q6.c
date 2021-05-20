#include <stdio.h>

int main()
{
	int n,x,i,c=0;
	char p;
	scanf("%d %d",&n,&x);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if((a[i]>x))
		{
			c+=2;
		}
		else
		{
			c++;
		}
	}
	printf("%d",c);
	return 0;
}
