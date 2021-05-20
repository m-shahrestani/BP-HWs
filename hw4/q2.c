#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n,i,x_n=0;
	scanf("%d",&n);
	double p;
	time_t t=time(NULL);
	srand(t);
	printf("%d\n",x_n);
	for(i=1;i<=n;i++)
	{
		p=(rand()+1)/(RAND_MAX+2.0);
		if(p>=0.5)
			x_n++;
		else
			x_n--;
		printf("%d\n",x_n);
	}
	return 0;
}
