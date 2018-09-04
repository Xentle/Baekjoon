#include <stdio.h>

int T, c;
long long int m[101];
long long int dp(int i);

int main() {
	scanf("%d", &T);
	getchar();
	for(int i=1; i<=101; i++)
		m[i] = -1;
	m[1] = m[2] = m[3] = 1;
	m[4] = m[5] = 2;
	m[6] = 3;
	m[7] = 4;
	m[8] = 5;
	m[9] = 7;
	m[10] = 9;
	for(int i=1; i<=T; i++) {
		scanf("%d", &c);
		getchar();
		printf("%lld\n", dp(c));
	}
	return 0;
}

long long int dp(int i) {
	if(m[i] != -1)
		return m[i];
	else
		return m[i] = dp(i-1) + dp(i-5);
}