#include <stdio.h>
#include <math.h>

int main() {
	int x1,y1,x2,y2,x3,y3,x4,y4,a1,a2,a3,a4,d1,d2;
	scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	a1=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	a2=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	a3=sqrt(pow(x3-x4,2)+pow(y3-y4,2));
	a4=sqrt(pow(x4-x1,2)+pow(y4-y1,2));
	d1=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
	d2=sqrt(pow(x4-x2,2)+pow(y4-y2,2));
	if(a1==a2&&a2==a3&&a3==a4&&d1==d2)
		printf("true");
	else
		printf("false");
	return 0;
}
