#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int w,h,k,i,n=0;
	scanf("%d%d%d",&w,&h,&k);
	for(i=0;i<k;i++)
	{
		n+=(2*h)+(2*w)-4;
		h-=4;
		w-=4;
		if(h<3&&w<3)
		{
			break;
		}
	}
	printf("%d",n);
	return 0;
}
