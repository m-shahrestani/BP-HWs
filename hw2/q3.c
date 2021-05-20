#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	double a,b,c,d,A,B,C,D;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	A=(a/(a+b))+(b/(b+c))+(c/(c+d));
	B=exp(log(fabs(a))+sin(b)+tan(c));
	C=a*(a+b)*b*(log(c));
	D=pow((1/(pow(a,1.2)))+(2/(pow(b,2.3))),4.5);
	printf("a: %.2lf\nb: %.2lf\nc: %.2lf\nd: %.2lf",A,B,C,D);
	return 0;
	}
