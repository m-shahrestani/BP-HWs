#include <stdio.h>
#include <stdbool.h>

int main() {
	bool p, q;
	int r, s;
	int z1,z2,z3,z4,z5,z6;
	p = false; q = (0 == 0); r = 0; s = 20;
	z1 = (q && p) || s + 1;
	z2 = !(s && q <= p);
	z3 = !p + !s;
	z4 = !p >= !q + !p + 1 && !q;
	z5 = !s && !(!p && ++r);
	z6 = (p != q - 1) % (q <= !r);
	printf("%d\n%d\n%d\n%d\n%d\n%d",z1,z2,z3,z4,z5,z6);
	return 0;
}
