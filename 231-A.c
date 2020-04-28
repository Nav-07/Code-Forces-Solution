#include <stdio.h>

main() {
	int n = 0;
	scanf("%d", &n);
	int totalcount = 0;
	for (int i = 0; i < n; ++i) {
		int a,b,c;
		scanf("%d %d %d", &a, &b, &c);
		int count = 0;
		if (a == 1)
			++count;
		if (b == 1)
			++count;
		if (c == 1)
			++count;
		if (count >= 2)
			++totalcount;
	}
	printf("%d\n", totalcount);
	return 0;
}
