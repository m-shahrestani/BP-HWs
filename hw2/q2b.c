#include <stdio.h>
#include <stdlib.h>
int main() {
int i, j;
double c, d;
d = 11.0;
c += d / 22;
j = i = 10;
j += (i++) + (--d);
c /= i+++d;
printf("%f, %f, %d, %d\n", c, d, i, j);
	return 0;
}
