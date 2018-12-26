#include <stdio.h>

int price[1001], m[1001];
int makeMax(int x);

int main() {
	int n;
	scanf("%d", &n);
	getchar();
	for(int i=1; i<=n; i++) {
		scanf("%d", &price[i]);
		getchar();
	}
	for(int i=1; i<=n; i++)
		m[i] = -1;
	m[1] = price[1];
	printf("%d\n", makeMax(n));
	// n 만드는 최대 가격
	return 0;
}

int makeMax(int x) {
	int max, temp;
	if(m[x] != -1)
		return m[x];
	max = price[x];
	for(int i=1; i<=x/2; i++) {
		if((temp = makeMax(i) + makeMax(x-i)) > max)
			max = temp;
	}
	return m[x] = max;
}