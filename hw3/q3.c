#include <stdio.h>
#include <math.h>

int main() {
	int n;
	float d;
	scanf("%d",&n);
	d=log(n)/(log(2));
	if(d==rint(d))
		printf("true");
	else
		printf("false");
	return 0;
}
