#include <stdio.h>

int checkpoint(double x1,double y1,double x2,double y2,double x3,double y3)
{
	double m;
	m=(y2-y1)/(x2-x1);
	if((x2==x1)&&(x2==x3))
	{
		return 1;
	}
	else if(y3-y1<=(m*(x3-x1))+0.000000001&&y3-y1>=(m*(x3-x1))-0.0000000001)
		return 1;
	else
		return 0;
}
int main() {
	int n,i,j,c=0,max=0;
	scanf("%d",&n);
	double x[n],y[n];
	for(i=0;i<n;i++)
	{
		scanf("%lf",&x[i]);
		scanf("%lf",&y[i]);		
	}
	for(i=0;i+1<n;i++)
	{
		c=0;
		for(j=0;j<n;j++)
		{
			c+=checkpoint(x[i],y[i],x[i+1],y[i+1],x[j],y[j]);
			if(max<c)
			{
				max=c;	
			}
		}	
	}
	if(n==1)
	{
		printf("1");
	}
	else 
		printf("%d",max);
	return 0;
}
