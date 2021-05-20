#include <stdio.h>
#include <stdlib.h>
int main() {
	float a = 10.2, b = 20.1;
	short c = 200, d = 40, e = 20, f = 15, g = 110;
	printf("%d\n",sizeof(short));
	printf("%d\n",sizeof(float));
	printf("%d:%f\n",sizeof(((a * b) / c) + ((e / f) + 100)),((a * b) / c) + ((e / f) + 100));
	printf("%d:%f\n",sizeof(((c % f) - (b / a) - g)),(c % f) - (b / a) - g);
	printf("%d:%f\n",sizeof((a + b + c / d / e / f + g)),a + b + c / d / e / f + g);
	printf("%d:%f\n",sizeof((a + g) / (b * f) + (a - (f / g))),(a + g) / (b * f) + (a - (f / g)));
	printf("%d:%f\n",sizeof(((((g - c) % f) * d) + ((a + b) - a)) * c),((((g - c) % f) * d) + ((a + b) - a)) * c);
	return 0;
}
