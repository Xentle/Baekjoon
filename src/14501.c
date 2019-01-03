#include <stdio.h>

int time[16], price[16], m[17], n;

int main() {
	int max;
	scanf("%d", &n);
	getchar();
	for(int i=1; i<=n; i++) {
		scanf("%d %d", &time[i], &price[i]);
		getchar();
	}
	for(int i=1; i<=n; i++)
		m[i] = -1;
	m[16] = 0;
	max = countMax(1);
	printf("%d\n", max);
	return 0;
}

int countMax(int x) {
	int max=0, t1, t2;
	if(m[x] != -1)
		return m[x];
	if(x+time[x] > n+1)
		return m[x] = countMax(x+1);
	t1 = countMax(x+1);
	t2 = price[x] + countMax(x+time[x]);
	if(t1 > t2)
		return m[x] = t1;
	else
		return m[x] = t2;
}