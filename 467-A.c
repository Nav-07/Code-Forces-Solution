#include <stdio.h>
main() {
	int n = 0;
	scanf("%d\n", &n);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int p, q;
		scanf("%d %d", &p, &q);
		if ((q-p)>=2)
			ans++;
	}
	printf("%d\n",ans);
	return 0;
}