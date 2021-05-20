#include <stdio.h>
#include <math.h>

int main() {
	int n;
	float m;
	scanf("%d",&n);
	m=log(n)/(log(2));
	printf("%d",(int)ceil(m));
	return 0;
}
