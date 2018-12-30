#include <stdio.h>

int n, tree[1000001], m;
int keyfunc(int l, int h);

int main() {
	int high=0, ans;
	scanf("%d %d", &n, &m);
	getchar();
	for(int i=1; i<=n; i++) {
		scanf("%d", &tree[i]);
		getchar();
	}
	for(int i=1; i<=n; i++) {
		if(tree[i] > high)
			high = tree[i];
	}
	ans = keyfunc(0, high);
	printf("%d\n", ans);
	return 0;
}

int keyfunc(int l, int h) {
	printf("%d %d\n", l, h);
	int mid = (l + h) / 2;
	long long int t=0;
	if(h == (l + 1) || h == l) {
		for(int i=1; i<=n; i++) {
			if(tree[i] > h)
				t += (tree[i] - h);
		}
		if(t < m)
			return l;
		else
			return h;
	}
	for(int i=1; i<=n; i++) {
		if(tree[i] > mid)
			t += (tree[i] - mid);
		if(t > m)
			return keyfunc(mid, h);
	}
	return keyfunc(l, mid);
}