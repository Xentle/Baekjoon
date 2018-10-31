#include <stdio.h>

int main() {
	long long int n, m[91][2];
	scanf("%lld", &n);
	m[1][0] = 0;
	m[1][1] = 1;
	m[2][0] = 1;
	m[2][1] = 0;
	m[3][0] = 1;
	m[3][1] = 1;
	for(int i=4; i<=n; i++) {
		m[i][0] = m[i-1][1] + m[i-1][0];
		m[i][1] = m[i-1][0];
	}
	printf("%lld\n", m[n][0] + m[n][1]);
	return 0;
}