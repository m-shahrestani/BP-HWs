#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main() {
	int n,a,b,c,d;
	scanf("%d",&n);
	if(n<=0&&n>=2*RAND_MAX)
	{
		return-1;
	}
	time_t t=time(NULL);
	srand(t);
	a=((rand())%((n+1)/2))*2;
	b=((rand())%((n+1)/2))*2;
	c=((rand())%((n+1)/2))*2;
	d=((rand())%((n+1)/2))*2;
	printf("%d\n%d\n%d\n%d\n",a,b,c,d);
	
	return 0;
}

