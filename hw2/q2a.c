#include <stdio.h>
#include <stdlib.h>
int main() {
int i, j; double d; float f;
i = d = j = f = 10;
printf("%d\t%d\t%f\t%lf\n",sizeof(f),f,f,f);
printf("%d\t%d\t%f\t%lf\n",sizeof(j),j,j,j);
printf("%d\t%d\t%f\t%lf\n",sizeof(d),d,d,d);
printf("%d\t%d\t%f\t%lf\n",sizeof(i),i,i,i);
i = d * j + 1.0;
j = (int) i % (int)((double)f * j);
printf("%d, %d\n", i, j);
	return 0;
}
