#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double score;
void marhale(int n,int m)
{
	int a[n],b[n],i;
	double c=0;
	for(i=0;i<n;i++)
	{
		a[i]=pow(10,m-1)+(rand())%(int)(pow(10,m)-pow(10,m-1));
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
//		printf("Enter %dth number.\n",i+1);		
		scanf("%d",&b[i]);
		if(a[i]==b[i])
		{
			printf("Correct :) :D\n");
			c++;
		}
		else
			printf("Incorrect :( :P\n");			
	}
	score=c/n;
}
int main() {
	int n,m,i,v;
	scanf("%d%d",&n,&m);
	time_t t=time(NULL);
	srand(t);
	for(i=0;i<5;i++)
	{
		marhale(n,m);
		printf("%.2lf\n",score);
	}
	int b = 1;
	while(b)
	{
		printf("1)Continue\n2)Increase numbers\n3)Increase digits\n4)End\n");
		scanf("%d",&v);
		switch(v)
		{
			case 1:
			{
				for(i=0;i<5;i++)
				{
					marhale(n,m);
					printf("%.2lf\n",score);
				}
			}
			break;
			case 2:
			{
				n++;
				for(i=0;i<5;i++)
				{
					marhale(n,m);
					printf("%.2lf\n",score);
				}
			}
			break;		
			case 3:
			{
				m++;
				for(i=0;i<5;i++)
				{
					marhale(n,m);
					printf("%.2lf\n",score);
				}
			}
			break;
			case 4:
			{
				b = 0;	
			}
			break;
		}
	}
	return 0;
}

