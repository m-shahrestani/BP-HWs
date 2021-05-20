#include <stdio.h>

int mabnaye2(int x[],int i,int n)
{
	int j;
	for(j=i-1;j>=0;j--)
	{
		x[j]=n%2;
		n/=2;
	}
}
int f(int n,int a[])
{
	int i,j,c=0,max=0;
	for(i=0;i<n-1;i++)
	{
		if(a[i]==1)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[j]==1){
					max = fmax(max, j - i);
					break;
				}
			}
		}
	}
	return max;
}
int main()
{
	int n,m,i=0,j,k,c=0,max=0;
	scanf("%d",&n);
	m=n;
	while(m>0)
	{
		m/=2;
		i++;	
	}
	int x[i];
	mabnaye2(x,i,n);
	printf("%d",f(i,x));
	return 0;
	
}
