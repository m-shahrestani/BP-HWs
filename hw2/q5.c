#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main() {
	int a1,a2,a3,a4,a5,a6,b1,b2,b3,b4,b5,b6,x1=0,x2=0,x3=0,y1=0,y2=0,y3=0;
	double a=0,b=0,c=0,d=0;
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d",&a1,&b1,&a2,&b2,&a3,&b3,&a4,&b4,&a5,&b5,&a6,&b6);
	
	if(a1>b1||a2>b2||a3>b3||a4>b4||a5>b5||a6>b6)//Shart baze boodan
	{
		printf("Baze ghalat ast.");
		return -1;
	}
	
	time_t t=time(NULL);
	srand(t);
														
	x1=a1+(rand())%(b1-a1+1);	
	y1=a2+(rand())%(b2-a2+1);	
	x2=a3+(rand())%(b3-a3+1);	
	y2=a4+(rand())%(b4-a4+1);
	y3=a6+(rand())%(b6-a6+1);
	x3=a5+(rand())%(b5-a5+1);	
	a=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	b=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	c=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
		
	if(a>=(b+c)||b>=(a+c)||c>=(a+b))//shart mosallas boodan
	{
		printf("Tashkil mosallas nemidahad.");
		return -1;
	}
	
	d=a+b+c;
	printf("%lf",d);
	return 0;
}

