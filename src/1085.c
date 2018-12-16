#include <stdio.h>

int main() {
	int x, y, w, h, ans;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	getchar();
	ans = w - x;
	if(h - y < ans)
		ans = h - y;
	if(x < ans)
		ans = x;
	if(y < ans)
		ans = y;
	printf("%d\n", ans);
	return 0;
}