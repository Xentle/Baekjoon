#include <stdio.h>

int x = 1000000007;
long long int b1=1, b2=1, ans=0;
long long int fastpow(int p);

int main () {
	int n, k;
	scanf("%d %d", &n, &k);
	getchar();
	for(int i=1; i<=n; i++) {
		b1 *= i;
		b1 %= x;
	}
	for(int i=1; i<=k; i++) {
		b2 *= i;
		b2 %= x;
	}
	for(int i=1; i<=(n-k); i++) {
		b2 *= i;
		b2 %= x;
	}
	b2 = fastpow(x-2);
	ans = (b1*b2)%x;
	printf("%lld\n", ans);
	return 0;
}

long long int fastpow(int p) {
	long long int ret;
	if(p == 1)
		return b2;
	if(p%2 == 1)
		return (b2 * fastpow(p-1)) % x;
	ret = fastpow(p/2) % x;
	return (ret * ret) % x;
}